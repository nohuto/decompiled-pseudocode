/*
 * XREFs of ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059088
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C00537CC (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0053824 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0058F24 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResu.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C005DC40 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

__int64 __fastcall FlipManagerApplyDwmConsumerUpdates(
        unsigned __int64 a1,
        struct FlipManagerTokenObject *this,
        struct _LIST_ENTRY *a3,
        enum FlipPresentProcessResult *a4)
{
  int FlipManagerObjectNoRef; // edi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r8
  PVOID v11; // r14
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v14; // rcx
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  Object = 0LL;
  v16 = 0LL;
  FlipManagerObjectNoRef = FlipManagerTokenObject::GetFlipManagerObjectNoRef(this, (struct FlipManagerObject **)&Object);
  if ( FlipManagerObjectNoRef < 0
    || (FlipManagerObjectNoRef = FlipManagerTokenObject::GetPresentId(this, &v16), FlipManagerObjectNoRef < 0)
    || (v9 = v16,
        v10 = a1,
        v11 = Object,
        FlipManagerObjectNoRef = FlipManagerObject::ConsumerDwmApplyUpdates(
                                   (FlipManagerObject *)Object,
                                   v16,
                                   v10,
                                   a3,
                                   a4),
        FlipManagerObjectNoRef < 0) )
  {
LABEL_8:
    while ( 1 )
    {
      Flink = a3->Flink;
      if ( a3->Flink == a3 )
        break;
      if ( Flink->Blink != a3 || (v14 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      a3->Flink = v14;
      v14->Blink = a3;
      if ( Flink != (struct _LIST_ENTRY *)8 )
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
    }
  }
  else
  {
    for ( i = a3->Flink; i != a3; i = i->Flink )
    {
      FlipManagerObjectNoRef = ObReferenceObjectByPointer(v11, 3u, g_pDxgkCompositionObjectType, 0);
      if ( FlipManagerObjectNoRef < 0 )
        goto LABEL_8;
      CFlipContentToken::SetFlipManagerObjectPreReferenced(
        (CFlipContentToken *)&i[-1].Blink,
        (struct FlipManagerObject *)v11);
      i[6].Flink = (struct _LIST_ENTRY *)v9;
    }
  }
  return (unsigned int)FlipManagerObjectNoRef;
}
