/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1408E01B4
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1405DDE10 (SeCreateClientSecurityEx.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SeQueryServerSiloToken @ 0x1406DDE80 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408DA5B0 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1408E0614 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  v2 = *(_QWORD **)(a1 + 16);
  v5 = v2[3];
  v10 = v5;
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo(v9) && (_DWORD)v5 == 999 && !HIDWORD(v10) )
  {
    v6 = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, &v9);
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
