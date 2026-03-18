/*
 * XREFs of ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C00610C0
 * Callers:
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C00615D0 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061A08 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0061B20 (-QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax

  v1 = (*a1 - 48LL) & -(__int64)(*a1 != 0LL);
  v2 = (_QWORD *)((v1 + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2
    || (v4 = *(_QWORD **)(((v1 + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) + 8),
        (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  result = v1;
  v2[1] = v2;
  *v2 = v2;
  return result;
}
