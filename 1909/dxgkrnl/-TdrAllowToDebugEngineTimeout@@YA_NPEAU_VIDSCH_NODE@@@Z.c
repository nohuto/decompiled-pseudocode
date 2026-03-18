/*
 * XREFs of ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C023D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C0040EA0 (-TdrValidateDebugMode@@YAXXZ.c)
 */

bool __fastcall TdrAllowToDebugEngineTimeout(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // rbx
  char v2; // al
  char v3; // bl

  v1 = a1;
  if ( (dword_1C00A4238 & 1) != 0 )
  {
    v2 = byte_1C00A423C;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C00A4238 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C00A423C = v2;
  }
  byte_1C00A2D74 = v2;
  TdrValidateDebugMode();
  if ( (byte_1C00A2D74 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected an engine timeout condition. We broke into the  debugger to allow a chance for debugging this issue.\n");
    g_EngineTimeoutNode = v1;
    v3 = 1;
    do
    {
      if ( v3 )
      {
        v3 = 0;
        g_TdrDebugMode = -1;
      }
      else
      {
        DbgPrintEx(0x65u, 0, "dxgkrnl!g_TdrDebugMode is set to invalid value 0x%X\n", g_TdrDebugMode);
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
        "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
        "           or 'ed 0x%p (mode)'\n"
        "where (mode) is: \n"
        "      0x00 - to continue execution as planned in end-user scenario\n"
        "      0x01 - to ignore timeout (useful to debug the timeout)\n"
        "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
        "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
        "\n",
        (const void *)&g_TdrDebugMode);
      __debugbreak();
    }
    while ( (unsigned int)g_TdrDebugMode >= 4 );
    g_EngineTimeoutNode = 0LL;
  }
  return g_TdrDebugMode == 1;
}
