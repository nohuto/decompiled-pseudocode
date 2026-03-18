/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180091A50
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x180091C04 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180226648 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(HANDLE *this, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  struct CBitmapRealization *v6; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct IBitmapRealization *v21; // rax
  signed int LastError; // eax
  struct IBitmapRealization *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  enum DXGI_FORMAT v31; // [rsp+20h] [rbp-30h]
  struct CBitmapRealization *v32; // [rsp+40h] [rbp-10h] BYREF
  struct IBitmapRealization *v33; // [rsp+48h] [rbp-8h] BYREF
  __int64 v34; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0;
  v33 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v10 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)this);
  if ( !a3 || !a4 )
  {
    this[47] = a2;
    goto LABEL_13;
  }
  v11 = -1;
  v12 = 4LL * a3;
  v10 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v10 = 4 * a3;
  v4 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v12 > 0xFFFFFFFF )
  {
    v31 = 417;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, v31);
    goto LABEL_39;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v14 = GetCurrentProcess();
  if ( !DuplicateHandle(v14, a2, CurrentProcess, this + 47, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v31 = DXGI_FORMAT_V208|DXGI_FORMAT_D32_FLOAT|0x100;
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    goto LABEL_22;
  }
  v15 = CSectionBitmapRealization::CreateFromGDISection(
          a2,
          a3,
          a4,
          v10,
          (enum DXGI_FORMAT)*((_DWORD *)this + 22),
          (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 23),
          &v32);
  v4 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B6u);
    v6 = v32;
    goto LABEL_14;
  }
  v34 = 0LL;
  if ( *((char *)this + 116) < 0 )
  {
    v6 = v32;
    if ( v32 )
      v24 = (struct CBitmapRealization *)((char *)v32 + 144);
    else
      v24 = 0LL;
    v25 = CColorKeyBitmapRealization::Create(v24, (const struct CColorKey *)(this + 48), &v33);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1C6u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
      v27 = (**(__int64 (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v33)(
              v33,
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v34);
      v4 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1C8u);
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 24LL))(v34, (char *)this + 64);
        v4 = v29;
        if ( v29 >= 0 )
        {
          v21 = v33;
          goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1C9u);
      }
    }
LABEL_26:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  v6 = v32;
  v17 = (**(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v32)(
          v32,
          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
          &v34);
  v4 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1BBu);
    goto LABEL_26;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 24LL))(v34, (char *)this + 64);
  v4 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1BCu);
    goto LABEL_26;
  }
  v21 = (struct CBitmapRealization *)((char *)v6 + 144);
  v6 = 0LL;
LABEL_12:
  this[57] = v21;
  this[58] = a2;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
LABEL_13:
  *((_DWORD *)this + 110) = a3;
  *((_DWORD *)this + 111) = a4;
  *((_DWORD *)this + 112) = v10;
LABEL_14:
  if ( !v6 )
    return v4;
  (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  a2 = 0LL;
LABEL_39:
  if ( a2 )
    CloseHandle(a2);
  return v4;
}
