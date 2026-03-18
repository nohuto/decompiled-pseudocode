/*
 * XREFs of SepGetAnonymousToken @ 0x140087A4C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A420 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x140619754 (SepSetTokenSessionById.c)
 *     SepSetTokenCapabilities @ 0x14061C204 (SepSetTokenCapabilities.c)
 *     SepSetTokenLowboxNumber @ 0x14061E0BC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x14064462C (SepSetTokenPackage.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, __int64 **a2)
{
  int v4; // edi
  __int64 *v5; // rbx
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  _DWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  __int128 v14; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v9[1] = 0;
  v13 = 0;
  v10 = 0LL;
  v12 = 0;
  v11 = 0LL;
  v9[0] = 48;
  v14 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)v9, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    v5 = (__int64 *)Object;
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0
        || (v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800)),
            v4 < 0)
        || (SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL),
            *((_DWORD *)v5 + 30) = *(_DWORD *)(a1 + 120),
            v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784)),
            v4 < 0)
        || (v6 = *(_DWORD **)(a1 + 776)) != 0LL
        && *v6
        && (v4 = AuthzBasepDuplicateSecurityAttributes((__int64)v6, v5[97], 0), v4 < 0) )
      {
        ObfDereferenceObject(v5);
        return (unsigned int)v4;
      }
      v5[9] &= 0x200800000uLL;
      v5[10] &= 0x200800000uLL;
      v5[8] &= 0x200800000uLL;
      v7 = v5[25] & 0xFFFF9FFF | 0x4000;
      *((_DWORD *)v5 + 50) = v7;
      *((_DWORD *)v5 + 50) = v7 | *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = v5;
  }
  return (unsigned int)v4;
}
