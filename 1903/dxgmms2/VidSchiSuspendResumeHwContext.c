/*
 * XREFs of VidSchiSuspendResumeHwContext @ 0x1C00CD6E0
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010E78 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0012174 (VidSchiSignalRegisteredEvent.c)
 *     ?DdiResumeContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RESUMECONTEXT@@@Z @ 0x1C0024240 (-DdiResumeContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RESUMECONTEXT@@@Z.c)
 *     ?DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1C0024360 (-DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiSuspendResumeHwContext(_QWORD *a1, char a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v5; // rsi
  UINT64 v6; // rax
  void *v7; // rax
  ADAPTER_RENDER *v8; // rcx
  void *v9; // rax
  ADAPTER_RENDER *v10; // rcx
  struct _DXGKARG_SUSPENDCONTEXT v12; // [rsp+20h] [rbp-18h] BYREF
  _DXGKARG_RESUMECONTEXT v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[1];
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  if ( a2 )
  {
    v6 = a1[20] + 1LL;
    a1[20] = v6;
    if ( *(_DWORD *)(v5 + 1956) == 2
      || (v12.contextSuspendFence = v6,
          v7 = (void *)a1[6],
          v8 = *(ADAPTER_RENDER **)(v5 + 8),
          v12.hContext = v7,
          v3 = ADAPTER_RENDER::DdiSuspendContext(v8, &v12),
          v3 != 259) )
    {
      a1[21] = a1[20];
      VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 168));
    }
  }
  else if ( *(_DWORD *)(v5 + 1956) != 2 )
  {
    v9 = (void *)a1[6];
    v10 = *(ADAPTER_RENDER **)(v5 + 8);
    v13.hContext = v9;
    return (unsigned int)ADAPTER_RENDER::DdiResumeContext(v10, &v13);
  }
  return v3;
}
