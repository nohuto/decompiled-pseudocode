/*
 * XREFs of McTemplateU0xxddffff @ 0x18015E020
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015D46C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxddffff(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-69h]
  __int64 v11; // [rsp+48h] [rbp-61h]
  __int64 *v12; // [rsp+50h] [rbp-59h]
  __int64 v13; // [rsp+58h] [rbp-51h]
  char *v14; // [rsp+60h] [rbp-49h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  char *v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  char *v18; // [rsp+80h] [rbp-29h]
  __int64 v19; // [rsp+88h] [rbp-21h]
  char *v20; // [rsp+90h] [rbp-19h]
  __int64 v21; // [rsp+98h] [rbp-11h]
  va_list v22; // [rsp+A0h] [rbp-9h]
  __int64 v23; // [rsp+A8h] [rbp-1h]
  va_list v24; // [rsp+B0h] [rbp+7h]
  __int64 v25; // [rsp+B8h] [rbp+Fh]
  __int64 v26; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v28; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  va_list va1; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v28 = va_arg(va1, _QWORD);
  v27 = a4;
  v26 = a3;
  v11 = 8LL;
  v10 = &v26;
  v13 = 8LL;
  v12 = &v27;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  va_copy(v22, va);
  va_copy(v24, va1);
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Start,
           a3,
           9u,
           &v9);
}
