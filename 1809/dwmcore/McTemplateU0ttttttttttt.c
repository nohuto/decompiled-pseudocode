/*
 * XREFs of McTemplateU0ttttttttttt @ 0x18022CD18
 * Callers:
 *     ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x18022C5BC (-FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ttttttttttt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-C1h] BYREF
  int *v15; // [rsp+40h] [rbp-B1h]
  __int64 v16; // [rsp+48h] [rbp-A9h]
  int *v17; // [rsp+50h] [rbp-A1h]
  __int64 v18; // [rsp+58h] [rbp-99h]
  char *v19; // [rsp+60h] [rbp-91h]
  __int64 v20; // [rsp+68h] [rbp-89h]
  char *v21; // [rsp+70h] [rbp-81h]
  __int64 v22; // [rsp+78h] [rbp-79h]
  char *v23; // [rsp+80h] [rbp-71h]
  __int64 v24; // [rsp+88h] [rbp-69h]
  char *v25; // [rsp+90h] [rbp-61h]
  __int64 v26; // [rsp+98h] [rbp-59h]
  char *v27; // [rsp+A0h] [rbp-51h]
  __int64 v28; // [rsp+A8h] [rbp-49h]
  char *v29; // [rsp+B0h] [rbp-41h]
  __int64 v30; // [rsp+B8h] [rbp-39h]
  char *v31; // [rsp+C0h] [rbp-31h]
  __int64 v32; // [rsp+C8h] [rbp-29h]
  char *v33; // [rsp+D0h] [rbp-21h]
  __int64 v34; // [rsp+D8h] [rbp-19h]
  char *v35; // [rsp+E0h] [rbp-11h]
  __int64 v36; // [rsp+E8h] [rbp-9h]
  int v37; // [rsp+120h] [rbp+2Fh] BYREF
  int v38; // [rsp+128h] [rbp+37h] BYREF

  v38 = a4;
  v37 = a3;
  v16 = 4LL;
  v15 = &v37;
  v18 = 4LL;
  v17 = &v38;
  v20 = 4LL;
  v19 = &a5;
  v22 = 4LL;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v35 = &a13;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_COMPUTESCRIBBLE_UNSUPPORTEDCHECK,
           a3,
           0xCu,
           &v14);
}
