/*
 * XREFs of ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x18003D7C8
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x18003D624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18025CCE4 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18003DB94 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct CBitmapRealization *a2)
{
  char v3; // si
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  CBitmapRealization *v9; // r8
  int v11; // eax
  unsigned int v12; // ecx
  CBitmapRealization *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)a2 + 11) + 24LL))(
         (char *)a2 + 88,
         (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x683u, 0LL);
    goto LABEL_16;
  }
  v7 = *((_DWORD *)this + 14);
  v3 = 1;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v8 <= *((_DWORD *)this + 13) )
    {
      v6 = 0;
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v7) = v13;
      *((_DWORD *)this + 14) = v8;
      goto LABEL_5;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 32, 8LL, 1LL, &v13);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v6, 0x686u, 0LL);
LABEL_16:
    v9 = v13;
    goto LABEL_7;
  }
LABEL_5:
  (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
  v9 = v13;
  *((_BYTE *)this + 312) |= *((_DWORD *)v13 + 48) == 1;
  if ( *((_DWORD *)this + 14) == 1 )
    *((_QWORD *)this + 15) = **(_QWORD **)&CBitmapRealization::GetAdapterLuid(v9);
LABEL_7:
  if ( v6 < 0 && v3 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 11) + 32LL))(
      (__int64)v9 + 88,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
  return (unsigned int)v6;
}
