/*
 * XREFs of sub_180030680 @ 0x180030680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180030918 @ 0x180030918 (sub_180030918.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F128 @ 0x18010F128 (sub_18010F128.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

__int64 __fastcall sub_180030680(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_18010F128(v3[18], v2, v3[10], v3[11], v3[13]);
  result = sub_180032F0C(a1, v3, 0LL);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8) )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
      sub_18010F260(v3[18], v2, v3[10], v3[11], v3[13]);
    sub_180030888(&v11, v3[10], v3[11], v3[13]);
    *(_QWORD *)(a1 + 88) = v3[10];
    *(_QWORD *)(a1 + 96) = v3[11];
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v3[10])(a1, v3[11], v3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10) )
      v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v5 )
      sub_18010F2FC(v3[18], v2, v3[10], v3[11], v3[13]);
    return sub_180030918(v11);
  }
  return result;
}
