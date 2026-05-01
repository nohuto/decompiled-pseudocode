/*
 * XREFs of __ValidateImageBase @ 0x1000CCB0
 * Callers:
 *     __IsNonwritableInCurrentImage @ 0x1000CBF0 (__IsNonwritableInCurrentImage.c)
 * Callees:
 *     <none>
 */

BOOL __cdecl _ValidateImageBase(int a1)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( *(_WORD *)a1 == 23117 )
  {
    v1 = a1 + *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 267 )
      return 1;
  }
  return result;
}
