/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18004CB04
 * Callers:
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x180015F34 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18004C450 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801AD270 (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  if ( v3 + (unsigned int)a3 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a3, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC3u, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 8LL * v3), a2, 8LL * (unsigned int)a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
