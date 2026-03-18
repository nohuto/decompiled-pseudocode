/*
 * XREFs of RtlpHpSegMgrCommit @ 0x140021C20
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x14001F7D8 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x1400217E0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 *     RtlpHpSegMgrAllocate @ 0x14010FF84 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x140166A58 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpSegMgrCommitInitiate @ 0x14001FC18 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14001FDF0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140021F3C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x14002236C (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x14010E3E4 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14013213C (RtlpHpSegMgrCommitComplete.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v8; // r15
  int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned int v11; // ebx
  volatile signed __int16 *v13; // rdi
  unsigned int v14; // ecx
  void *v15; // r12
  unsigned int v16; // r13d
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int v20; // edx
  __int64 result; // rax
  __int128 v22; // xmm6
  void *HeapManager; // rax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // r9d
  void *v28; // [rsp+30h] [rbp-71h] BYREF
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-61h] BYREF
  __int128 v31; // [rsp+50h] [rbp-51h] BYREF
  __int128 v32; // [rsp+60h] [rbp-41h] BYREF
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v34[4]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+4Fh] BYREF
  __int64 v36; // [rsp+F8h] [rbp+57h]

  v36 = a2;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a3;
  v11 = a6 & 0xBFFFFFFF;
  LOBYTE(v35) = 0;
  BugCheckParameter2[0] = 0LL;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(
                          a5 << 12,
                          (*(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL) + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL)) << 12,
                          *(_QWORD *)(a1 + 56),
                          *(_QWORD *)(a1 + 56) + 32LL) )
      return 3221225773LL;
    a2 = v36;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v22 = *(_OWORD *)(a1 + 40);
    v28 = (void *)(a2 & 0xFFFFFFFFFFE00000uLL);
    memset(v34, 0, sizeof(v34));
    v31 = v22;
    HeapManager = RtlpHpEnvGetHeapManager(&v31);
    RtlpHpVaMgrCtxQuery((__int64)HeapManager + 88, (__int64)v28, (__int64)v34);
    a2 = v36;
    v13 = (volatile signed __int16 *)(v34[2] + 2 * (v10 >> 9));
  }
  else
  {
    v13 = 0LL;
  }
  v14 = a7;
  v15 = (void *)(a2 + (unsigned int)((_DWORD)v10 << 12));
  v16 = a4 << 12;
  while ( 1 )
  {
    v28 = v15;
    v29 = v16;
    if ( !v13 )
      goto LABEL_8;
    v24 = RtlpHpSegMgrCommitInitiate(a1, v13, v8, v14, (ULONG_PTR)BugCheckParameter2, (KIRQL *)&v35);
    if ( v24 == -1073741568 )
      break;
    if ( v24 == -1073741566 )
    {
      v28 = (void *)((unsigned __int64)v28 & 0xFFFFFFFFFFE00000uLL);
      v25 = v11 | 0x20000000;
      v29 = 0x200000LL;
      if ( (int)v8 <= 0 )
        v25 = v11;
      v11 = v25;
    }
LABEL_8:
    if ( (int)v8 <= 0 )
    {
      v33 = *(_OWORD *)(a1 + 40);
      v20 = RtlpHpFreeVA(&v28, &v29, v11, &v33);
      a6 = v20;
    }
    else
    {
      if ( v9 && (v11 & 0x20000000) == 0 )
        v11 |= 0x40000000u;
      v17 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) == 0;
      v18 = 64;
      v32 = *(_OWORD *)(a1 + 40);
      if ( v17 )
        v18 = 4;
      v19 = RtlpHpAllocVA((unsigned int)&v28, (unsigned int)&v29, 0, v11, v18, (__int64)&v32);
      a6 = v19;
      v20 = v19;
      if ( v9 && v19 >= 0 && (v11 & 0x40000000) == 0 )
      {
        memset(v28, 0, v16);
        v20 = a6;
      }
    }
    if ( !v13 )
      return (unsigned int)v20;
    if ( (*v13 & 0x4000) != 0 )
    {
      if ( v20 < 0 )
        goto LABEL_43;
      v26 = 1LL;
      if ( (int)v8 <= 0 )
        v26 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    if ( v20 < 0 )
    {
LABEL_43:
      v27 = 0;
      goto LABEL_34;
    }
    v27 = 1;
LABEL_34:
    RtlpHpSegMgrCommitComplete(a1, (int)v13, v8, v27, (PEX_SPIN_LOCK)BugCheckParameter2, v35);
    result = a6;
    if ( (v11 & 0x20000000) == 0 || (a6 & 0x80000000) == 0 || (a7 & 2) != 0 )
      return result;
    v14 = a7 | 1;
    a7 |= 1u;
    v11 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(v28, 0, v16);
  return 0LL;
}
