/*
 * XREFs of ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C005AAE4
 * Callers:
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0057870 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C00578E0 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C005A060 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

__int64 __fastcall CFlipManager::QueryNextMessageToProducer(
        CFlipManager *this,
        char a2,
        struct CFlipConsumerMessage **a3)
{
  _QWORD *v3; // rbx
  CFlipManager *v4; // r9
  unsigned int v5; // edi
  struct CFlipConsumerMessage *v7; // rcx
  CFlipPropertySetBase *v8; // rax

  v3 = (_QWORD *)((char *)this + 184);
  v4 = (CFlipManager *)*((_QWORD *)this + 23);
  v5 = -1073741823;
  if ( v4 != (CFlipManager *)((char *)this + 184) )
  {
    v5 = 0;
    v7 = (struct CFlipConsumerMessage *)(((unsigned __int64)v4 - 48) & -(__int64)(v4 != 0LL));
    *a3 = v7;
    ++*((_DWORD *)v7 + 2);
    if ( a2 )
    {
      v8 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v3);
      CFlipPropertySetBase::Release(v8);
      if ( (_QWORD *)*v3 == v3 )
        KeResetEvent(*((PRKEVENT *)this + 30));
    }
  }
  return v5;
}
