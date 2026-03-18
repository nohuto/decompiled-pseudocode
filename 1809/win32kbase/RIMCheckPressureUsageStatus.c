/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x1C01153E0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  result = 19760LL;
  if ( a3 == 19760 || (result = 7472LL, a3 == 7472) )
  {
    if ( *(_BYTE *)(a1 + 849) )
      *(_DWORD *)(a2 + 308) |= 0x20000u;
  }
  return result;
}
