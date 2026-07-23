/*
 * XREFs of sub_1800D0184 @ 0x1800D0184
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

char __fastcall sub_1800D0184(int a1, unsigned __int16 *a2, char a3, int a4, unsigned __int16 *a5)
{
  NTSTATUS v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+38h] [rbp-61h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v15; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-51h] BYREF
  int *v17; // [rsp+68h] [rbp-31h]
  __int64 v18; // [rsp+70h] [rbp-29h]
  _DWORD *v19; // [rsp+78h] [rbp-21h]
  __int64 v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  _DWORD v22[2]; // [rsp+90h] [rbp-9h] BYREF
  char *v23; // [rsp+98h] [rbp-1h]
  __int64 v24; // [rsp+A0h] [rbp+7h]
  int *v25; // [rsp+A8h] [rbp+Fh]
  __int64 v26; // [rsp+B0h] [rbp+17h]
  _DWORD *v27; // [rsp+B8h] [rbp+1Fh]
  __int64 v28; // [rsp+C0h] [rbp+27h]
  __int64 v29; // [rsp+C8h] [rbp+2Fh]
  _DWORD v30[2]; // [rsp+D0h] [rbp+37h] BYREF

  v9 = RtlRunOnceExecuteOnce(&stru_1801660C0, (PRTL_RUN_ONCE_INIT_FN)sub_1800827D0, 0LL, 0LL);
  if ( v9 >= 0 && (unsigned int)dword_18015F450 > 5 )
  {
    LOBYTE(v9) = sub_1800062B0((__int64)&dword_18015F450, 0x200000000000LL);
    if ( (_BYTE)v9 )
    {
      v17 = &v14;
      v19 = v22;
      v21 = *((_QWORD *)a2 + 1);
      v22[0] = *a2;
      v23 = &v13;
      v25 = &v15;
      v27 = v30;
      v29 = *((_QWORD *)a5 + 1);
      v30[0] = *a5;
      v14 = a1;
      v13 = a3;
      v15 = a4;
      v18 = 4LL;
      v20 = 2LL;
      v22[1] = v11;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 2LL;
      v30[1] = v11;
      LOBYTE(v9) = sub_18008935C(
                     (__int64)&dword_18015F450,
                     (unsigned __int8 *)dword_18012BBD1,
                     v10,
                     v11,
                     9u,
                     (PEVENT_DATA_DESCRIPTOR)v16);
    }
  }
  return v9;
}
