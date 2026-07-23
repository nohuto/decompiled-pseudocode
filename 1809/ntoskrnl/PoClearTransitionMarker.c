/*
 * XREFs of PoClearTransitionMarker @ 0x1407461B0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1401864F0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140746338 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140746404 (RtlInitializeBootStatusDataBlackBox.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  ULONG v1; // eax
  __int64 result; // rax
  char v3; // [rsp+28h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+30h] [rbp-11h] BYREF
  int v5; // [rsp+38h] [rbp-9h] BYREF
  __int128 *v6; // [rsp+40h] [rbp-1h]
  int v7; // [rsp+48h] [rbp+7h]
  int v8; // [rsp+50h] [rbp+Fh]
  __int128 *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+68h] [rbp+27h]
  char *v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+78h] [rbp+37h]

  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v5 = 7;
  v7 = 32;
  v6 = &PopBsdPowerTransition;
  v8 = 16;
  v0 = 2;
  v9 = &PopBsdPowerTransitionExtension;
  v10 = 32;
  if ( ExIsSoftBoot() )
  {
    v3 = 0;
    v12 = &v3;
    v0 = 3;
    v11 = 5;
    v13 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  memset(&PopBsdPowerTransition, 0, 0x20uLL);
  memset(&PopBsdPowerTransitionExtension, 0, 0x20uLL);
  BYTE8(PopBsdPowerTransition) = 1;
  *(_WORD *)((char *)&PopBsdPowerTransitionExtension + 1) = BYTE1(PopBsdPowerTransitionExtension) & 0xF3;
  *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
  BYTE11(PopBsdPowerTransition) |= 0xC0u;
  dword_14041124C = BYTE11(PopBsdPowerTransition) >> 6;
  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  v1 = RtlComputeCrc32(0, &Buffer, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  *((_DWORD *)&Buffer + 2) = v1;
  RtlpSystemBootStatusRequest(0x20u, (__int64)&v5, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  result = PopRecordLongPowerButtonPressDetected(0LL);
  if ( (_BYTE)PopAcpiPdttSupportEnabled )
    return ((__int64 (*)(void))qword_1403FF730)();
  return result;
}
