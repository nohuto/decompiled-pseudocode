/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CB1FC (-Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealizatio.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, struct ID2DBitmapCacheSource **); // rdi
  __int64 *v5; // rsi
  unsigned int v6; // ebx
  void (__fastcall ***v7)(_QWORD, GUID *, struct IBitmapRealization **); // rcx
  int (__fastcall *v9)(_QWORD, GUID *, struct ID2DBitmapCacheSource **); // rbx
  struct ID2DBitmapCacheSource *v10; // rax
  struct ID2DBitmapCacheSource *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct ID2DBitmapCacheSource *v17; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DBitmapCacheSource *v18; // [rsp+70h] [rbp+40h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))*((_QWORD *)this + 9);
  if ( !v2 )
  {
    v6 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F0C, 0x35u, 0LL);
    return v6;
  }
  v5 = (__int64 *)((char *)this + 80);
  v6 = 0;
  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapRealization **))*((_QWORD *)this + 10);
  if ( !v7 )
  {
    v17 = 0LL;
    v9 = **v2;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
    if ( v9(v2, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v17) >= 0 )
      goto LABEL_15;
    v10 = (struct ID2DBitmapCacheSource *)DefaultHeap::Alloc(0x28uLL);
    v11 = v10;
    if ( v10 )
    {
      v12 = *((_QWORD *)this + 9);
      v13 = (int)DisplayId::None;
      *((_DWORD *)v10 + 2) = 0;
      *(_QWORD *)v10 = &CBitmapSourceD2DCacheAdapter::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v10 + 2) = &CBitmapSourceD2DCacheAdapter::`vftable'{for `ID2DBitmapCacheSource'};
      *((_QWORD *)v10 + 3) = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_DWORD *)v11 + 8) = v13;
      *((_BYTE *)v11 + 36) = 0;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
      v11 = (struct ID2DBitmapCacheSource *)((char *)v11 + 16);
    if ( v11 )
      (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v11 + 8LL))(v11);
    v18 = v17;
    v17 = v11;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
    if ( v17 )
    {
LABEL_15:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v5);
      v15 = CD2DBitmapCacheSourceRealization::Create(v17, (struct CBitmapRealization **)v5);
      v6 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
        v7 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapRealization **))*v5;
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x42u, 0LL);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x8007000E, 0x3Fu, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
    return v6;
  }
LABEL_3:
  (**v7)(v7, &GUID_db178a3c_d733_4570_9513_5392d717955f, a2);
  return v6;
}
