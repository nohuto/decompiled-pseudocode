/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180060A68
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x18005D600 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x180066270 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x180066388 (RtlpHpQueryVA.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpSegMgrCommitComplete @ 0x18010D9D0 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x18010DA70 (RtlpHpSegMgrCommitInitiate.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdi
  _WORD *v13; // r15
  void *v14; // rax
  size_t v15; // rdi
  int v16; // r13d
  __int64 v17; // rcx
  bool v18; // cf
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  __int16 v27; // [rsp+28h] [rbp-58h]
  void *v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  void *v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h] BYREF
  char v36; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+48h]

  v37 = a2;
  v30 = 0LL;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  v36 = 0;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(
                          a5 << 12,
                          (*(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL) + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL)) << 12,
                          *(_QWORD *)(a1 + 56),
                          *(_QWORD *)(a1 + 56) + 32LL) )
      return (unsigned int)-1073741523;
    a2 = v37;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v28 = (void *)(a2 & 0xFFFFFFFFFFE00000uLL);
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v32, 0LL);
    v13 = (_WORD *)(v32 + 2 * (v11 >> 9));
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (void *)(v37 + (unsigned int)((_DWORD)v11 << 12));
  v15 = (unsigned int)(a4 << 12);
  v16 = a7;
  Size = v15;
  v33 = v14;
  while ( 1 )
  {
    v28 = v14;
    v29 = v15;
    if ( !v13 )
      goto LABEL_8;
    v24 = RtlpHpSegMgrCommitInitiate(a1, (_DWORD)v13, v8, v16, (__int64)&v30, (__int64)&v36);
    if ( v24 == -1073741568 )
      break;
    if ( v24 == -1073741566 )
    {
      v28 = (void *)((unsigned __int64)v28 & 0xFFFFFFFFFFE00000uLL);
      v25 = v10 | 0x20000000;
      v29 = 0x200000LL;
      if ( (int)v8 <= 0 )
        v25 = v10;
      v10 = v25;
    }
LABEL_8:
    if ( (int)v8 <= 0 )
    {
      v35 = *(_OWORD *)(a1 + 40);
      v22 = RtlpHpFreeVA(&v28, &v29, v10, &v35);
    }
    else
    {
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v17 = *(_QWORD *)(a1 + 56);
      v18 = (*(_DWORD *)(v17 + 20) & 0x40000000) != 0;
      v34 = *(_OWORD *)(a1 + 40);
      v19 = RtlpHpHeapValidateProtection(v17, v18 ? 64 : 4);
      v20 = RtlpHpAllocVA((unsigned int)&v28, (unsigned int)&v29, 0, v10, v19, (__int64)&v34);
      v22 = v20;
      if ( v9 && v20 >= 0 && (v10 & 0x40000000) == 0 )
        memset(v28, 0, Size);
    }
    if ( !v13 )
      return (unsigned int)v22;
    if ( (*v13 & 0x4000) != 0 && v22 >= 0 )
    {
      v26 = 1LL;
      if ( (int)v8 <= 0 )
        v26 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(v21, (_DWORD)v13, v8, v22 >= 0, (__int64)&v30, v27);
    if ( (v10 & 0x20000000) == 0 || v22 >= 0 || (v16 & 2) != 0 )
      return (unsigned int)v22;
    v15 = Size;
    v16 |= 1u;
    v14 = v33;
    v10 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(v28, 0, v15);
  return 0;
}
