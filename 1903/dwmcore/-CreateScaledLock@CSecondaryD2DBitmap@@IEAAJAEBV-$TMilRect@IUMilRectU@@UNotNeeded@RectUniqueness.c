/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC710
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003EB40 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18002DD80 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(__int64 a1, _DWORD *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rax
  void (__fastcall *v8)(__int64 *, int *, int *); // rax
  struct IBitmapSource *v10; // rsi
  struct IBitmapSource *v11; // rdi
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  signed int v31; // eax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  signed int v36; // eax
  __int64 v37; // rcx
  struct IUnknown *v39; // [rsp+30h] [rbp-79h]
  __int64 v40; // [rsp+40h] [rbp-69h] BYREF
  struct IWICBitmapSource *v41; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-55h] BYREF
  struct IBitmapSource *v44; // [rsp+58h] [rbp-51h] BYREF
  struct IBitmapSource *v45; // [rsp+60h] [rbp-49h] BYREF
  __int64 v46; // [rsp+68h] [rbp-41h] BYREF
  __int64 v47; // [rsp+70h] [rbp-39h] BYREF
  __int64 v48; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int8 *v49; // [rsp+80h] [rbp-29h] BYREF
  __int64 v50; // [rsp+88h] [rbp-21h] BYREF
  int v51; // [rsp+90h] [rbp-19h] BYREF
  int v52; // [rsp+94h] [rbp-15h] BYREF
  _DWORD v53[4]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v54[16]; // [rsp+A8h] [rbp-1h] BYREF

  *a4 = 0LL;
  v6 = *a3;
  v40 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v8 = *(void (__fastcall **)(__int64 *, int *, int *))(v6 + 32);
  v10 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v11 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v8(a3, &v51, &v52);
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *))(*a3 + 64))(a3, &v50, &v40);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x134u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v40 + 24LL))(v40, v54);
    v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 40LL))(v40, &v43);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x139u, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v40 + 48LL))(
              v40,
              &v42,
              &v49);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x13Au, 0LL);
      }
      else
      {
        v19 = HrCreateBitmapFromMemoryEx(
                v51 - (int)v50,
                v52 - HIDWORD(v50),
                (const struct PixelFormatInfo *)v54,
                v43,
                v42,
                v49,
                v39,
                &v45);
        v14 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x146u, 0LL);
          v10 = v45;
        }
        else
        {
          v10 = v45;
          v21 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v45)(
                  v45,
                  &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                  &v48);
          v14 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x148u, 0LL);
          }
          else
          {
            v23 = WICCreateImagingFactory_Proxy(567LL, &v47);
            v14 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x14Eu, 0LL);
            }
            else
            {
              v25 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v47 + 88LL))(v47, &v41);
              v14 = v25;
              if ( v25 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x150u, 0LL);
              }
              else
              {
                v27 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v41->lpVtbl[1].QueryInterface)(
                        v41,
                        v48,
                        *(unsigned int *)(a1 + 168),
                        *(unsigned int *)(a1 + 172),
                        3);
                v14 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x158u, 0LL);
                }
                else
                {
                  v29 = HrCreateBitmapFromWICBitmapSource(v41, &v44);
                  v14 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x15Du, 0LL);
                    v11 = v44;
                  }
                  else
                  {
                    v11 = v44;
                    v31 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v44)(
                            v44,
                            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                            &v46);
                    v14 = v31;
                    if ( v31 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x15Fu, 0LL);
                    }
                    else
                    {
                      v33 = a2[1];
                      v34 = a2[2] - *a2;
                      v53[0] = *a2;
                      v53[2] = v34;
                      v35 = a2[3] - v33;
                      v53[1] = v33;
                      v53[3] = v35;
                      v36 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v46 + 24LL))(
                              v46,
                              v53,
                              1LL,
                              a4);
                      v14 = v36;
                      if ( v36 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x166u, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v41 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v41->lpVtbl->Release)(v41);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  return v14;
}
