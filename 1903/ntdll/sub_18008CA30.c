/*
 * XREFs of sub_18008CA30 @ 0x18008CA30
 * Callers:
 *     sub_18008CAF0 @ 0x18008CAF0 (sub_18008CAF0.c)
 *     sub_18008CB40 @ 0x18008CB40 (sub_18008CB40.c)
 *     sub_18008CB90 @ 0x18008CB90 (sub_18008CB90.c)
 *     sub_18008CBE0 @ 0x18008CBE0 (sub_18008CBE0.c)
 * Callees:
 *     sub_1800F74E0 @ 0x1800F74E0 (sub_1800F74E0.c)
 */

void __fastcall sub_18008CA30()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+A8h] [rbp-10h]

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800F74E0(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
