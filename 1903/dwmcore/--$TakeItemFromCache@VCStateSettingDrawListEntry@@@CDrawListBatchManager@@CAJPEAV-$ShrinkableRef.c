/*
 * XREFs of ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x1800151C0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18004E528 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned int v7; // ecx
  void *v9; // rax
  unsigned int v10; // ecx
  void *v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 )
    goto LABEL_2;
  v9 = DefaultHeap::Alloc(0x20uLL);
  v11 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)v11 = &CStateSettingDrawListEntry::`vftable';
    *((_DWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x140u, 0LL);
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
  v12 = *(_DWORD *)(a1 + 24);
  v16 = v11;
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB8u, 0LL);
    goto LABEL_14;
  }
  if ( v13 > *(_DWORD *)(a1 + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, &v16);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC3u, 0LL);
LABEL_14:
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v3, 0x142u, 0LL);
      CDirtyRegion::Release((CDirtyRegion *)v11);
      return v3;
    }
    goto LABEL_12;
  }
  v3 = 0;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v12) = v16;
  *(_DWORD *)(a1 + 24) = v13;
LABEL_12:
  v2 = *(_DWORD *)(a1 + 24);
LABEL_2:
  v6 = (unsigned int)(v2 - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  if ( v7 >= (unsigned int)v6 )
    v7 = v6;
  *(_DWORD *)(a1 + 32) = v7;
  return v3;
}
