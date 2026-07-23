/*
 * XREFs of AlpcpExposeContextAttribute32 @ 0x1406AAFA4
 * Callers:
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpExposeContextAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 56) == a1 || *(_QWORD *)(a2 + 64) == a1 )
    v4 = *(_DWORD *)(a2 + 128);
  else
    v4 = *(_DWORD *)(a2 + 120);
  *a3 = v4;
  if ( *(_QWORD *)(a2 + 56) == a1 || *(_QWORD *)(a2 + 64) == a1 )
    v5 = *(_DWORD *)(a2 + 72);
  else
    v5 = *(_DWORD *)(a2 + 44);
  a3[2] = v5;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    result = *(unsigned int *)(a2 + 104);
  else
    result = *(unsigned int *)(a2 + 112);
  a3[1] = result;
  if ( *a3 )
    *a4 |= 0x20000000u;
  return result;
}
