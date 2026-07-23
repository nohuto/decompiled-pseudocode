/*
 * XREFs of sub_1800D0528 @ 0x1800D0528
 * Callers:
 *     LdrCreateEnclave @ 0x1800CD360 (LdrCreateEnclave.c)
 * Callees:
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800D0B68 @ 0x1800D0B68 (sub_1800D0B68.c)
 */

char __fastcall sub_1800D0528(__int64 a1, int a2)
{
  struct _PEB *v2; // rax
  __int64 v5; // r8
  int v7; // [rsp+30h] [rbp-19h] BYREF
  int v8[2]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp+17h] BYREF
  int *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(&stru_1801665A8, sub_1800D0B40, 0LL, 0LL);
    if ( (unsigned int)dword_18015F4C0 > 4 )
    {
      LOBYTE(v2) = sub_1800062B0((__int64)&dword_18015F4C0, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        *(_QWORD *)v8 = a1;
        v7 = a2;
        sub_1800D0B68(v10, "LdrCreateEnclave");
        v13 = 0;
        v16 = 0;
        v14 = &v7;
        v11 = v8;
        v12 = 8;
        v15 = 4;
        LOBYTE(v2) = sub_18008935C(
                       (__int64)&dword_18015F4C0,
                       (unsigned __int8 *)dword_18012B8AF,
                       v5,
                       (__int64)v8,
                       5u,
                       (PEVENT_DATA_DESCRIPTOR)v9);
      }
    }
  }
  return (char)v2;
}
