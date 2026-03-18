/*
 * XREFs of ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801D18A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D1548 (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneReady(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(struct ISpectreRenderer *, __int64, __int64, __int64 *); // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v17);
  if ( *((_QWORD *)this + 4) != v17 )
  {
    *((_QWORD *)this + 4) = v17;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 10);
  }
  v4 = CCompositionMipmapSurface::EnsureMipmapSurface((struct _LUID *)this - 10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x7Eu, 0LL);
  }
  else
  {
    v7 = (__int64 *)((char *)this + 64);
    v8 = *((_QWORD *)this + 10);
    v9 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64, __int64, __int64 *))(*(_QWORD *)a2 + 88LL);
    v10 = v8 + 120;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v7);
    v11 = v8 + 120;
    v12 = *(_QWORD *)(v8 + 128);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v11);
    v14 = v9(a2, v12, v13, v7);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x7Fu, 0LL);
  }
  return v6;
}
