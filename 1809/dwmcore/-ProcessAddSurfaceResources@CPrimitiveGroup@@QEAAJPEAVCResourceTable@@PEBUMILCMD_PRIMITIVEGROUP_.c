/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800C156C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800C1A34 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800C1E94 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // ebp
  unsigned int v11; // edi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v17; // eax
  struct CResource *v18; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v18 = ResourceWithoutType;
      v13 = (unsigned int)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              37LL) )
      {
        break;
      }
      v14 = *((unsigned int *)this + 48);
      v15 = v14 + 1;
      if ( (int)v14 + 1 >= (unsigned int)v14 )
        v11 = v14 + 1;
      v5 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
      if ( v15 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 47) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 168, 8, 1, &v18);
        v5 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v14) = v18;
        *((_DWORD *)this + 48) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0x110u);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v18 + 8LL))(v18);
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_12;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x108u);
    goto LABEL_21;
  }
LABEL_12:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_13:
  if ( v5 < 0 )
LABEL_21:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  return (unsigned int)v5;
}
