/*
 * XREFs of PortSrbTranslateSrbToNtStatus @ 0x1C00233A0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0018A24 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C0023488 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0046AC0 (RaUnitSmartReturnStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateSrbToNtStatus(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0xB )
  {
    switch ( v1 )
    {
      case 0xEu:
        return 3221225653LL;
      case 0x11u:
        return 3221225664LL;
      case 0x12u:
        return 2147483653LL;
    }
    if ( v1 != 21 )
    {
      if ( v1 <= 0x1F )
        return 3221225861LL;
      if ( v1 <= 0x21 )
        return 3221225664LL;
      if ( v1 != 34 )
        return 3221225861LL;
    }
    return 3221225488LL;
  }
  if ( v1 == 11 )
    return 3221225653LL;
  result = 0LL;
  if ( (a1 & 0x3F) == 0 )
    return 259LL;
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 5;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return 3221225629LL;
          return 3221225861LL;
        }
        return 3221225653LL;
      }
      return 3221225664LL;
    }
    return 3221225488LL;
  }
  return result;
}
