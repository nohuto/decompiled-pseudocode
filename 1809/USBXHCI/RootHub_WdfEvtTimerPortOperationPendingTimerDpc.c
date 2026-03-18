/*
 * XREFs of RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C0003350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 */

__int64 __fastcall RootHub_WdfEvtTimerPortOperationPendingTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi
  int v5; // edx

  v1 = (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3D8);
  v2 = *v1;
  v3 = **v1;
  v4 = *((_DWORD *)*v1 + 2);
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v5,
    11,
    212,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v4);
  *((_BYTE *)v2 + 18) = 0;
  return RootHub_DetectAndAcknowledgePortResume(v3, v4, 0LL);
}
