/*
 * XREFs of SepAppendDefaultDacl @ 0x1406C1DD8
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140132D18 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 */

void *__fastcall SepAppendDefaultDacl(__int64 a1, unsigned __int16 *a2)
{
  int v3; // edi
  void *v4; // rbx
  void *result; // rax

  v3 = a2[1];
  v4 = (void *)(*(_QWORD *)(a1 + 176) + 8LL + 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL));
  result = memmove(v4, a2, a2[1]);
  *(_DWORD *)(a1 + 140) -= v3;
  *(_QWORD *)(a1 + 184) = v4;
  return result;
}
