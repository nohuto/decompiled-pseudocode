/*
 * XREFs of RIMFreeAllHoldingFrames @ 0x1C00F9240
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00F2218 (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C00F9628 (rimFreePointerRawDataListWorker.c)
 */

void __fastcall RIMFreeAllHoldingFrames(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 520);
  v2 = *(_QWORD **)(a1 + 520);
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = v3[9];
    if ( v4 )
      Win32FreePool(v4);
    rimFreePointerRawDataListWorker(v3[7]);
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool((__int64)v3);
  }
}
