/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1408A2B34
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x1406C67A0 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089CF30 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1408A2F5C (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  v5 = v2[3];
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo(v9) && v5 == 999 )
  {
    v6 = SepCopyClientTokenAndSetSilo((__int64)v2, *(_DWORD *)(a1 + 4), a2, &v9);
    if ( v6 >= 0 )
    {
      v7 = v9;
      *(_QWORD *)(a1 + 16) = v9;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObject(v2);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)v6;
}
