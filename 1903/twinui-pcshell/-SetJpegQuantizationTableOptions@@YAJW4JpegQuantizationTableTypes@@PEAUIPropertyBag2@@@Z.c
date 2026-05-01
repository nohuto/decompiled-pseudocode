/*
 * XREFs of ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x1801DDE0C
 * Callers:
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1801DD3A4 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_2 @ 0x1801DDFF0 (memcpy_s_2.c)
 */

__int64 __fastcall SetJpegQuantizationTableOptions(__int64 a1, __int64 a2)
{
  HRESULT v3; // ebx
  SAFEARRAY *v4; // rax
  SAFEARRAY *v5; // rax
  SAFEARRAY *v6; // rcx
  rsize_t v7; // rdx
  rsize_t v8; // r9
  rsize_t v9; // rdx
  rsize_t v10; // r9
  void *ppvData; // [rsp+38h] [rbp-59h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+40h] [rbp-51h] BYREF
  SAFEARRAYBOUND v14; // [rsp+48h] [rbp-49h] BYREF
  __int16 v15; // [rsp+50h] [rbp-41h] BYREF
  SAFEARRAY *psa; // [rsp+58h] [rbp-39h]
  __int16 v17; // [rsp+68h] [rbp-29h]
  SAFEARRAY *v18; // [rsp+70h] [rbp-21h]
  _BYTE v19[4]; // [rsp+88h] [rbp-9h] BYREF
  __int16 v20; // [rsp+8Ch] [rbp-5h]
  const wchar_t *v21; // [rsp+98h] [rbp+7h]
  __int16 v22; // [rsp+B4h] [rbp+23h]
  const wchar_t *v23; // [rsp+C0h] [rbp+2Fh]

  if ( (_DWORD)JpegQuantizationTables )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    memset_0(v19, 0, 0x50uLL);
    v21 = L"Luminance";
    v20 = 8195;
    v23 = L"Chrominance";
    v22 = 8195;
    memset_0(&v15, 0, 0x30uLL);
    rgsabound.lLbound = 0;
    rgsabound.cElements = 64;
    v4 = SafeArrayCreate(3u, 1u, &rgsabound);
    v14.lLbound = 0;
    psa = v4;
    v15 = 8195;
    v14.cElements = 64;
    v5 = SafeArrayCreate(3u, 1u, &v14);
    v6 = psa;
    v18 = v5;
    v17 = 8195;
    if ( psa && v5 )
    {
      v3 = SafeArrayAccessData(psa, &ppvData);
      if ( v3 >= 0 )
      {
        memcpy_s_2(ppvData, v7, &unk_1805972D4, v8);
        v3 = SafeArrayUnaccessData(psa);
        if ( v3 >= 0 )
        {
          v3 = SafeArrayAccessData(v18, &ppvData);
          if ( v3 >= 0 )
          {
            memcpy_s_2(ppvData, v9, &unk_1805973D4, v10);
            v3 = SafeArrayUnaccessData(v18);
            if ( v3 >= 0 )
              v3 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int16 *))(*(_QWORD *)a2 + 32LL))(
                     a2,
                     2LL,
                     v19,
                     &v15);
          }
        }
      }
      v5 = v18;
      v6 = psa;
    }
    else
    {
      v3 = -2147024882;
    }
    if ( v6 )
    {
      SafeArrayDestroy(v6);
      v5 = v18;
    }
    if ( v5 )
      SafeArrayDestroy(v5);
  }
  return (unsigned int)v3;
}
