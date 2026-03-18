/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFBC4
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801AF954 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801B018C (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?OnReceiverRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801AF2BC (-OnReceiverRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  __int64 *v1; // rsi
  unsigned int v2; // ebp
  __int64 *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 16);
  v2 = 0;
  v3 = (__int64 *)*((_QWORD *)this + 15);
  if ( v1 - v3 )
  {
    v5 = 0LL;
    do
    {
      CProjectedShadowReceiver::OnReceiverRemovedFromScene(
        *(CProjectedShadowReceiver **)(*((_QWORD *)this + 15) + 8 * v5),
        this);
      v1 = (__int64 *)*((_QWORD *)this + 16);
      ++v2;
      v3 = (__int64 *)*((_QWORD *)this + 15);
      v5 = v2;
    }
    while ( v2 < (unsigned __int64)(v1 - v3) );
  }
  if ( v3 != v1 )
  {
    do
    {
      v6 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ++v3;
    }
    while ( v3 != v1 );
    v3 = (__int64 *)*((_QWORD *)this + 15);
  }
  *((_QWORD *)this + 16) = v3;
}
