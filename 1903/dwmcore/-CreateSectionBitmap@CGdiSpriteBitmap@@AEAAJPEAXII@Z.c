/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CD874
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003A174 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003A050 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CDA10 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802568E4 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(HANDLE *this, void *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx
  struct CBitmapRealization *v6; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct CBitmapRealization *, GUID *, __int64 *); // rbx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  char *v21; // rax
  signed int LastError; // eax
  __int64 v24; // rcx
  struct IBitmapRealization *v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  struct IBitmapRealization *v28; // r14
  __int64 (__fastcall *v29)(struct IBitmapRealization *, GUID *, __int64 *); // rbx
  signed int v30; // eax
  __int64 v31; // rcx
  signed int v32; // eax
  __int64 v33; // rcx
  struct CBitmapRealization *v34; // [rsp+40h] [rbp-10h] BYREF
  struct IBitmapRealization *v35; // [rsp+48h] [rbp-8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0;
  v35 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  LODWORD(v10) = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)this);
  if ( !a3 || !a4 )
  {
    this[47] = a2;
    goto LABEL_11;
  }
  v10 = 4LL * a3;
  if ( v10 > 0xFFFFFFFF )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070216, 0x1A5u, 0LL);
    goto LABEL_37;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, a2, CurrentProcess, this + 47, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v4, 0x1AFu, 0LL);
    goto LABEL_37;
  }
  v14 = CSectionBitmapRealization::CreateFromGDISection(
          a2,
          a3,
          a4,
          v10,
          (enum DXGI_FORMAT)*((_DWORD *)this + 22),
          (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 23),
          &v34);
  v4 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1BAu, 0LL);
    v6 = v34;
    goto LABEL_12;
  }
  v36 = 0LL;
  v6 = v34;
  if ( (*((_BYTE *)this + 117) & 1) != 0 )
  {
    if ( v34 )
      v25 = (struct CBitmapRealization *)((char *)v34 + 144);
    else
      v25 = 0LL;
    v26 = CColorKeyBitmapRealization::Create(v25, (const struct CColorKey *)(this + 48), &v35);
    v4 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1CAu, 0LL);
    }
    else
    {
      v28 = v35;
      v29 = **(__int64 (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v35;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
      v30 = v29(v28, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v36);
      v4 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1CCu, 0LL);
      }
      else
      {
        v32 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 24LL))(v36, (char *)this + 64);
        v4 = v32;
        if ( v32 >= 0 )
        {
          this[57] = v28;
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1CDu, 0LL);
      }
    }
LABEL_24:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
    goto LABEL_12;
  }
  v16 = **(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v34;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
  v17 = v16(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v36);
  v4 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1BFu, 0LL);
    goto LABEL_24;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 24LL))(v36, (char *)this + 64);
  v4 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1C0u, 0LL);
    goto LABEL_24;
  }
  v21 = (char *)v6 + 144;
  v6 = 0LL;
  this[57] = v21;
LABEL_10:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
LABEL_11:
  *((_DWORD *)this + 110) = a3;
  *((_DWORD *)this + 111) = a4;
  *((_DWORD *)this + 112) = v10;
LABEL_12:
  if ( !v6 )
    return (unsigned int)v4;
  (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  a2 = 0LL;
LABEL_37:
  if ( a2 )
    CloseHandle(a2);
  return (unsigned int)v4;
}
