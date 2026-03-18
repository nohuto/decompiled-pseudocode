/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A3DC0
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800EC600 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004438C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A3F7C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A40B4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-71h]
  unsigned int v16; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  int v19; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  __int128 v26; // [rsp+88h] [rbp-9h] BYREF

  v18 = 0LL;
  v19 = 0;
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  v17 = 0;
  Src = 0LL;
  v16 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  if ( !a5 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070057, 0xABu, 0LL);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v14 = *((_DWORD *)this + 38);
    v23 = 0LL;
    if ( v14 > 0x7FFFFFFF )
    {
      v24 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFLL, 0LL, 0, 0x80070216, 0xB3u, 0LL);
      goto LABEL_10;
    }
    v24 = v14;
    if ( *((_DWORD *)this + 39) > 0x7FFFFFFFu )
    {
      v25 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFLL, 0LL, 0, 0x80070216, 0xB4u, 0LL);
      goto LABEL_10;
    }
    v25 = *((_DWORD *)this + 39);
    a2 = (const struct WICRect *)&v23;
  }
  v10 = CBitmap::HrCheckPixelRect((__int64)this - 16, &a2->X, &v26);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 185;
  }
  else
  {
    v10 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 42), a3, a2, a4);
    v12 = v10;
    if ( v10 < 0 )
    {
      v15 = 190;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v18);
      v12 = v10;
      if ( v10 < 0 )
      {
        v15 = 192;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v19, &v17);
        v12 = v10;
        if ( v10 < 0 )
        {
          v15 = 194;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v20);
          v12 = v10;
          if ( v10 < 0 )
          {
            v15 = 195;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    &v16,
                    &Src);
            v12 = v10;
            if ( v10 < 0 )
            {
              v15 = 197;
            }
            else
            {
              v10 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 42),
                      a2->Width,
                      v17,
                      v20,
                      v16,
                      Src,
                      a3,
                      a4,
                      a5);
              v12 = v10;
              if ( v10 >= 0 )
                goto LABEL_10;
              v15 = 210;
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v15, 0LL);
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return v12;
}
