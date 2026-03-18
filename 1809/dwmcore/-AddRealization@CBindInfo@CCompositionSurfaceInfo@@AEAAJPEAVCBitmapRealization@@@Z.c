/*
 * XREFs of ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJPEAVCBitmapRealization@@@Z @ 0x180097A14
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180097870 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801BC3A8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18009AF04 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::AddRealization(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct CBitmapRealization *a2)
{
  char v3; // si
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  CBitmapRealization *v10; // r8
  int v12; // eax
  CBitmapRealization *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)a2 + 11) + 24LL))(
         (char *)a2 + 88,
         (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL),
         -*(_QWORD *)this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x6CCu);
    goto LABEL_16;
  }
  v7 = *((_DWORD *)this + 14);
  v3 = 1;
  v8 = v7 + 1;
  v6 = v7 + 1 < v7 ? 0x80070216 : 0;
  if ( v7 + 1 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)this + 13) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8, 1, &v13);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    v9 = *((_DWORD *)this + 14);
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v7) = v13;
    *((_DWORD *)this + 14) = v8;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x6CFu);
LABEL_16:
    v10 = v13;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
  v10 = v13;
  *((_BYTE *)this + 312) |= *((_DWORD *)v13 + 48) == 1;
  if ( *((_DWORD *)this + 14) == 1 )
    *((_QWORD *)this + 15) = **(_QWORD **)&CBitmapRealization::GetAdapterLuid(v10);
LABEL_8:
  if ( v6 < 0 && v3 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 11) + 32LL))(
      (__int64)v10 + 88,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
  return (unsigned int)v6;
}
