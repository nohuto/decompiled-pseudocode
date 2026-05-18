/*
 * XREFs of sub_180011840 @ 0x180011840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090EAC @ 0x180090EAC (sub_180090EAC.c)
 */

__int64 __fastcall sub_180011840(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180090EAC(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 44, (__int64)"SpectreMaterial.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
