/*
 * XREFs of sub_1800508C8 @ 0x1800508C8
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 *     sub_180050BD8 @ 0x180050BD8 (sub_180050BD8.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1801015F8 @ 0x1801015F8 (sub_1801015F8.c)
 */

PVOID __fastcall sub_1800508C8(char *BaseAddress, __int16 a2, size_t a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v5; // r12
  void *v8; // rax
  __int64 v9; // r13
  BOOL v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // rsi
  ULONG_PTR v13; // rax
  bool v14; // cf
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r15
  ULONG v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _RTL_RB_TREE *v22; // rcx
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  PVOID BaseAddressa; // [rsp+38h] [rbp-69h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-59h]
  __int64 v31; // [rsp+50h] [rbp-51h] BYREF
  int v32; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+60h] [rbp-41h] BYREF
  __int128 v34; // [rsp+68h] [rbp-39h] BYREF
  __int128 v35; // [rsp+78h] [rbp-29h] BYREF
  __int64 v36[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v37[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v38; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v39[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v40; // [rsp+108h] [rbp+67h]

  v4 = *(_OWORD *)BaseAddress;
  v5 = 0LL;
  BaseAddressa = 0LL;
  v35 = v4;
  v8 = sub_18004CF00(0x28uLL, 0x28uLL, 0, &v35);
  v9 = (__int64)v8;
  if ( !v8 )
  {
LABEL_49:
    if ( BaseAddressa )
    {
      v39[0] = *(_OWORD *)BaseAddress;
      sub_180048170(&BaseAddressa, &RegionSize, 0x8000, v39);
    }
    return v5;
  }
  memset(v8, 0, 0x28uLL);
  v10 = 0;
  if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 )
    v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  while ( 1 )
  {
    v30 = 0;
    if ( v10 )
    {
      v12 = 0x200000LL;
      v13 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else
    {
      v11 = BYTE1(*(_QWORD *)BaseAddress) < 2u;
      v12 = 0LL;
      v30 = v11;
      v13 = a3 + (v11 << 12);
    }
    RegionSize = v13;
    if ( v13 < a3 )
      goto LABEL_47;
    v14 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
    *(_OWORD *)v36 = *(_OWORD *)BaseAddress;
    v15 = sub_180047CBC(BaseAddress, v14 ? 64 : 4);
    if ( (int)sub_1800479C8(&BaseAddressa, &RegionSize, v12, 0x2000, v15, (__int128 *)v36) < 0 )
    {
      BaseAddressa = 0LL;
LABEL_47:
      if ( v9 )
      {
        v34 = *(_OWORD *)BaseAddress;
        sub_18004F690(v9, &v34);
      }
      goto LABEL_49;
    }
    sub_1800506F0((__int64)BaseAddressa, v16, &v33, &v32);
    *v33 = BaseAddress;
    *(_QWORD *)&v34 = (a3 + 4095) >> 12;
    v17 = (_QWORD)v34 << 12;
    v31 = (_QWORD)v34 << 12;
    if ( !(unsigned int)sub_180050BD8((_QWORD)v34 << 12, BaseAddress) )
      goto LABEL_47;
    v40 = 4096;
    if ( v10 )
    {
      v40 = 536875008;
      v31 = v17 - ((v17 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else if ( (a4 & 2) != 0 )
    {
      v40 = 1073745920;
    }
    v14 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
    *(_OWORD *)v37 = *(_OWORD *)BaseAddress;
    v18 = sub_180047CBC(BaseAddress, v14 ? 64 : 4);
    if ( (int)sub_1800479C8(&BaseAddressa, (ULONG_PTR *)&v31, 0LL, v40, v18, (__int128 *)v37) >= 0 )
      break;
    if ( !v10 )
      goto LABEL_47;
    v10 = 0;
    v38 = *(_OWORD *)BaseAddress;
    sub_180048170(&BaseAddressa, &RegionSize, 0x8000, &v38);
    BaseAddressa = 0LL;
  }
  if ( v10 && (a4 & 2) != 0 )
    memset(BaseAddressa, 0, a3);
  v19 = v34;
  *(_QWORD *)(v9 + 24) = BaseAddressa;
  v20 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v30 | (v19 << 11)));
  *(_QWORD *)(v9 + 32) = v20;
  _BitScanForward64(&v21, RegionSize);
  *(_QWORD *)(v9 + 32) = v20 ^ (unsigned __int8)(v20 ^ (4 * v21)) & 0xFC;
  *(_WORD *)(v9 + 24) = ((_WORD)v19 << 12) - a2;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  v22 = (_RTL_RB_TREE *)(BaseAddress + 72);
  v23 = *((_QWORD *)BaseAddress + 9);
  if ( (BaseAddress[80] & 1) != 0 && v23 )
    v23 ^= (unsigned __int64)v22;
  v24 = 0;
  if ( v23 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)BaseAddressa < (*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v25 = *(_QWORD *)v23;
        if ( (BaseAddress[80] & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_30;
          v25 ^= v23;
        }
        if ( !v25 )
        {
LABEL_30:
          v24 = 0;
          break;
        }
      }
      else
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( (BaseAddress[80] & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_31;
          v25 ^= v23;
        }
        if ( !v25 )
        {
LABEL_31:
          v24 = 1;
          break;
        }
      }
      v23 = v25;
    }
  }
  RtlRbInsertNodeEx(v22, (PRTL_BALANCED_NODE)v23, v24, (PRTL_BALANCED_NODE)v9);
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, (__int64)RegionSize / 4096);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 12, v19);
  v5 = BaseAddressa;
  v9 = 0LL;
  BaseAddressa = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v26 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v26 = 2147353480LL;
  if ( *(_BYTE *)v26 )
  {
    sub_1801015F8(BaseAddress, v5, RegionSize);
    goto LABEL_47;
  }
  return v5;
}
