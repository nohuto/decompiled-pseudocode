/*
 * XREFs of RtlpHpSegMgrCommit @ 0x14000C244
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14000AC04 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegLfhVsCommit @ 0x14000BF30 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrRelease @ 0x14015484C (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpSegMgrCommitComplete @ 0x140009B00 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14000C51C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14000C958 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14000CAF4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // r14
  int v11; // r15d
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  __int64 HeapManager; // rax
  __int64 v15; // rdx
  volatile signed __int16 *v16; // r12
  void *v17; // rax
  size_t v18; // rsi
  int v19; // r13d
  int v20; // eax
  int v21; // esi
  int v23; // eax
  bool v24; // cf
  int v25; // eax
  unsigned __int64 v26; // rcx
  void *v27; // [rsp+30h] [rbp-71h] BYREF
  __int64 v28; // [rsp+38h] [rbp-69h] BYREF
  LONG SpinLock[2]; // [rsp+40h] [rbp-61h] BYREF
  size_t Size; // [rsp+48h] [rbp-59h]
  void *v31; // [rsp+50h] [rbp-51h]
  __int128 v32; // [rsp+60h] [rbp-41h] BYREF
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  __int128 v34; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v35[16]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-1h]
  char v37; // [rsp+F0h] [rbp+4Fh] BYREF
  __int64 v38; // [rsp+F8h] [rbp+57h]

  v38 = a2;
  v8 = a3;
  v37 = 0;
  *(_QWORD *)SpinLock = 0LL;
  v10 = a5;
  v11 = a6 & 0x40000000;
  v12 = a6 & 0xBFFFFFFF;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(a5 << 12, *(_QWORD *)(a1 + 56)) )
      return (unsigned int)-1073741523;
    a2 = v38;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v13 = *(_OWORD *)(a1 + 40);
    v27 = (void *)(a2 & 0xFFFFFFFFFFE00000uLL);
    v32 = v13;
    HeapManager = RtlpHpEnvGetHeapManager(&v32);
    RtlpHpVaMgrCtxQuery(HeapManager + 80, v15, v35);
    v16 = (volatile signed __int16 *)(v36 + 2 * (v8 >> 9));
  }
  else
  {
    v16 = 0LL;
  }
  v17 = (void *)(v38 + (unsigned int)((_DWORD)v8 << 12));
  v18 = (unsigned int)(a4 << 12);
  v19 = a7;
  Size = v18;
  v31 = v17;
  while ( 1 )
  {
    v27 = v17;
    v28 = v18;
    if ( !v16 )
      goto LABEL_17;
    v20 = RtlpHpSegMgrCommitInitiate(a1, (int)v16, v10, v19, (ULONG_PTR)SpinLock, (__int64)&v37);
    if ( v20 == -1073741568 )
      break;
    if ( v20 == -1073741566 )
    {
      v27 = (void *)((unsigned __int64)v27 & 0xFFFFFFFFFFE00000uLL);
      v23 = v12 | 0x20000000;
      v28 = 0x200000LL;
      if ( (int)v10 <= 0 )
        v23 = v12;
      v12 = v23;
    }
LABEL_17:
    if ( (int)v10 <= 0 )
    {
      v34 = *(_OWORD *)(a1 + 40);
      v21 = RtlpHpFreeVA(&v27, &v28, v12, &v34);
    }
    else
    {
      if ( v11 && (v12 & 0x20000000) == 0 )
        v12 |= 0x40000000u;
      v24 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
      v33 = *(_OWORD *)(a1 + 40);
      v25 = RtlpHpAllocVA((unsigned int)&v27, (unsigned int)&v28, 0, v12, v24 ? 64 : 4, (__int64)&v33);
      v21 = v25;
      if ( v11 && v25 >= 0 && (v12 & 0x40000000) == 0 )
        memset(v27, 0, Size);
    }
    if ( !v16 )
      return (unsigned int)v21;
    if ( (*v16 & 0x4000) != 0 && v21 >= 0 )
    {
      v26 = 1LL;
      if ( (int)v10 <= 0 )
        v26 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v10);
    }
    RtlpHpSegMgrCommitComplete(a1, v16, v10, v21 >= 0, SpinLock, v37);
    if ( (v12 & 0x20000000) == 0 || v21 >= 0 || (v19 & 2) != 0 )
      return (unsigned int)v21;
    v18 = Size;
    v19 |= 1u;
    v17 = v31;
    v12 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v10);
  if ( v11 )
    memset(v27, 0, v18);
  return 0;
}
