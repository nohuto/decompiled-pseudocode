/*
 * XREFs of Endpoint_SetType @ 0x1C0065460
 * Callers:
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_SetType(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = 3;
  switch ( *(_BYTE *)(a1 + 99) & 3 )
  {
    case 1:
      v1 = 1;
      goto LABEL_7;
    case 2:
      v1 = 2;
      goto LABEL_7;
    case 3:
LABEL_7:
      *(_DWORD *)(a1 + 120) = v1;
      goto LABEL_8;
  }
  *(_DWORD *)(a1 + 120) = 0;
  v1 = 0;
LABEL_8:
  if ( *(char *)(a1 + 98) < 0 || !v1 )
  {
    result = (unsigned int)(v1 + 4);
    *(_DWORD *)(a1 + 120) = result;
  }
  return result;
}
