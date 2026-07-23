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
  void *v17; // rcx
  ULONG v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int16 v26; // [rsp+28h] [rbp-58h]
  PVOID BaseAddress; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-48h] BYREF
  _RTL_SRWLOCK SRWLock; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  void *v32; // [rsp+58h] [rbp-28h]
  __int16 v33[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+48h]

  v36 = a2;
  SRWLock.0 = 0LL;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  LOBYTE(v35) = 0;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(
                          a5 << 12,
                          (*(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL) + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL)) << 12,
                          *(_QWORD *)(a1 + 56),
                          *(_QWORD *)(a1 + 56) + 32LL) )
      return (unsigned int)-1073741523;
    a2 = v36;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    BaseAddress = (PVOID)(a2 & 0xFFFFFFFFFFE00000uLL);
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v31, 0LL);
    v13 = (_WORD *)(v31 + 2 * (v11 >> 9));
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (void *)(v36 + (unsigned int)((_DWORD)v11 << 12));
  v15 = (unsigned int)(a4 << 12);
  v16 = a7;
  Size = v15;
  v32 = v14;
  while ( 1 )
  {
    BaseAddress = v14;
    RegionSize = v15;
    if ( !v13 )
      goto LABEL_8;
    v23 = RtlpHpSegMgrCommitInitiate(a1, (int)v13, v8, v16, &SRWLock, (__int64)&v35);
    if ( v23 == -1073741568 )
      break;
    if ( v23 == -1073741566 )
    {
      BaseAddress = (PVOID)((unsigned __int64)BaseAddress & 0xFFFFFFFFFFE00000uLL);
      v24 = v10 | 0x20000000;
      RegionSize = 0x200000LL;
      if ( (int)v8 <= 0 )
        v24 = v10;
      v10 = v24;
    }
LABEL_8:
    if ( (int)v8 <= 0 )
    {
      v34 = *(_OWORD *)(a1 + 40);
      v21 = RtlpHpFreeVA(&BaseAddress, &RegionSize);
    }
    else
    {
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v17 = *(void **)(a1 + 56);
      *(_OWORD *)v33 = *(_OWORD *)(a1 + 40);
      v18 = RtlpHpHeapValidateProtection(v17);
      v19 = RtlpHpAllocVA(&BaseAddress, v18, (__int64)v33);
      v21 = v19;
      if ( v9 && v19 >= 0 && (v10 & 0x40000000) == 0 )
        memset(BaseAddress, 0, Size);
    }
    if ( !v13 )
      return (unsigned int)v21;
    if ( (*v13 & 0x4000) != 0 && v21 >= 0 )
    {
      v25 = 1LL;
      if ( (int)v8 <= 0 )
        v25 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v25);
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(v20, (int)v13, v8, v21 >= 0, &SRWLock, v26);
    if ( (v10 & 0x20000000) == 0 || v21 >= 0 || (v16 & 2) != 0 )
      return (unsigned int)v21;
    v15 = Size;
    v16 |= 1u;
    v14 = v32;
    v10 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(BaseAddress, 0, v15);
  return 0;
}
