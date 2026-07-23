/*
 * XREFs of EtwpGetTraceGuidList @ 0x1408F2D08
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x140665CEC (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, GUID *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 *v6; // rdx
  __int64 i; // rbp
  signed __int64 v9; // rcx
  signed __int64 *NextGuidEntry; // rax
  GUID **v11; // rcx
  __int64 v12; // rdx

  v3 = 0;
  v4 = *a3 >> 4;
  v6 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v6, 0);
    if ( !NextGuidEntry )
      break;
    v9 = NextGuidEntry[5] - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( !v9 )
      v9 = NextGuidEntry[6] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( v9 )
    {
      if ( ++v3 <= v4 )
        *a2++ = *(GUID *)(NextGuidEntry + 5);
    }
    v6 = NextGuidEntry;
  }
  v11 = &EtwpUmglProviders;
  v12 = 10LL;
  do
  {
    if ( ++v3 <= v4 )
      *a2++ = **v11;
    v11 += 2;
    --v12;
  }
  while ( v12 );
  *a3 = 16 * v3;
  return v4 < v3 ? 0xC0000023 : 0;
}
