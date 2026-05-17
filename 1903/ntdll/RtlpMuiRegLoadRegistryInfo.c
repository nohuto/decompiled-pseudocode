/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x180008720
 * Callers:
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800FE790 @ 0x1800FE790 (sub_1800FE790.c)
 *     sub_1800FFDA8 @ 0x1800FFDA8 (sub_1800FFDA8.c)
 */

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 0x800) != 0 )
  {
    result = sub_1800FE790();
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = sub_1800FFDA8(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 4LL);
      result = sub_180008A20(4LL, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v6 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v6;
        v7 = 0LL;
      }
    }
    if ( (a2 & 8) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 8LL);
      result = sub_180008A20(8LL, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v5 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 8u;
        *(_QWORD *)(a1 + 48) = v5;
      }
    }
    if ( (a2 & 0x20) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 32LL);
      result = sub_1800151CC(a1, 1LL);
    }
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x10) != 0 )
      {
        RtlpMuiRegFreeRegistryInfo(a1, 16LL);
        result = sub_1800151CC(a1, 0LL);
      }
      if ( (int)result >= 0 && (a2 & 0x200) != 0 )
        return 0LL;
    }
  }
  return result;
}
