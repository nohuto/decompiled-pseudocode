/*
 * XREFs of ViPostPoolAllocation @ 0x140926ADC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x1401B7B34 (ExpSizeHeapPool.c)
 */

unsigned __int64 __fastcall ViPostPoolAllocation(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r8
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int32 v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 result; // rax

  v2 = *a1;
  VerifierIsTrackingPool = 1;
  v5 = v2 & 1;
  v6 = *(_QWORD *)(((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 8);
  v7 = ExpSizeHeapPool(v2);
  v8 = a1[2];
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1uLL;
    v7 = a1[2];
    *a1 = v2;
  }
  else
  {
    if ( v8 > 0xFE0 )
    {
LABEL_12:
      v9 = (_QWORD *)(v7 + v2 - 8);
      goto LABEL_13;
    }
    v7 -= 16LL;
  }
  if ( !v5 )
    goto LABEL_12;
  v7 = v8;
  if ( (v2 & 0xFFF) != 0 )
    v9 = (_QWORD *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 16);
  else
    v9 = (_QWORD *)(v2 + 4072);
  v10 = (_DWORD *)(v2 & 0xFFFFFFFFFFFFF000uLL);
  if ( (v2 & 0xFFF) == 0 )
    v10 = (_DWORD *)(v2 + 4080);
  *v10 |= 0x4000u;
LABEL_13:
  *a1 = v2;
  a1[2] = v7;
  if ( (a2 & 1) != 0 )
  {
    v11 = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 112), v7);
    if ( v11 > *(_QWORD *)(v6 + 128) )
      *(_QWORD *)(v6 + 128) = v11;
    v12 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    if ( v12 > *(_DWORD *)(v6 + 104) )
      *(_DWORD *)(v6 + 104) = v12;
    v13 = v7 + _InterlockedExchangeAdd64(&qword_14041BAB0, v7);
    if ( v13 > qword_14041BAC0 )
      qword_14041BAC0 = v13;
    v14 = _InterlockedIncrement(&dword_14041BAA0);
    if ( v14 > dword_14041BAA8 )
      dword_14041BAA8 = v14;
  }
  else
  {
    v15 = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 120), v7);
    if ( v15 > *(_QWORD *)(v6 + 136) )
      *(_QWORD *)(v6 + 136) = v15;
    v16 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 100));
    if ( v16 > *(_DWORD *)(v6 + 108) )
      *(_DWORD *)(v6 + 108) = v16;
    v17 = v7 + _InterlockedExchangeAdd64(&qword_14041BAB8, v7);
    if ( v17 > qword_14041BAC8 )
      qword_14041BAC8 = v17;
    v18 = _InterlockedIncrement(&dword_14041BAA4);
    if ( v18 > dword_14041BAAC )
      dword_14041BAAC = v18;
  }
  result = v2;
  *v9 = a1;
  return result;
}
