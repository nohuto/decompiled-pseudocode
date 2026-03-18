/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801AC218
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18007339C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800C1A34 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // ebp
  unsigned int v11; // esi
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  struct CResource *v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v20 = ResourceWithoutType;
      v13 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              108LL) )
      {
        break;
      }
      v14 = CResource::RegisterNotifier(this, v20);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x147u);
        goto LABEL_17;
      }
      v16 = *((unsigned int *)this + 64);
      v17 = v16 + 1;
      if ( (int)v16 + 1 >= (unsigned int)v16 )
        v11 = v16 + 1;
      v5 = v17 < (unsigned int)v16 ? 0x80070216 : 0;
      if ( v17 < (unsigned int)v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 63) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 232, 8, 1, &v20);
        v5 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v16) = v20;
        *((_DWORD *)this + 64) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v5, 0x149u);
        CResource::UnRegisterNotifierInternal(this, v20);
        goto LABEL_17;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_16;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x13Fu);
    goto LABEL_18;
  }
LABEL_16:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_17:
  if ( v5 < 0 )
LABEL_18:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v5;
}
