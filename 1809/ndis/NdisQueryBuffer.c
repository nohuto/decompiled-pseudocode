/*
 * XREFs of NdisQueryBuffer @ 0x1C005D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisQueryBuffer(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID v6; // rax
  __int64 result; // rax

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
      v6 = *(PVOID *)(a1 + 24);
    else
      v6 = MmMapLockedPages((PMDL)a1, 0);
    *a2 = v6;
  }
  result = *(unsigned int *)(a1 + 40);
  *a3 = result;
  return result;
}
