/*
 * XREFs of PfpRpControlRequest @ 0x1406A8384
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x1400F91A4 (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestPerform @ 0x1406A8458 (PfpRpControlRequestPerform.c)
 *     PfpRpControlRequestCopy @ 0x1406A84D4 (PfpRpControlRequestCopy.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  int v4; // ebx
  _BYTE v6[40]; // [rsp+38h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (dword_140467C70 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x18u )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v4 = PfpRpControlRequestCopy(*(void **)(a1 + 16), a2);
      if ( v4 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)PfpRpControlRequestPerform(&unk_140467BD8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v4;
}
