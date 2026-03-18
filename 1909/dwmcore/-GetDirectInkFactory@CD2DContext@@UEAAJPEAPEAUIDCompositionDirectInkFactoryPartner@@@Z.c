/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180160790
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015B47C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180160C90 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        struct IDCompositionDirectInkFactoryPartner **this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  signed int inited; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct IDCompositionDirectInkFactoryPartner *v7; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, 0x190u, 0LL);
  }
  else
  {
    v7 = this[45];
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = this[45];
    }
    *a2 = v7;
    return 0;
  }
  return v6;
}
