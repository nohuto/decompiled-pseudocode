/*
 * XREFs of KiFlushReadyLists @ 0x14029D4B8
 * Callers:
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 */

_UNKNOWN **__fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int v4; // ebx
  __int64 v8; // r9
  _QWORD *v9; // r9
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward((unsigned int *)&v8, v4);
      v4 &= v4 - 1;
      v9 = (_QWORD *)(a1 + 16 * v8);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      v12 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v9[1] = v9;
      *v9 = v9;
      do
      {
        *(_DWORD *)(v10 - 216 + 116) |= 2u;
        result = (_UNKNOWN **)KiInsertDeferredReadyList(a3, v10 - 216);
      }
      while ( v10 != v12 );
    }
    while ( v4 );
    *a2 = 0;
  }
  return result;
}
