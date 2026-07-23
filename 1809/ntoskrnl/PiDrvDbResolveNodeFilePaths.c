/*
 * XREFs of PiDrvDbResolveNodeFilePaths @ 0x14083FF38
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083E918 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveNodeFilePaths(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+20h] BYREF

  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( (*(_DWORD *)(a1 + 492) & 1) == 0
    || (v5 = SysCtxRegOpenKey(0LL, a2, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle),
        v4 = v5,
        v5 == -1073741772) )
  {
    v4 = 0;
    goto LABEL_15;
  }
  if ( v5 >= 0 )
  {
    v6 = (MEMORY[0xFFFFF780000002F0] & 0x400 | 0x200u) >> 9;
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, L"\\SystemRoot") )
      {
LABEL_7:
        v4 = -1073741670;
        goto LABEL_15;
      }
LABEL_12:
      if ( PiDrvDbGetNodeSystemRoot(a1, &UnicodeString) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      v4 = PiDrvDbResolveFilePathKeyValues(
             a2,
             v6,
             &DestinationString,
             (unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL));
      goto LABEL_15;
    }
    v7 = *(unsigned __int16 *)(a1 + 18) + 28;
    if ( v7 > 0xFFFE )
    {
      v4 = -2147483643;
      goto LABEL_15;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v7;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(v7);
    if ( !DestinationString.Buffer )
      goto LABEL_7;
    v4 = RtlUnicodeStringPrintf(&DestinationString, L"%ws\\%wZ", L"\\DriverStores", a1 + 16);
    if ( v4 >= 0 )
      goto LABEL_12;
  }
LABEL_15:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
