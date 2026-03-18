/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801C6898
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180085A4C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800C64DC (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  signed int v4; // ebx
  unsigned int i; // esi
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  signed int v17; // eax
  struct CResource *v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v19 = ResourceWithoutType;
    v11 = (__int64)ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            124LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x88980403, 0x135u, 0LL);
      goto LABEL_15;
    }
    v12 = CResource::RegisterNotifier(this, v19);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x13Du, 0LL);
      goto LABEL_14;
    }
    v14 = *((_DWORD *)this + 64);
    v15 = v14 + 1;
    if ( v14 + 1 >= v14 )
    {
      if ( v15 <= *((_DWORD *)this + 63) )
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 29) + 8LL * *((unsigned int *)this + 64)) = v19;
        *((_DWORD *)this + 64) = v15;
        goto LABEL_12;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 232, 8, 1, &v19);
      v4 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0xC3u, 0LL);
    }
    else
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0x13Fu, 0LL);
      CResource::UnRegisterNotifierInternal(this, v19);
      goto LABEL_14;
    }
LABEL_12:
    ++a4;
  }
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_14:
  if ( v4 < 0 )
LABEL_15:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v4;
}
