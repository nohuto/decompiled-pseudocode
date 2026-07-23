/*
 * XREFs of sub_1800CF288 @ 0x1800CF288
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 *     sub_1800CF3AC @ 0x1800CF3AC (sub_1800CF3AC.c)
 */

__int64 __fastcall sub_1800CF288(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *),
        __int64 (__fastcall *a4)(__int64, const char *),
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int v14; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  v14 = sub_18002113C(a1, a2, (__int64 *)&BaseAddress, a6, (__int64)a5);
  Status = v14;
  if ( v14 >= 0 )
  {
    if ( byte_180166014 )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18017A1F0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = sub_1800CF3AC(a1, (_DWORD)BaseAddress, a2, (_DWORD)a5, v12, (__int64)&v14);
    sub_18001B678((char *)BaseAddress);
    Status = v14;
  }
  if ( Status >= 0
    || (v10 = sub_18007F45C(a1, (__int64)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
