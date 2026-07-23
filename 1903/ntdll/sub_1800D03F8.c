/*
 * XREFs of sub_1800D03F8 @ 0x1800D03F8
 * Callers:
 *     sub_180059C34 @ 0x180059C34 (sub_180059C34.c)
 * Callees:
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

char __fastcall sub_1800D03F8(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11; // [rsp+38h] [rbp-49h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-45h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  _DWORD v17[2]; // [rsp+80h] [rbp-1h] BYREF
  __int16 *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int16 *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]
  __int64 v24; // [rsp+B8h] [rbp+37h]
  __int64 v25; // [rsp+C0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(&stru_1801660C0, (PRTL_RUN_ONCE_INIT_FN)sub_1800827D0, 0LL, 0LL);
  if ( v6 >= 0 && (unsigned int)dword_18015F450 > 5 )
  {
    LOBYTE(v6) = sub_1800062B0((__int64)&dword_18015F450, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v15 = 2LL;
      v11 = v9 + 4;
      v12 = v9 + 4;
      v14 = v17;
      v16 = *((_QWORD *)a1 + 1);
      v17[0] = *a1;
      v18 = &v11;
      v22 = &v12;
      v17[1] = v9;
      v19 = 2LL;
      v20 = a2;
      v21 = 16LL;
      v23 = 2LL;
      v24 = a3;
      v25 = 16LL;
      LOBYTE(v6) = sub_18008935C(v7, (unsigned __int8 *)dword_18012B73A, v8, v9, 8u, (PEVENT_DATA_DESCRIPTOR)v13);
    }
  }
  return v6;
}
