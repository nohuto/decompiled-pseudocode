/*
 * XREFs of sub_1800098D0 @ 0x1800098D0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 */

__int64 sub_1800098D0()
{
  unsigned __int32 v0; // ebx

  v0 = EtwEventRegister(&ProviderId, sub_180102300, 0LL, &RegHandle);
  if ( (byte_180166058 & 8) != 0 )
    sub_180007DE8((ULONGLONG *)&dword_18015F5C8);
  return v0;
}
