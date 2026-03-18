/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1801B49B8
 * Callers:
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801B48D4 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801B4AA8 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall DynArray<float,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3 < v3 ? 0x80070216 : 0;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4, a3, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 4LL * v3), a2, 4LL * a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
