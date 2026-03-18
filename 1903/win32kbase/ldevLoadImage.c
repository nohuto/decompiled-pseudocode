/*
 * XREFs of ldevLoadImage @ 0x1C0048F40
 * Callers:
 *     ldevLoadDriver @ 0x1C0048C60 (ldevLoadDriver.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0048FBC (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00BB41C (_wcsicmp.c)
 */

struct _LDEV *__fastcall ldevLoadImage(const WCHAR *a1, int a2, int *a3, int a4, int a5, __int64 a6)
{
  __int64 v7; // rdi
  struct _LDEV *ImageInternal; // rsi
  const WCHAR *v10; // rdx
  int v11; // ecx
  int v12; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+34h] [rbp-85h] BYREF
  __int64 v14; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-59h]
  int v17; // [rsp+68h] [rbp-51h]
  int v18; // [rsp+6Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-49h] BYREF
  int *v20; // [rsp+80h] [rbp-39h]
  int v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+8Ch] [rbp-2Dh]
  int *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  int *v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+ACh] [rbp-Dh]
  int *v29; // [rsp+B0h] [rbp-9h]
  int v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+BCh] [rbp+3h]
  int *v32; // [rsp+C0h] [rbp+7h]
  int v33; // [rsp+C8h] [rbp+Fh]
  int v34; // [rsp+CCh] [rbp+13h]
  int v35; // [rsp+118h] [rbp+5Fh] BYREF
  int v36; // [rsp+128h] [rbp+6Fh] BYREF

  v36 = a4;
  v35 = a2;
  v7 = a6;
  ImageInternal = ldevLoadImageInternal(a1, a2, a3, a4, a5);
  if ( !*a3
    && wcsicmp(*(const wchar_t **)v7, L"cdd")
    && wcsicmp(*(const wchar_t **)v7, L"rdpudd")
    && dword_1C020F458 > 5u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F458, 0x400000000000uLL) )
  {
    v10 = *(const WCHAR **)v7;
    v18 = 0;
    v16 = &v14;
    v14 = 2048LL;
    v17 = 8;
    TlgCreateWsz(&pDesc, v10);
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v11 = *(_DWORD *)(v7 + 8);
    v34 = 0;
    v20 = &v12;
    v13 = *(_DWORD *)(v7 + 12);
    v23 = &v13;
    v26 = &v35;
    v29 = &v36;
    v32 = &a5;
    v12 = v11;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v33 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F458, &unk_1C01E3E81, 0LL, 0LL, 9u, &pData);
  }
  return ImageInternal;
}
