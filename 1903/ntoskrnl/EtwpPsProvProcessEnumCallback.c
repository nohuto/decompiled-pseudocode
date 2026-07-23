/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1408FC660
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1408FC5D8 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     EtwpQueryTokenPackageInfo @ 0x140690FC0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14069114C (EtwpQueryProcessOtherInfo.c)
 *     EtwpIsProcessZombie @ 0x1407080A0 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  __int64 v5; // rcx
  bool v6; // zf
  PACCESS_TOKEN v7; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[48]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-90h] BYREF

  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  v4 = 0;
  memset(PackageSize, 0, 0x198uLL);
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0 && Process != PsIdleProcess && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        PsSetProcessTelemetryAppState(v5, 5);
    }
    else
    {
      v6 = Process == PsIdleProcess;
      a2[8] = 0;
      if ( !v6
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(Process, 0, (__int64)v11);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v9 = 0;
        v7 = PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v7, (WCHAR *)PackageSize, &v9);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v10);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v7);
        EtwpPsProvTraceProcess(Process, v9, PackageSize, (int *)&v10, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
