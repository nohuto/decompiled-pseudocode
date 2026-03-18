/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00C9D30
 * Callers:
 *     <none>
 * Callees:
 *     UserScreenAccessCheck @ 0x1C001E7D0 (UserScreenAccessCheck.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00C39D0 (GreIsInLowBox.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C00D8E60 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00D8F90 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(ULONG64 a1)
{
  BOOL v2; // eax
  int v3; // eax
  char v4; // dl
  _OWORD *v5; // rax
  int v6; // ebx
  _DWORD *v8; // rdx
  int v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[4]; // [rsp+24h] [rbp-54h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF

  v2 = (gOutputDuplicationTestControl & 2) != 0 || UserIsCurrentProcessDwm();
  v9 = (v2 ? 4 : 0) | (8 * (gOutputDuplicationTestControl & 1));
  if ( !UserIsCurrentProcessDwm() && (unsigned int)GreIsInLowBox() )
  {
    v9 |= 2u;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v3 = RtlCapabilityCheck(0LL, &DestinationString, v10);
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v10[0];
    if ( !v4 )
    {
      if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v9 |= 8u;
    }
  }
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  v12[0] = *v5;
  v12[1] = v5[1];
  v12[2] = v5[2];
  GreEnterCriticalRegionAndAcquirePushLockExclusive(&gOutputDuplPushLock);
  v6 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C01A1B10)(v12, &v9);
  if ( v6 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck() )
    {
      v6 = -1073741790;
LABEL_19:
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)&v12[0];
      LODWORD(DestinationString.Buffer) = 0;
      ((void (__fastcall *)(struct _UNICODE_STRING *, __int64))qword_1C01A1B18)(&DestinationString, 1LL);
      goto LABEL_20;
    }
    v9 |= 1u;
    v6 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C01A1B10)(v12, &v9);
    if ( v6 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  GreLeaveCriticalRegionAndReleasePushLockExclusive(&gOutputDuplPushLock);
  if ( v6 >= 0 )
  {
    v8 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = HIDWORD(v12[0]);
  }
  return (unsigned int)v6;
}
