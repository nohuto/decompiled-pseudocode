/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003EEE0
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180263370 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x18003F064 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015EF4C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(
        CDxHandleBitmapRealization *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ecx
  char *v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  char *v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( *((_QWORD *)this + 52) )
    return v3;
  v6 = *((_DWORD *)this + 38);
  v7 = 3LL;
  if ( v6 )
    v7 = v6;
  LOBYTE(a3) = *((_BYTE *)this + 428);
  v8 = CD2DBitmap::CreateFromSharedHandle(
         *((_QWORD *)this + 36),
         *((_QWORD *)this + 35),
         a3,
         v7,
         *((_DWORD *)this + 49),
         (_DWORD)FLOAT_96_0,
         (_DWORD)FLOAT_96_0,
         *((_DWORD *)this + 106),
         &v15);
  v10 = v15;
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x175u, 0LL);
  }
  else
  {
    v15 = (char *)this + 24;
    v11 = *((_DWORD *)v10 + 20);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v12 <= *((_DWORD *)v10 + 19) )
      {
        v3 = 0;
        *(_QWORD *)(*((_QWORD *)v10 + 7) + 8LL * v11) = v15;
        *((_DWORD *)v10 + 20) = v12;
        goto LABEL_9;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 56, 8LL, 1LL, &v15);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
    }
    if ( (v3 & 0x80000000) == 0 )
    {
LABEL_9:
      *((_QWORD *)this + 52) = v10;
      (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 2) + 24LL))(
        (char *)this + 16,
        (unsigned __int64)(v10 + 112) & -(__int64)(v10 != 0LL));
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 52) + 104LL) + 64LL))(*((_QWORD *)this + 52) + 104LL) )
        CD3DDeviceManager::AddHwProtectedEntity(
          (CD3DDeviceManager *)&g_D3DDeviceManager,
          *(struct _LUID *)((char *)this + 288));
      return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x179u, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
  return v3;
}
