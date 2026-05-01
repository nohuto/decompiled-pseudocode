/*
 * XREFs of McTemplateU0qqqqzr3 @ 0x180042484
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x180042428 (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x180072A68 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 * Callees:
 *     McGenEventWrite @ 0x18003F878 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqqqzr3(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v8; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-31h] BYREF
  int *v10; // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  int *v12; // [rsp+60h] [rbp-11h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  int *v14; // [rsp+70h] [rbp-1h]
  __int64 v15; // [rsp+78h] [rbp+7h]
  int *v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+9Ch] [rbp+2Bh]
  int v21; // [rsp+D0h] [rbp+5Fh] BYREF
  int v22; // [rsp+D8h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  v8 = 2;
  v11 = 4LL;
  v10 = &v21;
  v12 = &v22;
  v14 = &v8;
  v13 = 4LL;
  v16 = &a6;
  v18 = a7;
  v15 = 4LL;
  v19 = 2 * a6;
  v17 = 4LL;
  v20 = 0;
  return McGenEventWrite(a1, a2, 0LL, 6, (__int64)v9);
}
