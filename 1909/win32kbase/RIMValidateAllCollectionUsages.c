/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C013F4AC
 * Callers:
 *     RIMIsParallelDevice @ 0x1C013E7D4 (RIMIsParallelDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     RIMIsButtonCapsEqual @ 0x1C013E4C0 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C013EA6C (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C013EDF8 (RIMRetrieveAllLinkIndexUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v16; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v17 = 0LL;
  v15[0] = 0;
  v18 = 0LL;
  v16 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v15, &v17, &v16, &v18) == 1114112 )
  {
    if ( !v15[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( v15[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, v17, a2)
      && v16 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, v18, a4) )
    {
      v6 = 1;
    }
    Win32FreePool(v17);
    Win32FreePool(v18);
  }
  return v6;
}
