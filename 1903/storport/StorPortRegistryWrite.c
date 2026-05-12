/*
 * XREFs of StorPortRegistryWrite @ 0x1C003B930
 * Callers:
 *     <none>
 * Callees:
 *     PortBuildRegKeyName @ 0x1C001C478 (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x1C001C5BC (StorpPortRegistryValidate.c)
 *     PortMiniportRegistryWrite @ 0x1C0050EEC (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(__int64 a1, const char *a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  bool v7; // bl
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  int v13; // edx
  __int64 v14; // r11
  unsigned int v15; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  v7 = 0;
  Destination.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( KeGetCurrentIrql() )
    return 0;
  v10 = *(_QWORD *)(a1 - 16);
  v11 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
  v12 = (_DWORD *)(*(_QWORD *)v10 + 2088LL);
  if ( !StorpPortRegistryValidate((__int64)v12, a5, &a6) )
    return 0;
  v15 = a6;
  v12[13] = v13 - v12[8];
  v12[11] = v15;
  if ( PortBuildRegKeyName((PCUNICODE_STRING)(v11 + 40), &Destination, *(_DWORD *)(v14 + 56), a3) >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v7 = (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryWrite)(
                  &Destination,
                  &UnicodeString,
                  a4,
                  v12) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v7;
}
