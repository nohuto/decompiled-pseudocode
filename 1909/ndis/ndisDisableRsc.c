/*
 * XREFs of ndisDisableRsc @ 0x1C00AAFA4
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C0104308 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisDisableRsc(__int64 a1)
{
  __int64 result; // rax
  char v3[256]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v4[10]; // [rsp+130h] [rbp+30h] BYREF

  memset(&v3[1], 0, 0xF7uLL);
  memset((char *)v4 + 1, 0, 0x23uLL);
  result = *(_QWORD *)(a1 + 4096);
  if ( result && !*(_BYTE *)(result + 5) )
  {
    if ( (*(_BYTE *)(result + 5) = 1, result = *(_QWORD *)(a1 + 4096), *(_WORD *)(result + 10) >= 0x9Cu)
      && *(_BYTE *)(result + 9) >= 3u
      && (*(_BYTE *)(result + 152) || *(_BYTE *)(result + 153))
      || *(_WORD *)(result + 226) >= 0x9Cu
      && *(_BYTE *)(result + 225) >= 3u
      && (*(_BYTE *)(result + 368) || *(_BYTE *)(result + 369)) )
    {
      v4[4] |= 1u;
      v4[0] = 1704832;
      HIWORD(v4[5]) = 257;
      memset(v3, 0, 0xF8uLL);
      *(_DWORD *)&v3[88] |= 8u;
      *(_DWORD *)&v3[8] = 0;
      *(_QWORD *)&v3[104] = &ndisIntReqGeneric;
      *(_DWORD *)v3 = 15466902;
      *(_QWORD *)&v3[40] = v4;
      *(_DWORD *)&v3[32] = -67042804;
      *(_DWORD *)&v3[4] = 1;
      *(_DWORD *)&v3[48] = 36;
      return ndisQuerySetMiniportEx(a1, 0LL, (__int64)v3, 0, 0LL, 0LL);
    }
  }
  return result;
}
