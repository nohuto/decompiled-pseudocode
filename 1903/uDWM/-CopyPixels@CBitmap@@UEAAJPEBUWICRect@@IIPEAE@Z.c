/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800B8D50
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x18004FF10 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180048254 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800B7CFC (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800B8FBC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800B92DC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  char *v6; // rcx
  bool v10; // zf
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-61h]
  unsigned int v15; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-19h] BYREF
  char *v21; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v22[2]; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  struct tagRECT v25; // [rsp+88h] [rbp+7h] BYREF

  v17 = 0LL;
  v18 = 0;
  v6 = (char *)this + 96;
  v16 = 0;
  Src = 0LL;
  v15 = 0;
  v10 = v6[48] == 0;
  v21 = v6;
  if ( !v10 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( !a5 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xA0u);
    goto LABEL_26;
  }
  if ( !a2 )
  {
    v22[0] = 0;
    v22[1] = 0;
    if ( *((_DWORD *)this + 42) > 0x7FFFFFFFu )
    {
      v23 = -1;
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xA8u);
      goto LABEL_26;
    }
    v23 = *((_DWORD *)this + 42);
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v24 = -1;
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xA9u);
      goto LABEL_26;
    }
    v24 = *((_DWORD *)this + 43);
    a2 = (const struct WICRect *)v22;
  }
  v12 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v25);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v12 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v17);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v17 + 32LL))(v17, &v18, &v16);
        v11 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 40LL))(v17, &v19);
          v11 = v12;
          if ( v12 >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v17 + 48LL))(
                    v17,
                    &v15,
                    &Src);
            v11 = v12;
            if ( v12 >= 0 )
            {
              v12 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v16,
                      v19,
                      v15,
                      Src,
                      a3,
                      a4,
                      a5);
              v11 = v12;
              if ( v12 >= 0 )
                goto LABEL_26;
              v14 = 199;
            }
            else
            {
              v14 = 186;
            }
          }
          else
          {
            v14 = 184;
          }
        }
        else
        {
          v14 = 183;
        }
      }
      else
      {
        v14 = 181;
      }
    }
    else
    {
      v14 = 179;
    }
  }
  else
  {
    v14 = 174;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v14);
LABEL_26:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v21);
  return v11;
}
