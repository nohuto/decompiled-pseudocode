/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C001E160
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C001DAB4 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0021910 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001E264 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C005C1D0 (ACPIReleaseHardwareGlobalLock.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  KIRQL v0; // di
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  IRP **v5; // rbx
  IRP *v6; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v1 = (_QWORD *)((char *)AcpiInformation + 48);
  v2 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( v2 == (_QWORD *)((char *)AcpiInformation + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x12u,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids);
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
  }
  else
  {
    if ( (_QWORD *)v2[1] != v1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
    v5 = (IRP **)(v2 - 2);
    *((_QWORD *)AcpiInformation + 9) = v5;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v5 + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        19,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        (char)v5,
        (char)*v5);
    }
    if ( *((_WORD *)v5 + 4) == 1 )
    {
      v6 = *v5;
      v6->IoStatus.Status = 0;
      IofCompleteRequest(v6, 0);
    }
    else if ( *((_WORD *)v5 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v5)(v5);
    }
  }
}
