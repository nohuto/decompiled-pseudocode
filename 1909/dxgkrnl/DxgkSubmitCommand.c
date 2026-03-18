/*
 * XREFs of DxgkSubmitCommand @ 0x1C0111970
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v7; // r8
  struct DXGPROCESS *v8; // rbx
  unsigned int v9; // edi
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v12 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v12;
    }
  }
  if ( v8 )
  {
    v9 = DxgkSubmitCommandInternal(a1, v8, v7);
    if ( (int)(v9 + 0x80000000) >= 0
      && v9 != -1073741130
      && !g_DwmRenderDebugMode
      && *((_BYTE *)v8 + 298)
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
        v9,
        (const void *)&g_DwmRenderDebugMode);
      __debugbreak();
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v6, v5, v7);
    v9 = -1073741811;
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return v9;
}
