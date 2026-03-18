/*
 * XREFs of Simulator_Free_Arguments @ 0x1C0061738
 * Callers:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x1C002B7F4 (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C0061430 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned __int16 v8; // ax

  if ( a1 > 0 && a2 )
  {
    v5 = (__int64)a2;
    v6 = (unsigned int)a1;
    v7 = a2 + 4;
    do
    {
      v8 = *((_WORD *)v7 - 15);
      if ( v8 >= 2u && (v8 <= 5u || v8 > 6u && (v8 <= 0xCu || v8 == 14 || v8 > 0x81u && v8 <= 0x84u)) )
      {
        if ( *v7 )
          FreeObjData(v5, (__int64)a2, a3, a4);
      }
      v5 += 40LL;
      v7 += 5;
      --v6;
    }
    while ( v6 );
    HeapFree(a2);
  }
  return 0LL;
}
