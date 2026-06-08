/*
 * XREFs of PepRegisterSpmSettings @ 0x1C0033EDC
 * Callers:
 *     RegisterKernelPepIdleStates @ 0x1C00280EC (RegisterKernelPepIdleStates.c)
 *     RegisterIdleComplete @ 0x1C0028768 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepRegisterSpmSettings(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( !PepSpmHandleQueried && (*(_DWORD *)(a1 + 264) & 0x800LL) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 1104);
    v5 = 0LL;
    PepSpmHandleQueried = 1;
    v2 = PoFxProcessorNotification(v1, 17LL, &v5);
    v3 = 0LL;
    if ( v2 >= 0 )
      v3 = v5;
    if ( v3 )
    {
      v4 = ((__int64 (*)(void))qword_1C0013640)();
      if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x14u,
          (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
          v4);
    }
  }
}
