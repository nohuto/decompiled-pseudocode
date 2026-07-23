/*
 * XREFs of sub_1800D070C @ 0x1800D070C
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CD500 (LdrInitializeEnclave.c)
 * Callees:
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800D0B68 @ 0x1800D0B68 (sub_1800D0B68.c)
 */

char __fastcall sub_1800D070C(int a1)
{
  struct _PEB *v1; // rax
  ULONG v3; // r10d
  __int64 v4; // r8
  int v6[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  ULONG v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(&stru_1801665A8, sub_1800D0B40, 0LL, 0LL);
    if ( (unsigned int)dword_18015F4C0 > 4 )
    {
      LOBYTE(v1) = sub_1800062B0((__int64)&dword_18015F4C0, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v6[0] = a1;
        sub_1800D0B68(v8, "LdrInitializeEnclave");
        v11 = 0;
        v9 = v6;
        v10 = v3;
        LOBYTE(v1) = sub_18008935C(
                       (__int64)&dword_18015F4C0,
                       (unsigned __int8 *)dword_18012BB57,
                       v4,
                       (__int64)v6,
                       v3,
                       (PEVENT_DATA_DESCRIPTOR)v7);
      }
    }
  }
  return (char)v1;
}
