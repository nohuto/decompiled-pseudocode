/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800B2B80
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x18004E3F0 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180037F94 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800B19F8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800B2DF8 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800B308C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
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
  int v12; // r9d
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-61h]
  unsigned int v20; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v22; // [rsp+58h] [rbp-29h] BYREF
  int v23; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-19h] BYREF
  char *v26; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v27[4]; // [rsp+78h] [rbp-9h] BYREF
  struct tagRECT v28; // [rsp+88h] [rbp+7h] BYREF

  v22 = 0LL;
  v23 = 0;
  v6 = (char *)this + 96;
  v21 = 0;
  Src = 0LL;
  v20 = 0;
  v10 = v6[48] == 0;
  v26 = v6;
  if ( !v10 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( !a5 )
  {
    v11 = -2147024809;
    v19 = 160;
LABEL_5:
    v12 = v11;
    goto LABEL_31;
  }
  if ( !a2 )
  {
    v13 = *((_DWORD *)this + 42);
    v14 = -1;
    v27[0] = 0;
    v27[1] = 0;
    v15 = -1;
    if ( v13 <= 0x7FFFFFFF )
      v15 = v13;
    v27[2] = v15;
    v11 = v13 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v13 > 0x7FFFFFFF )
    {
      v19 = 168;
      goto LABEL_5;
    }
    v16 = *((_DWORD *)this + 43);
    if ( v16 <= 0x7FFFFFFF )
      v14 = *((_DWORD *)this + 43);
    v27[3] = v14;
    v11 = v16 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v16 > 0x7FFFFFFF )
    {
      v19 = 169;
      goto LABEL_5;
    }
    a2 = (const struct WICRect *)v27;
  }
  v17 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v28);
  v11 = v17;
  if ( v17 >= 0 )
  {
    v17 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v11 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v22);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v22 + 32LL))(v22, &v23, &v21);
        v11 = v17;
        if ( v17 >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 40LL))(v22, &v24);
          v11 = v17;
          if ( v17 >= 0 )
          {
            v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v22 + 48LL))(
                    v22,
                    &v20,
                    &Src);
            v11 = v17;
            if ( v17 >= 0 )
            {
              v17 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v21,
                      v24,
                      v20,
                      Src,
                      a3,
                      a4,
                      a5);
              v11 = v17;
              if ( v17 >= 0 )
                goto LABEL_32;
              v19 = 199;
            }
            else
            {
              v19 = 186;
            }
          }
          else
          {
            v19 = 184;
          }
        }
        else
        {
          v19 = 183;
        }
      }
      else
      {
        v19 = 181;
      }
    }
    else
    {
      v19 = 179;
    }
  }
  else
  {
    v19 = 174;
  }
  v12 = v17;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v19);
LABEL_32:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v26);
  return v11;
}
