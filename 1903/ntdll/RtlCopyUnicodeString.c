/*
 * XREFs of RtlCopyUnicodeString @ 0x1800150A0
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     LdrGetDllDirectory @ 0x18007D5F0 (LdrGetDllDirectory.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  void *v6; // rsi
  const void *v7; // rdx
  unsigned __int64 v8; // rbx

  result = (unsigned __int64)a2;
  if ( a2 )
  {
    v4 = *a2;
    v5 = a1[1];
    v6 = (void *)*((_QWORD *)a1 + 1);
    v7 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v4 <= (unsigned __int16)v5 )
      v5 = v4;
    v8 = v5;
    *a1 = v5;
    memmove(v6, v7, v5);
    result = a1[1];
    if ( (unsigned __int64)*a1 + 2 <= result )
      *((_WORD *)v6 + (v8 >> 1)) = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
