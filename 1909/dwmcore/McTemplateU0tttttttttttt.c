/*
 * XREFs of McTemplateU0tttttttttttt @ 0x1801AC70C
 * Callers:
 *     ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x1801ABFBC (-FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1800B6720 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0tttttttttttt(
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
        char a13,
        char a14)
{
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-D0h] BYREF
  int *v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  int *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  char *v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  char *v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  char *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  char *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  char *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  char *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  char *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+130h] [rbp+30h] BYREF
  int v41; // [rsp+138h] [rbp+38h] BYREF

  v41 = a4;
  v40 = a3;
  v17 = 4LL;
  v16 = &v40;
  v19 = 4LL;
  v18 = &v41;
  v21 = 4LL;
  v20 = &a5;
  v23 = 4LL;
  v22 = &a6;
  v24 = &a7;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_COMPUTESCRIBBLE_UNSUPPORTEDCHECK,
           a3,
           0xDu,
           &v15);
}
