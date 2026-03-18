/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1800A1BF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800A1BB4 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        CMaskBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETMASK *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rdi
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  struct CResource *v10; // rdx
  unsigned int v11; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != *((const struct CResource **)this + 9) )
  {
    if ( ResourceWithoutType )
    {
      if ( !CMaskBrush::IsValidMaskResource(ResourceWithoutType) )
      {
        v9 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xD9u);
        return v9;
      }
      v7 = CResource::RegisterNotifier(this, v5);
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xDCu);
        return v9;
      }
    }
    v10 = (struct CResource *)*((_QWORD *)this + 9);
    if ( v10 && v5 )
      v11 = 0;
    else
      v11 = 14;
    CResource::UnRegisterNotifierInternal(this, v10);
    *((_QWORD *)this + 9) = v5;
    (*(void (__fastcall **)(CMaskBrush *, _QWORD, CMaskBrush *))(*(_QWORD *)this + 64LL))(this, v11, this);
  }
  return 0;
}
