/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x1401173E0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1401169A4 (KiResetScb.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 */

__int64 __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r11
  char v6; // cl
  bool v8; // r14
  unsigned int v9; // edi
  char v10; // r12
  __int64 result; // rax
  unsigned int v12; // r13d
  int v13; // edi
  _QWORD *v14; // rbx
  __int64 v15; // r13
  int v16; // edi
  _QWORD *v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r10
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // r9
  unsigned int v23; // [rsp+30h] [rbp-58h]
  unsigned int v24; // [rsp+34h] [rbp-54h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  char v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v4 = 0LL;
  v25 = 0LL;
  v6 = 0;
  v26 = 0;
  v8 = 0;
  v9 = *(unsigned __int16 *)(a1 + 114);
  v10 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v9;
    result = a2 + 136;
    v25 = a2 + 136;
    v10 = 1;
  }
  else
  {
    result = 1LL;
    if ( a3 )
    {
      v6 = 1;
      v26 = 1;
    }
    else
    {
      v8 = a4 != 0;
    }
  }
  if ( !v9 )
    goto LABEL_15;
  while ( 2 )
  {
    _BitScanReverse(&v12, v9);
    v13 = v9 ^ (1 << v12);
    v14 = (_QWORD *)(16LL * v12 + a1 + 136);
    v24 = v12;
    v15 = v29;
    v23 = v13;
    v16 = (int)v28;
    v17 = (_QWORD *)*v14;
    do
    {
      v18 = (__int64)(v17 - 27);
      if ( v10 )
      {
        result = a2;
      }
      else
      {
        *(_DWORD *)(v18 + 116) &= ~0x2000u;
        result = v4;
      }
      *(_QWORD *)(v18 + 1496) = result;
      v17 = (_QWORD *)*v17;
      if ( v8 )
      {
        result = KiInsertDeferredReadyList(v15, v18);
      }
      else
      {
        if ( !v6 )
          continue;
        KiGetThreadEffectiveRankNonZero(v18, a1, (__int64)a3, 0, (bool *)&v27);
        result = KiAddThreadToPrcbQueue(v16, v19, *(char *)(v19 + 195), 0, v27);
        v4 = 0LL;
      }
      v6 = v26;
    }
    while ( v17 != v14 );
    v9 = v23;
    if ( v10 )
    {
      v20 = (_QWORD *)*v14;
      a3 = (_QWORD *)v14[1];
      if ( *(_QWORD **)(*v14 + 8LL) != v14
        || (_QWORD *)*a3 != v14
        || (*a3 = v20,
            v20[1] = a3,
            v21 = (_QWORD *)(v25 + 16LL * v24),
            v22 = (_QWORD *)v21[1],
            *(_QWORD **)(*v21 + 8LL) != v21)
        || (_QWORD *)*v22 != v21
        || *(_QWORD **)(*v20 + 8LL) != v20
        || (_QWORD *)*a3 != v20 )
      {
        __fastfail(3u);
      }
      *v22 = v20;
      v21[1] = v20[1];
      result = v20[1];
      *(_QWORD *)result = v21;
      v20[1] = v22;
    }
    v14[1] = v14;
    *v14 = v14;
    if ( v23 )
    {
      v6 = v26;
      continue;
    }
    break;
  }
LABEL_15:
  *(_WORD *)(a1 + 114) = v4;
  return result;
}
