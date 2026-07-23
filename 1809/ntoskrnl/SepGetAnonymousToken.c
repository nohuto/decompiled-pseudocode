/*
 * XREFs of SepGetAnonymousToken @ 0x1400DD58C
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  PVOID v5; // rbx
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  int v9; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  __int128 v13; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v10 = 0LL;
  v12 = 0;
  v11 = 0LL;
  v9 = 48;
  v13 = 0LL;
  v4 = SepDuplicateToken((_DWORD)SeAnonymousLogonTokenNoEveryone, (unsigned int)&v9, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0
        || (v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800)),
            v4 < 0)
        || (SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL),
            v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784)),
            v4 < 0)
        || (v6 = *(_DWORD **)(a1 + 776)) != 0LL
        && *v6
        && (v4 = AuthzBasepDuplicateSecurityAttributes((__int64)v6, *((_QWORD **)v5 + 97), 0), v4 < 0) )
      {
        ObfDereferenceObject(v5);
        return (unsigned int)v4;
      }
      *((_QWORD *)v5 + 9) &= 0x200800000uLL;
      *((_QWORD *)v5 + 10) &= 0x200800000uLL;
      *((_QWORD *)v5 + 8) &= 0x200800000uLL;
      v7 = *((_DWORD *)v5 + 50) & 0xFFFF9FFF | 0x4000;
      *((_DWORD *)v5 + 50) = v7;
      *((_DWORD *)v5 + 50) = v7 | *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = v5;
  }
  return (unsigned int)v4;
}
