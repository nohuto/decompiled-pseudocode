/*
 * XREFs of KiFlushReadyLists @ 0x1402B5AAC
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 */

void __fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 *a3)
{
  unsigned int v3; // r10d
  __int64 v6; // r9
  _QWORD *v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax
  _DWORD *v10; // r11
  __int64 v11; // r9

  v3 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward((unsigned int *)&v6, v3);
      v7 = (_QWORD *)(a1 + 16 * v6);
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7[1] = v7;
      *v7 = v7;
      do
      {
        *(_DWORD *)(v8 - 216 + 116) |= 2u;
        KiInsertDeferredReadyList(a3, v8 - 216);
      }
      while ( v8 != v11 );
    }
    while ( v3 );
    *v10 = 0;
  }
}
