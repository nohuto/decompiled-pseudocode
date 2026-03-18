/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x14076F464
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14076E3DC (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14076E430 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x14076E5DC (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076E8E0 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076EB64 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE0BC (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall WdipSemQueryValueFromRegistry(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  unsigned int Src; // [rsp+50h] [rbp-B8h]
  int Src_4; // [rsp+54h] [rbp-B4h] BYREF

  ResultLength = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( KeyHandle && a2 && a5 && a6 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      v10 = Src;
      if ( Src <= a4 && v15 == a3 )
      {
        memset(a5, 0, a4);
        memmove(a5, &Src_4, v10);
        *a6 = v10;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
