/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18009C4F8
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009C178 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v19; // eax
  struct CResource *v20; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = (unsigned int)*a2;
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v20 = Resource;
    if ( Resource )
    {
      v12 = CResource::RegisterNotifier(this, Resource);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1EBu);
      }
      else
      {
        v15 = *(_DWORD *)(a4 + 24);
        v16 = v15 + 1;
        v6 = v15 + 1 < v15 ? 0x80070216 : 0;
        if ( v15 + 1 < v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v6, 0xB5u);
        }
        else if ( v16 > *(_DWORD *)(a4 + 20) )
        {
          v19 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8u, v14, &v20);
          v6 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v19, 0xC0u);
        }
        else
        {
          v17 = *(_DWORD *)(a4 + 24);
          *(_QWORD *)(*(_QWORD *)a4 + 8LL * v15) = v20;
          *(_DWORD *)(a4 + 24) = v16;
        }
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v6, 0x1F1u);
          CResource::UnRegisterNotifierInternal(this, v20);
        }
        else
        {
          *a2 = *(_DWORD *)(a4 + 24) - 1;
        }
      }
    }
    else
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024890, 0x1E7u);
    }
  }
  return (unsigned int)v6;
}
