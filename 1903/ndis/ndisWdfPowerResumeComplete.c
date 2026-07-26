/*
 * XREFs of ndisWdfPowerResumeComplete @ 0x1C00BA5BC
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A6F44 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     ndisRemoveWoLDirectedMAC @ 0x1C0115860 (ndisRemoveWoLDirectedMAC.c)
 */

__int64 __fastcall ndisWdfPowerResumeComplete(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 4456);
  if ( v1 )
  {
    result = *(_DWORD *)(a1 + 124) & 0x60;
    if ( (*(_BYTE *)(a1 + 124) & 0x60) == 0x60 )
    {
      result = (unsigned int)(*(_DWORD *)(a1 + 1272) - 2);
      if ( (unsigned int)result <= 2 )
      {
        result = *(unsigned int *)(a1 + 1004);
        if ( (result & 6) != 0 )
        {
          if ( *(_BYTE *)(v1 + 1096) )
            return ndisRemoveWoLDirectedMAC(a1);
        }
      }
    }
  }
  return result;
}
