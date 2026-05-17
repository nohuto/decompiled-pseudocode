/*
 * XREFs of RtlGetLengthWithoutTrailingPathSeperators @ 0x18008B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLengthWithoutTrailingPathSeperators(int a1, unsigned __int16 *a2, int *a3)
{
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rdx

  v3 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a3 && !a1 )
  {
    v4 = *a2 >> 1;
    if ( v4 )
    {
      v5 = *((_QWORD *)a2 + 1);
      do
      {
        v6 = (unsigned int)(v4 - 1);
        if ( *(_WORD *)(v5 + 2 * v6) != 92 && *(_WORD *)(v5 + 2 * v6) != 47 )
          break;
        --v4;
      }
      while ( (_DWORD)v6 );
    }
    *a3 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
