/*
 * XREFs of sub_140587B80 @ 0x140587B80
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x140587410 (ExpHwidAuthenticateHardwareId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall sub_140587B80(_DWORD *a1, __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned int v5; // edx
  const WCHAR *v6; // rbx
  int v7; // edi
  NTSTATUS result; // eax
  __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 0;
  v5 = v2 >> 1;
  if ( (v2 & 1) != 0 )
    return -1073741762;
  if ( v5 < 2 )
    return -1073741762;
  v6 = (const WCHAR *)*((_QWORD *)a2 + 1);
  if ( v6[v5 - 2] || v6[v5 - 1] )
    return -1073741762;
  v7 = 0;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, v6);
    result = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
    if ( result < 0 )
      break;
    v7 += HashValue;
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    v6 += v9 + 1;
    if ( !*v6 )
    {
      *a1 += v7;
      return result;
    }
  }
  return result;
}
