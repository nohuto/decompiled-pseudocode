/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00FD980
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     UserScreenAccessCheck @ 0x1C006E710 (UserScreenAccessCheck.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00F9A40 (GreIsInLowBox.c)
 *     DoesLowBoxAppHaveOutputDuplCapability @ 0x1C00FD5E4 (DoesLowBoxAppHaveOutputDuplCapability.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0106CD0 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C0106DD0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(ULONG64 a1)
{
  BOOL v2; // eax
  _OWORD *v3; // rax
  int v4; // ebx
  _DWORD *v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+28h] [rbp-50h] BYREF
  int v9; // [rsp+30h] [rbp-48h]
  _OWORD v10[3]; // [rsp+38h] [rbp-40h] BYREF

  v2 = (gOutputDuplicationTestControl & 2) != 0 || UserIsCurrentProcessDwm(a1);
  v7 = (v2 ? 4 : 0) | (8 * (gOutputDuplicationTestControl & 1));
  if ( !UserIsCurrentProcessDwm(v7) )
  {
    if ( (unsigned int)GreIsInLowBox() )
    {
      v7 |= 2u;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v7 |= 8u;
      }
    }
  }
  v3 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  v10[0] = *v3;
  v10[1] = v3[1];
  v10[2] = v3[2];
  GreEnterCriticalRegionAndAcquirePushLockExclusive(&gOutputDuplPushLock);
  v4 = ((__int64 (__fastcall *)(_OWORD *, unsigned int *))qword_1C01CD9B0)(v10, &v7);
  if ( v4 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck() )
    {
      v4 = -1073741790;
LABEL_17:
      v8 = *(_QWORD *)&v10[0];
      v9 = 0;
      ((void (__fastcall *)(__int64 *, __int64))qword_1C01CD9B8)(&v8, 1LL);
      goto LABEL_18;
    }
    v7 |= 1u;
    v4 = ((__int64 (__fastcall *)(_OWORD *, unsigned int *))qword_1C01CD9B0)(v10, &v7);
    if ( v4 < 0 )
      goto LABEL_17;
  }
LABEL_18:
  GreLeaveCriticalRegionAndReleasePushLockExclusive(&gOutputDuplPushLock);
  if ( v4 >= 0 )
  {
    v6 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = HIDWORD(v10[0]);
  }
  return (unsigned int)v4;
}
