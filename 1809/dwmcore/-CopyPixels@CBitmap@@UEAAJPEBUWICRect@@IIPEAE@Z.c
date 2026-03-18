/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18007F130
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800F0450 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007F2E4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007F41C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800965AC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-61h]
  unsigned int v18; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h] BYREF
  int v21; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-19h] BYREF
  char *v24; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp-9h] BYREF
  struct tagRECT v26; // [rsp+88h] [rbp+7h] BYREF

  v20 = 0LL;
  v21 = 0;
  v19 = 0;
  Src = 0LL;
  v18 = 0;
  v24 = (char *)this + 104;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  if ( !a5 )
  {
    v11 = -2147024809;
    v17 = 175;
    goto LABEL_15;
  }
  if ( !a2 )
  {
    v9 = *((_DWORD *)this + 38);
    v14 = -1;
    v25[0] = 0;
    v25[1] = 0;
    v15 = -1;
    if ( v9 <= 0x7FFFFFFF )
      v15 = v9;
    v25[2] = v15;
    v11 = v9 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v9 > 0x7FFFFFFF )
    {
      v17 = 183;
    }
    else
    {
      v16 = *((_DWORD *)this + 39);
      if ( v16 <= 0x7FFFFFFF )
        v14 = *((_DWORD *)this + 39);
      v25[3] = v14;
      v11 = v16 > 0x7FFFFFFF ? 0x80070216 : 0;
      if ( v16 <= 0x7FFFFFFF )
      {
        a2 = (const struct WICRect *)v25;
        goto LABEL_3;
      }
      v17 = 184;
    }
LABEL_15:
    v13 = v11;
    goto LABEL_32;
  }
LABEL_3:
  v10 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 189;
  }
  else
  {
    v10 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 42), a3, a2, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v17 = 194;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v20);
      v11 = v10;
      if ( v10 < 0 )
      {
        v17 = 196;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v20 + 32LL))(v20, &v21, &v19);
        v11 = v10;
        if ( v10 < 0 )
        {
          v17 = 198;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v22);
          v11 = v10;
          if ( v10 < 0 )
          {
            v17 = 199;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v20 + 48LL))(
                    v20,
                    &v18,
                    &Src);
            v11 = v10;
            if ( v10 < 0 )
            {
              v17 = 201;
            }
            else
            {
              v10 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 42),
                      a2->Width,
                      v19,
                      v22,
                      v18,
                      Src,
                      a3,
                      a4,
                      a5);
              v11 = v10;
              if ( v10 >= 0 )
                goto LABEL_10;
              v17 = 214;
            }
          }
        }
      }
    }
  }
  v13 = v10;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v17);
LABEL_10:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v11;
}
