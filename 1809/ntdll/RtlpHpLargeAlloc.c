/*
 * XREFs of RtlpHpLargeAlloc @ 0x18006657C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpQueryVA @ 0x180066388 (RtlpHpQueryVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180066980 (RtlpHpSegHeapCheckCommitLimit.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x180103F14 (RtlpHeapLogRangeReserve.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(char *BaseAddress, __int16 a2, size_t a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v5; // r12
  void *v8; // rax
  __int64 v9; // r14
  BOOL v10; // edi
  __int64 v11; // rsi
  ULONG_PTR v12; // rax
  unsigned int v13; // ecx
  bool v14; // cf
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  ULONG v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _RTL_RB_TREE *v22; // rcx
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  PVOID BaseAddressa; // [rsp+38h] [rbp-69h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-59h]
  __int64 v32; // [rsp+50h] [rbp-51h] BYREF
  int v33; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-41h] BYREF
  __int128 v35; // [rsp+68h] [rbp-39h] BYREF
  __int128 v36; // [rsp+78h] [rbp-29h] BYREF
  __int64 v37[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v38[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v39; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v40[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v41; // [rsp+108h] [rbp+67h]

  v4 = *(_OWORD *)BaseAddress;
  v5 = 0LL;
  BaseAddressa = 0LL;
  v36 = v4;
  v8 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v36);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0x28uLL);
    v10 = 0;
    if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 )
      v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v31 = 0;
      if ( v10 )
      {
        v11 = 0x200000LL;
        v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v13 = BYTE1(*(_QWORD *)BaseAddress) < 2u;
        v11 = 0LL;
        v31 = v13;
        v12 = a3 + (v13 << 12);
      }
      RegionSize = v12;
      if ( v12 < a3 )
        goto LABEL_46;
      v14 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      *(_OWORD *)v37 = *(_OWORD *)BaseAddress;
      v15 = RtlpHpHeapValidateProtection(BaseAddress, v14 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, &RegionSize, v11, 0x2000, v15, (__int128 *)v37) < 0 )
      {
        BaseAddressa = 0LL;
LABEL_46:
        if ( v9 )
        {
          v35 = *(_OWORD *)BaseAddress;
          RtlpHpMetadataFree(v9, &v35);
        }
        goto LABEL_48;
      }
      RtlpHpQueryVA((__int64)BaseAddressa, v16, &v34, &v33);
      *v34 = BaseAddress;
      *(_QWORD *)&v35 = (a3 + 4095) >> 12;
      v17 = (_QWORD)v35 << 12;
      v32 = (_QWORD)v35 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v35 << 12, BaseAddress) )
        goto LABEL_46;
      v41 = 4096;
      if ( v10 )
      {
        v41 = 536875008;
        v32 = v17 - ((v17 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else if ( (a4 & 2) != 0 )
      {
        v41 = 1073745920;
      }
      v14 = (*((_DWORD *)BaseAddress + 5) & 0x40000000) != 0;
      *(_OWORD *)v38 = *(_OWORD *)BaseAddress;
      v18 = RtlpHpHeapValidateProtection(BaseAddress, v14 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&BaseAddressa, (ULONG_PTR *)&v32, 0LL, v41, v18, (__int128 *)v38) >= 0 )
        break;
      if ( !v10 )
        goto LABEL_46;
      v10 = 0;
      v39 = *(_OWORD *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, &v39);
      BaseAddressa = 0LL;
    }
    if ( v10 && (a4 & 2) != 0 )
      memset(BaseAddressa, 0, a3);
    v19 = v35;
    *(_QWORD *)(v9 + 24) = BaseAddressa;
    v20 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v31 | (v19 << 11)));
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
              goto LABEL_37;
            v25 ^= v23;
          }
          if ( !v25 )
          {
LABEL_37:
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
      v27 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v27 = 2147353480LL;
    if ( *(_BYTE *)v27 )
    {
      RtlpHeapLogRangeReserve(BaseAddress, v5, RegionSize, v26);
      goto LABEL_46;
    }
  }
  else
  {
LABEL_48:
    if ( BaseAddressa )
    {
      v40[0] = *(_OWORD *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, v40);
    }
  }
  return v5;
}
