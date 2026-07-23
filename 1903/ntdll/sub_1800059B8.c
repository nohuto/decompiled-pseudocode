/*
 * XREFs of sub_1800059B8 @ 0x1800059B8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     sub_18000456C @ 0x18000456C (sub_18000456C.c)
 *     sub_180004634 @ 0x180004634 (sub_180004634.c)
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180005400 @ 0x180005400 (sub_180005400.c)
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     sub_1800058F4 @ 0x1800058F4 (sub_1800058F4.c)
 *     sub_180005D10 @ 0x180005D10 (sub_180005D10.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     sub_18010D834 @ 0x18010D834 (sub_18010D834.c)
 *     sub_18010E404 @ 0x18010E404 (sub_18010E404.c)
 */

ULONG __fastcall sub_1800059B8(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  void *v7; // r15
  unsigned __int32 v8; // r12d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // eax
  ULONG result; // eax
  ULONG NumberOfProcessors; // r8d
  __int64 v14; // r14
  char *v15; // rdi
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  int LastErrorValue; // esi
  __int64 v21; // r14
  char *v22; // r15
  HANDLE EtwThread; // rax
  _DWORD *v24; // rcx
  unsigned int v25; // edx
  NTSTATUS v26; // eax
  void *v27; // rcx
  unsigned __int16 v28; // [rsp+30h] [rbp-59h] BYREF
  char *v29; // [rsp+38h] [rbp-51h] BYREF
  int v30; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v34; // [rsp+68h] [rbp-21h]

  v32 = a3;
  v4 = *(_DWORD *)a4 < 0xB0u;
  v29 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
    return 87;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 != 1 )
      return 87;
  }
  else
  {
    v9 |= 1u;
    *(_DWORD *)(a4 + 64) = v9;
  }
  if ( (v9 & 0x2000000) != 0 )
    return 87;
  if ( (v9 & 0x400) != 0 )
  {
    if ( *(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76) )
      return 87;
  }
  else
  {
    v11 = *(_DWORD *)(a4 + 76);
    if ( v11 && (*(_DWORD *)(a4 + 68) || v11 < 0) )
      return 87;
  }
  if ( (v9 & 6) == 6
    || (v9 & 0xC000) == 0xC000
    || (v9 & 0x4000000) != 0 && ((v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 0x20) != 0 || (v9 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)sub_18000456C((PUNICODE_STRING)(a4 + 144), &v29) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *((unsigned int *)v29 + 5) + 8));
    return 183;
  }
  result = sub_180004634(a4, (unsigned int *)&v30);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v25 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v25;
      v7 = (void *)(a4 + v25);
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = (unsigned int)v30;
    v29 = sub_18000471C(a4, v30, NumberOfProcessors, (__int64)v7, v8);
    v15 = v29;
    if ( !v29 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16 * v14 + 8));
      return 8;
    }
    v16 = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *((_DWORD *)v15 + 52) = ~(v34 - 1) & (*((_DWORD *)v15 + 52) + v34 - 1);
    if ( (*((_DWORD *)v15 + 81) & 0x4000000) != 0 )
    {
      v26 = sub_18010E404(v15);
      if ( v26 )
      {
        LastErrorValue = RtlNtStatusToDosError(v26);
        if ( LastErrorValue )
          goto LABEL_60;
      }
    }
    if ( (*((_DWORD *)v15 + 81) & 0x400) == 0 )
    {
      v17 = sub_180004BA8((__int64)v15, v7, v8, (*((_DWORD *)v15 + 81) & 4) != 0);
      if ( v17 )
      {
        LastErrorValue = RtlNtStatusToDosError(v17);
        if ( LastErrorValue )
          goto LABEL_60;
      }
    }
    v18 = *((unsigned int *)v15 + 52);
    v19 = 0xFFFF;
    if ( (unsigned __int64)(v18 - 72) < 0xFFFF )
      v19 = v18 - 72;
    *((_DWORD *)v15 + 53) = v19 & 0xFFFFFFF8;
    LastErrorValue = sub_180005400((__int64)v15);
    if ( LastErrorValue )
      goto LABEL_60;
    if ( (*((_DWORD *)v15 + 81) & 0x20000) == 0 )
    {
      LastErrorValue = sub_18010D834(*((unsigned __int16 *)v15 + 10), &v31, &v28);
      if ( LastErrorValue )
        goto LABEL_60;
      *((_QWORD *)v15 + 70) = v31;
    }
    v21 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(qword_180163518 + 8 * v21 + 8));
    v22 = v29;
    if ( (*((_DWORD *)v15 + 81) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread((NTSTATUS (__cdecl *)(PVOID))sub_18006CF40, v29);
      if ( !EtwThread )
      {
        LastErrorValue = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *((_QWORD *)v22 + 4) = EtwThread;
    }
    sub_1800058F4(a4, (__int64)v22, &v28);
    _InterlockedExchange64((volatile __int64 *)(qword_180163518 + 8 * v21), (__int64)v22);
    sub_180005D10(v29, 5LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 8 * v21 + 8));
    if ( !LastErrorValue )
    {
      v24 = v32;
      *a2 = *(_DWORD *)a4;
      *v24 = *(_DWORD *)a4;
      return LastErrorValue;
    }
    v15 = v29;
LABEL_60:
    v27 = *(void **)(a4 + 88);
    if ( v27 )
    {
      ZwClose(v27);
      *(_QWORD *)(a4 + 88) = 0LL;
      *((_QWORD *)v15 + 18) = 0LL;
    }
    sub_1800874F8(v15);
    return LastErrorValue;
  }
  return result;
}
