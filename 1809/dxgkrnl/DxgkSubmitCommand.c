/*
 * XREFs of DxgkSubmitCommand @ 0x1C0112460
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rcx
  const GUID *v5; // r8
  struct DXGPROCESS *v6; // rbx
  unsigned int v7; // edi
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v10 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v6 = *v10;
      }
    }
  }
  if ( v6 )
  {
    v7 = DxgkSubmitCommandInternal(a1, v6, v5);
    if ( (int)(v7 + 0x80000000) >= 0
      && v7 != -1073741130
      && !g_DwmRenderDebugMode
      && *((_BYTE *)v6 + 322)
      && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An unexpected render failure 0x%x from DWM has been detected.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v7,
        (const void *)&g_DwmRenderDebugMode);
      __debugbreak();
    }
    return v7;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v4);
    v12 = PsGetCurrentProcess();
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    *(_QWORD *)(v11 + 24) = v12;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
