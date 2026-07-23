/*
 * XREFs of EtwEventSetInformation @ 0x18000A3E0
 * Callers:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 * Callees:
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  __int32 v4; // edx

  if ( !InformationClass )
  {
    if ( !InformationLength )
      return sub_180080290(RegHandle);
    return 87;
  }
  v4 = InformationClass - 2;
  if ( !v4 )
  {
    if ( EventInformation && InformationLength - 3 <= 0xFFFC )
      return sub_18000A434(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    return 87;
  }
  if ( v4 != 1 )
    return 50;
  if ( !EventInformation || InformationLength != 1 )
    return 87;
  return sub_18010CD40(RegHandle, EventInformation);
}
