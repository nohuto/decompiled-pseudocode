/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x1400A5A7C
 * Callers:
 *     RtlQueryPackageClaims @ 0x1400A54D0 (RtlQueryPackageClaims.c)
 *     EtwpQueryPsmKey @ 0x1408B61A4 (EtwpQueryPsmKey.c)
 * Callees:
 *     SeQuerySecurityAttributesToken @ 0x140626760 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(int a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  unsigned __int8 v9; // si
  int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  result = SeQuerySecurityAttributesToken(a1, (unsigned int)&unk_140350CB8, v10, a3, 816, (__int64)&v13);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    if ( v10 == 1 )
      return result;
    result = SeQuerySecurityAttributesToken(a1, (unsigned int)&unk_140350CB8, 1, a3, 816, (__int64)&v13);
    if ( (int)result < 0 )
      return result;
    v9 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221226021LL;
  if ( a4 )
  {
    if ( v9 )
      v12 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v12 = 0LL;
    *a4 = v12;
  }
  if ( v5 )
  {
    *v5 |= (2LL * v9) | 1;
    if ( (unsigned int)SeQuerySecurityAttributesToken(a1, (unsigned int)&unk_140350790, 1, 0, 0, (__int64)&v13) == -1073741789 )
      *v5 |= 4uLL;
  }
  return 0LL;
}
