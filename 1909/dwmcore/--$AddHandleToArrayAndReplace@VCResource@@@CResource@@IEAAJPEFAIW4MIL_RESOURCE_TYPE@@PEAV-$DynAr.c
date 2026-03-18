/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800A1E38
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800A1A34 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // edx
  signed int v18; // eax
  __int64 v19; // rcx
  struct CResource *v20; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = *a2;
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v20 = Resource;
    if ( !Resource )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070006, 0x26Du, 0LL);
      return v6;
    }
    v12 = CResource::RegisterNotifier(this, Resource);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x271u, 0LL);
      return v6;
    }
    v15 = *(_DWORD *)(a4 + 24);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v16 <= *(_DWORD *)(a4 + 20) )
      {
        v6 = 0;
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * v15) = v20;
        *(_DWORD *)(a4 + 24) = v16;
LABEL_7:
        *a2 = *(_DWORD *)(a4 + 24) - 1;
        return v6;
      }
      v18 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8LL, v14, &v20);
      v6 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC3u, 0LL);
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v6, 0x277u, 0LL);
      CResource::UnRegisterNotifierInternal(this, v20);
      return v6;
    }
    goto LABEL_7;
  }
  return v6;
}
