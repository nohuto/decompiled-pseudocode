/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x1400E927C
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1400E91B0 (KiResetScb.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E4D74 (KiAddThreadToPrcbQueue.c)
 */

__int64 __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // r11
  char v6; // cl
  bool v8; // r14
  unsigned int v9; // edi
  char v10; // r12
  __int64 result; // rax
  unsigned int v12; // r13d
  _QWORD *v13; // rbx
  __int64 v14; // r13
  _QWORD *v15; // rsi
  __int64 v16; // r10
  __int64 v17; // r10
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // r9
  unsigned int v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  char v23; // [rsp+90h] [rbp+8h]
  char v24; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+A0h] [rbp+18h]
  __int64 *v26; // [rsp+A8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v4 = 0LL;
  v22 = 0LL;
  v6 = 0;
  v23 = 0;
  v8 = 0;
  v9 = *(unsigned __int16 *)(a1 + 114);
  v10 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v9;
    result = a2 + 136;
    v22 = a2 + 136;
    v10 = 1;
  }
  else
  {
    result = 1LL;
    if ( a3 )
    {
      v6 = 1;
      v23 = 1;
    }
    else
    {
      v8 = a4 != 0LL;
    }
  }
  if ( !v9 )
    goto LABEL_15;
  while ( 2 )
  {
    _BitScanReverse(&v12, v9);
    v9 ^= 1 << v12;
    v13 = (_QWORD *)(16LL * v12 + a1 + 136);
    v21 = v12;
    v14 = (__int64)v25;
    v15 = (_QWORD *)*v13;
    do
    {
      v16 = (__int64)(v15 - 27);
      if ( v10 )
      {
        result = a2;
      }
      else
      {
        *(_DWORD *)(v16 + 116) &= ~0x2000u;
        result = v4;
      }
      *(_QWORD *)(v16 + 1496) = result;
      v15 = (_QWORD *)*v15;
      if ( v8 )
      {
        result = KiInsertDeferredReadyList(a4, v16);
      }
      else
      {
        if ( !v6 )
          continue;
        KiGetThreadEffectiveRankNonZero(v16, a1, (__int64)a3, 0, (bool *)&v24);
        result = KiAddThreadToPrcbQueue(v14, v17, *(char *)(v17 + 195), 0, v24);
        a4 = v26;
        v4 = 0LL;
      }
      v6 = v23;
    }
    while ( v15 != v13 );
    if ( v10 )
    {
      v18 = (_QWORD *)*v13;
      a3 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13
        || (_QWORD *)*a3 != v13
        || (*a3 = v18,
            v18[1] = a3,
            v19 = (_QWORD *)(v22 + 16LL * v21),
            v20 = (_QWORD *)v19[1],
            *(_QWORD **)(*v19 + 8LL) != v19)
        || (_QWORD *)*v20 != v19
        || *(_QWORD **)(*v18 + 8LL) != v18
        || (_QWORD *)*a3 != v18 )
      {
        __fastfail(3u);
      }
      *v20 = v18;
      v19[1] = v18[1];
      result = v18[1];
      *(_QWORD *)result = v19;
      v18[1] = v20;
    }
    v13[1] = v13;
    *v13 = v13;
    if ( v9 )
    {
      v6 = v23;
      a4 = v26;
      continue;
    }
    break;
  }
LABEL_15:
  *(_WORD *)(a1 + 114) = v4;
  return result;
}
