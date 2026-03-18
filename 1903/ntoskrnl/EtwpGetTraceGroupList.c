/*
 * XREFs of EtwpGetTraceGroupList @ 0x1408F2C80
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x140665CEC (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupList(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 *v6; // rdx
  __int64 i; // rbp
  signed __int64 *NextGuidEntry; // rax

  v3 = 0;
  v4 = *a3 >> 4;
  v6 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v6, 2);
    if ( !NextGuidEntry )
      break;
    if ( ++v3 <= v4 )
      *a2++ = *(_OWORD *)(NextGuidEntry + 5);
    v6 = NextGuidEntry;
  }
  *a3 = 16 * v3;
  return v4 < v3 ? 0xC0000023 : 0;
}
