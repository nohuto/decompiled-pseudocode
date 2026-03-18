/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18001AE88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18001BD00 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned int v7; // ecx
  struct CResource *Resource; // rsi
  _QWORD *v9; // rax
  struct CResource **v10; // r14
  int v11; // eax
  struct CResource *v12; // rcx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_11;
  }
  Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 50LL);
  if ( !Resource )
  {
    v4 = -2003303421;
    v15 = 44;
LABEL_15:
    v14 = v4;
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
    goto LABEL_6;
  v9 = WPF::ProcessHeapImpl::AllocClear(0x10uLL);
  if ( !v9 )
  {
    v4 = -2147024882;
    v15 = 50;
    goto LABEL_15;
  }
  *v9 = 0LL;
  v9[1] = 0LL;
  *v9 = 0LL;
  *((_QWORD *)this + 71) = v9;
LABEL_6:
  v10 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 184LL))(this);
  if ( *v10 != Resource )
  {
    v11 = CResource::RegisterNotifier(this, Resource);
    v4 = v11;
    if ( v11 >= 0 )
    {
      CResource::UnRegisterNotifierInternal(this, *v10);
      if ( *v10 != Resource )
      {
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
        v12 = *v10;
        *v10 = Resource;
        if ( v12 )
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 16LL))(v12);
      }
LABEL_11:
      CVisual::PropagateFlags(this, 5LL);
      return v4;
    }
    v15 = 60;
    v14 = v11;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v14, v15);
  }
  return v4;
}
