/*
 * XREFs of ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x180098C50
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180098710 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180098CE0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateFromSharedHandle(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-48h]
  _QWORD v14[3]; // [rsp+50h] [rbp-18h] BYREF

  v14[0] = 0LL;
  v13 = a4;
  LOBYTE(a4) = a3;
  v9 = CD3DDeviceManager::OpenSharedHandleAsD2DBitmap(&qword_180308A50, a1, a2, a4, v13, a5, a6, a7, a8, v14);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x21u);
    if ( v14[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  }
  else
  {
    *a9 = v14[0];
  }
  return v11;
}
