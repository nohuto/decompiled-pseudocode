/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C015846C
 * Callers:
 *     NtGdiGetETM @ 0x1C0158040 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00549BC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0054B94 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BAD20 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        struct PDEV *a2,
        struct _SURFOBJ *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  int *v8; // rdi
  void *v9; // rdx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v13; // eax
  int v14; // r12d
  __int64 v16; // rax
  unsigned int v17; // ebx
  int v19; // eax
  unsigned int v20; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-45h] BYREF
  int *v22; // [rsp+48h] [rbp-41h] BYREF
  void *v23; // [rsp+50h] [rbp-39h] BYREF
  int v24[10]; // [rsp+60h] [rbp-29h] BYREF

  v8 = v24;
  v9 = a7;
  v10 = 0;
  v11 = 0;
  v23 = a7;
  v21 = 0;
  v13 = *((_DWORD *)a2 + 10) & 0x8080;
  v20 = 0;
  v14 = 0;
  v22 = v24;
  if ( v13 == 32896 && *(_QWORD *)a1 )
  {
    v19 = UMPDReleaseRFONTSem(a1, 0LL, &v21, &v20, (void **)&v22);
    v9 = v23;
    v14 = v19;
    v10 = v21;
    v11 = v20;
    v8 = v22;
  }
  v16 = *(_QWORD *)a1;
  if ( a2 != qword_1C0332E90 || v16 && *(_DWORD *)(*(_QWORD *)(v16 + 24) + 8LL) == 3 )
  {
    v23 = *(void **)(v16 + 128);
    v17 = PFFOBJ::FontManagement((PFFOBJ *)&v23, a3, 0LL, 8u, 4u, v9, 0, 0LL);
  }
  else
  {
    v17 = v20;
  }
  if ( v14 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v24 )
        Win32FreePool(v8);
    }
  }
  return v17;
}
