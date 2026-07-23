/*
 * XREFs of SeDuplicateTokenAndAddOriginClaim @ 0x1408A2C7C
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x1408A2FC8 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  int v7; // edi
  PVOID v8; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+48h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]
  __int128 v15; // [rsp+68h] [rbp-20h]

  v12 = 0LL;
  v14 = 0;
  v13 = 0LL;
  v11 = 48;
  v15 = 0LL;
  v7 = SepDuplicateToken(a1, (int)&v11, 0, 1, 0, 0, 0, &Object);
  if ( v7 < 0 )
  {
    v8 = 0LL;
    goto LABEL_5;
  }
  v8 = Object;
  v7 = SepAddTokenOriginClaim(a2, a3, Object);
  if ( v7 >= 0 )
  {
    *a4 = v8;
LABEL_5:
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v7;
}
