/*
 * XREFs of McTemplateU0pffffss @ 0x1801B8AAC
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF440 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pffffss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        char a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  const char *v13; // rcx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-51h]
  __int64 v18; // [rsp+48h] [rbp-49h]
  float *v19; // [rsp+50h] [rbp-41h]
  __int64 v20; // [rsp+58h] [rbp-39h]
  char *v21; // [rsp+60h] [rbp-31h]
  __int64 v22; // [rsp+68h] [rbp-29h]
  char *v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  char *v25; // [rsp+80h] [rbp-11h]
  __int64 v26; // [rsp+88h] [rbp-9h]
  const char *v27; // [rsp+90h] [rbp-1h]
  int v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+9Ch] [rbp+Bh]
  const char *v30; // [rsp+A0h] [rbp+Fh]
  int v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+ACh] [rbp+1Bh]
  __int64 v33; // [rsp+E0h] [rbp+4Fh] BYREF
  float v34; // [rsp+E8h] [rbp+57h] BYREF

  v34 = a4;
  v33 = a3;
  v9 = a8;
  v17 = &v33;
  v18 = 8LL;
  v19 = &v34;
  v20 = 4LL;
  v21 = &a5;
  v22 = 4LL;
  v23 = &a6;
  v25 = &a7;
  v10 = -1LL;
  v24 = 4LL;
  v26 = 4LL;
  if ( a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a8[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5;
  }
  v28 = v12;
  v13 = a9;
  if ( !a8 )
    v9 = "NULL";
  v29 = 0;
  v27 = v9;
  if ( a9 )
  {
    do
      ++v10;
    while ( a9[v10] );
    v14 = v10 + 1;
  }
  else
  {
    v14 = 5;
  }
  v31 = v14;
  v32 = 0;
  if ( !a9 )
    v13 = "NULL";
  v30 = v13;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_VISUAL_RENDERCONTENT,
           0LL,
           8u,
           &v16);
}
