/*
 * XREFs of SeCopyClientToken @ 0x1405C3DA8
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408DA5B0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenTrust @ 0x1405D54D0 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  int inserted; // edi
  PVOID v8; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v11[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+64h] [rbp-24h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v11[1] = 0;
  v15 = 0;
  v12 = 0LL;
  v14 = 0;
  v13 = 0LL;
  v11[0] = 48;
  v16 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v11, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_13;
  v8 = Object;
  if ( a4 )
    inserted = SepSetTokenTrust(Object, a5);
  if ( inserted < 0 )
    goto LABEL_13;
  inserted = ObInsertObjectEx(v8, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_13;
  if ( (*((_DWORD *)v8 + 50) & 0x4000) != 0 && *((_QWORD *)v8 + 98) )
  {
    inserted = SepAppendAceToTokenObjectAcl(v8, 983551LL);
    if ( inserted >= 0 )
      goto LABEL_8;
    ObfDereferenceObject(v8);
  }
  if ( inserted < 0 )
  {
LABEL_13:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_8:
  SepAppendAceToTokenObjectAcl(v8, 8LL);
  *a6 = v8;
  return (unsigned int)inserted;
}
