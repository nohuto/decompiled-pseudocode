/*
 * XREFs of Simulator_Free_Arguments @ 0x1C00636B8
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x1C0005980 (AMLIRegEventHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C00633B0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned __int16 v6; // ax

  if ( a1 > 0 && a2 )
  {
    v3 = a2;
    v4 = (unsigned int)a1;
    v5 = (_QWORD *)(a2 + 32);
    do
    {
      v6 = *((_WORD *)v5 - 15);
      if ( v6 >= 2u && (v6 <= 5u || v6 > 6u && (v6 <= 0xCu || v6 == 14 || v6 > 0x81u && v6 <= 0x84u)) )
      {
        if ( *v5 )
          FreeObjData(v3);
      }
      v3 += 40LL;
      v5 += 5;
      --v4;
    }
    while ( v4 );
    HeapFree(a2);
  }
  return 0LL;
}
