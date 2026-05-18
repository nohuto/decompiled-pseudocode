/*
 * XREFs of sub_18003C2FC @ 0x18003C2FC
 * Callers:
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 * Callees:
 *     sub_18003C860 @ 0x18003C860 (sub_18003C860.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18003C2FC(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v5 = dword_18026A038++;
    sub_18003C860(String, -1LL, "%S(%u)", a2, v5);
    v4 = strnlen(String, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 24LL))(a1, &unk_180211200, v4, String);
  }
}
