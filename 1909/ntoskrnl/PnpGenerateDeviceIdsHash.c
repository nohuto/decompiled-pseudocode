/*
 * XREFs of PnpGenerateDeviceIdsHash @ 0x14071BD08
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlHashUnicodeString @ 0x140666720 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PnpGenerateDeviceIdsHash(__int64 a1, __int64 a2, _DWORD *a3)
{
  const WCHAR **v4; // rdi
  NTSTATUS result; // eax
  int v6; // ebp
  unsigned int i; // esi
  const WCHAR *v8; // rbx
  __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG HashValue; // [rsp+60h] [rbp+8h] BYREF

  v11[0] = a1;
  v11[1] = a2;
  v4 = (const WCHAR **)v11;
  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = 0;
  *a3 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v8 = *v4;
    if ( *v4 )
    {
      while ( *v8 )
      {
        result = RtlInitUnicodeStringEx(&DestinationString, v8);
        if ( result < 0 )
          return result;
        result = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( result < 0 )
          return result;
        v6 += HashValue;
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v8 += v9 + 1;
        if ( !v8 )
          break;
      }
    }
    ++v4;
  }
  *a3 = v6;
  return result;
}
