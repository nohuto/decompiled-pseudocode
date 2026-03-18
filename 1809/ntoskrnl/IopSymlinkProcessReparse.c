/*
 * XREFs of IopSymlinkProcessReparse @ 0x1406AC230
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012583C (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140125858 (IopSymlinkGetECP.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AC28C (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x14081D4B8 (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  UNICODE_STRING *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, v4 - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(v4) = IopGraftName(a1, a2);
  }
  else if ( v4 > 2 )
  {
    LODWORD(v4) = IopSymlinkGetECP(*(struct _ECP_LIST **)(a1 + 112), (PVOID *)&v11);
    if ( (v4 & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v11),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, MostRecentlyUsedName + 16),
          LODWORD(v4) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, a1, v11),
          (v4 & 0x80000000) != 0LL) )
    {
      *(_DWORD *)(a1 + 48) = v4;
    }
  }
  return v4;
}
