/*
 * XREFs of ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180098100
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180098CE0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1801FB860 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 * Callees:
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800981F0 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapInternal(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  __int64 (__fastcall *v13)(_QWORD, GUID *, _QWORD **); // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  _QWORD *v17; // r8
  int Internal; // eax
  unsigned int v19; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // [rsp+40h] [rbp-20h]
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v27; // [rsp+A0h] [rbp+40h] BYREF

  v8 = a8;
  v27 = 0LL;
  v26 = 0LL;
  *a8 = 0LL;
  v13 = **a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v14 = v13(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v27);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x672u);
      goto LABEL_6;
    }
    v17 = v27;
  }
  else
  {
    v21 = v13(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (_QWORD **)&v26);
    v16 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x67Du);
      goto LABEL_6;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v26 + 96LL))(v26, 0LL, &a8);
    v16 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x67Fu);
      goto LABEL_6;
    }
    v17 = a8;
    v27 = a8;
  }
  v25 = a7;
  Internal = CD2DBitmap::CreateInternal(*(_QWORD *)(a1 + 200), a2, v17, a3, a4, a5, a6, 0, v25, v8);
  v16 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, Internal, 0x692u);
LABEL_6:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  return v16;
}
