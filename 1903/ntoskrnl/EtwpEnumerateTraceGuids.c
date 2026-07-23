/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x1406F53B8
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x140665CEC (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 *v8; // rdx
  signed __int64 *NextGuidEntry; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  GUID **v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8
  int v16; // eax

  v4 = 0;
  v6 = a1;
  v7 = *a3 / 0x24u;
  v8 = 0LL;
  while ( 1 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v8, 0);
    if ( !NextGuidEntry )
      break;
    if ( ++v4 <= v7 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(NextGuidEntry + 5);
      *(_DWORD *)(a2 + 28) = *((_DWORD *)NextGuidEntry + 20);
      *(_DWORD *)(a2 + 20) = *((unsigned __int16 *)NextGuidEntry + 44);
      *(_DWORD *)(a2 + 24) = *((unsigned __int8 *)NextGuidEntry + 90);
      *(_BYTE *)(a2 + 32) = *((_BYTE *)NextGuidEntry + 91) & 1;
      a2 += 36LL;
    }
    v8 = NextGuidEntry;
    a1 = v6;
  }
  if ( v6 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1104LL) + 550LL;
  v11 = a2 + 28;
  v12 = &EtwpUmglProviders;
  v13 = 10LL;
  do
  {
    v14 = *((unsigned __int8 *)v12 + 8);
    if ( *(_BYTE *)(v10 + 2 * v14) )
    {
      if ( ++v4 <= v7 )
      {
        *(GUID *)(v11 - 28) = **v12;
        *(_DWORD *)(v11 - 8) = *(unsigned __int8 *)(v10 + 2 * v14);
        v16 = *(unsigned __int8 *)(v10 + 2 * v14 + 1);
        *(_DWORD *)(v11 - 4) = 0;
        *(_DWORD *)v11 = v16;
        *(_BYTE *)(v11 + 4) = 1;
        v11 += 36LL;
      }
    }
    v12 += 2;
    --v13;
  }
  while ( v13 );
  *a3 = 36 * v4;
  return v7 < v4 ? 0xC0000023 : 0;
}
