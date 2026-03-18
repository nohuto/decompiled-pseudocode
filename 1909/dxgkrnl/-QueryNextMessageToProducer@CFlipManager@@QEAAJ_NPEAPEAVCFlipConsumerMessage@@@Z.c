/*
 * XREFs of ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0061B20
 * Callers:
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C005E968 (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C005E9D8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C00610C0 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

__int64 __fastcall CFlipManager::QueryNextMessageToProducer(
        CFlipManager *this,
        char a2,
        struct CFlipConsumerMessage **a3)
{
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  CFlipManager *v5; // r9
  struct CFlipConsumerMessage *v7; // rcx
  CFlipPropertySetBase *v8; // rax

  v3 = (_QWORD *)((char *)this + 168);
  v4 = 0;
  v5 = (CFlipManager *)*((_QWORD *)this + 21);
  if ( v5 == (CFlipManager *)((char *)this + 168) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v7 = (struct CFlipConsumerMessage *)(((unsigned __int64)v5 - 48) & -(__int64)(v5 != 0LL));
    *a3 = v7;
    ++*((_DWORD *)v7 + 2);
    if ( a2 )
    {
      v8 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v3);
      CFlipPropertySetBase::Release(v8);
      if ( (_QWORD *)*v3 == v3 )
        KeResetEvent(*((PRKEVENT *)this + 28));
    }
  }
  return v4;
}
