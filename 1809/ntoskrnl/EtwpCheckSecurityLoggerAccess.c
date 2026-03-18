/*
 * XREFs of EtwpCheckSecurityLoggerAccess @ 0x14070F510
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x140656CB8 (EtwpCheckNotificationAccess.c)
 *     EtwpQueryTrace @ 0x140659DA0 (EtwpQueryTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSecurityLoggerAccess(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *(_BYTE *)(a1 + 1738);
  v2 = 0;
  if ( ((v1 - 49) & 0xCF) != 0 || v1 == 65 )
    return (unsigned int)-1073741790;
  return v2;
}
