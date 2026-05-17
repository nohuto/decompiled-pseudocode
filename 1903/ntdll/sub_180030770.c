/*
 * XREFs of sub_180030770 @ 0x180030770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F128 @ 0x18010F128 (sub_18010F128.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

struct _PEB *__fastcall sub_180030770(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  struct _PEB *result; // rax
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
  result = (struct _PEB *)sub_180032F0C(a1, v3, 0LL);
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
    result = (struct _PEB *)RtlGetCurrentServiceSessionId(v10);
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v5 = (__int64)result->HotpatchInformation + 556;
    }
    if ( *(_BYTE *)v5 )
      result = (struct _PEB *)sub_18010F2FC(v3[18], v2, v3[10], v3[11], v3[13]);
    if ( v11 )
    {
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(v11 + 24) )
      {
        result = (struct _PEB *)((char *)result - *(_QWORD *)(v11 + 24));
        *(_QWORD *)(v11 + 24) = result;
      }
    }
  }
  return result;
}
