/*
 * XREFs of SeCopyClientToken @ 0x14064B034
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089CF30 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x1406A5908 (SepSetTokenTrust.c)
 */

__int64 __fastcall SeCopyClientToken(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  int inserted; // edi
  _QWORD *v8; // rbx
  _WORD *v10; // r8
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v13 = 0LL;
  v15 = 0;
  v14 = 0LL;
  v12 = 48;
  v16 = 0LL;
  inserted = SepDuplicateToken(a1, (int)&v12, 0, 2, a2, 0, 0, &Object);
  if ( inserted < 0 )
    goto LABEL_13;
  v8 = Object;
  if ( a4 )
    inserted = SepSetTokenTrust(Object, a5);
  if ( inserted < 0 )
    goto LABEL_13;
  inserted = ObInsertObjectEx(v8, 0LL, 0LL, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_13;
  if ( (v8[25] & 0x4000) != 0 )
  {
    v10 = (_WORD *)v8[98];
    if ( v10 )
    {
      inserted = SepAppendAceToTokenObjectAcl((__int64)v8, 983551, v10);
      if ( inserted >= 0 )
        goto LABEL_8;
      ObfDereferenceObject(v8);
    }
  }
  if ( inserted < 0 )
  {
LABEL_13:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_8:
  SepFinalizeTokenAcls(v8);
  *a6 = v8;
  return (unsigned int)inserted;
}
