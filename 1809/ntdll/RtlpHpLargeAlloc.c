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

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, size_t a3, char a4)
{
  __int128 v4; // xmm0
  void *v5; // r12
  void *v8; // rax
  __int64 v9; // r14
  BOOL v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  bool v14; // cf
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  int v18; // eax
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  bool v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  void *v31; // [rsp+38h] [rbp-69h] BYREF
  signed __int64 v32; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-59h]
  __int64 v34; // [rsp+50h] [rbp-51h] BYREF
  int v35; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-41h] BYREF
  __int128 v37; // [rsp+68h] [rbp-39h] BYREF
  __int128 v38; // [rsp+78h] [rbp-29h] BYREF
  __int128 v39; // [rsp+88h] [rbp-19h] BYREF
  __int128 v40; // [rsp+98h] [rbp-9h] BYREF
  __int128 v41; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v42[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v43; // [rsp+108h] [rbp+67h]

  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  v31 = 0LL;
  v38 = v4;
  v8 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v38);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0x28uLL);
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v33 = 0;
      if ( v10 )
      {
        v11 = 0x200000LL;
        v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v13 = BYTE1(*(_QWORD *)a1) < 2u;
        v11 = 0LL;
        v33 = v13;
        v12 = a3 + (v13 << 12);
      }
      v32 = v12;
      if ( v12 < a3 )
        goto LABEL_46;
      v14 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v39 = *(_OWORD *)a1;
      v15 = RtlpHpHeapValidateProtection(a1, v14 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&v31, &v32, v11, 0x2000, v15, &v39) < 0 )
      {
        v31 = 0LL;
LABEL_46:
        if ( v9 )
        {
          v37 = *(_OWORD *)a1;
          RtlpHpMetadataFree(v9, &v37);
        }
        goto LABEL_48;
      }
      RtlpHpQueryVA((__int64)v31, v16, &v36, &v35);
      *v36 = a1;
      *(_QWORD *)&v37 = (a3 + 4095) >> 12;
      v17 = (_QWORD)v37 << 12;
      v34 = (_QWORD)v37 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v37 << 12, a1) )
        goto LABEL_46;
      v43 = 4096;
      if ( v10 )
      {
        v43 = 536875008;
        v34 = v17 - ((v17 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else if ( (a4 & 2) != 0 )
      {
        v43 = 1073745920;
      }
      v14 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v40 = *(_OWORD *)a1;
      v18 = RtlpHpHeapValidateProtection(a1, v14 ? 64 : 4);
      if ( (int)RtlpHpAllocVA(&v31, &v34, 0LL, v43, v18, &v40) >= 0 )
        break;
      if ( !v10 )
        goto LABEL_46;
      v10 = 0;
      v41 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v31, (unsigned __int64 *)&v32, 0x8000, &v41);
      v31 = 0LL;
    }
    if ( v10 && (a4 & 2) != 0 )
      memset(v31, 0, a3);
    v21 = v37;
    *(_QWORD *)(v9 + 24) = v31;
    v22 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v33 | (v21 << 11)));
    *(_QWORD *)(v9 + 32) = v22;
    _BitScanForward64(&v23, v32);
    *(_QWORD *)(v9 + 32) = v22 ^ (unsigned __int8)(v22 ^ (4 * v23)) & 0xFC;
    *(_WORD *)(v9 + 24) = ((_WORD)v21 << 12) - a2;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 64, v22, v19, v20);
    v24 = a1 + 72;
    v25 = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v25 )
      v25 ^= v24;
    v26 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v31 < (*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v27 = *(_QWORD *)v25;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_37;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_37:
            v26 = 0;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)(v25 + 8);
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_31;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_31:
            v26 = 1;
            break;
          }
        }
        v25 = v27;
      }
    }
    RtlRbInsertNodeEx(v24, v25, v26, (_QWORD *)v9);
    if ( (a4 & 1) == 0 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v32 / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v21);
    v5 = v31;
    v9 = 0LL;
    v31 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v29 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v29 = 2147353480LL;
    if ( *(_BYTE *)v29 )
    {
      RtlpHeapLogRangeReserve(a1, v5, v32, v28);
      goto LABEL_46;
    }
  }
  else
  {
LABEL_48:
    if ( v31 )
    {
      v42[0] = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v31, (unsigned __int64 *)&v32, 0x8000, v42);
    }
  }
  return v5;
}
