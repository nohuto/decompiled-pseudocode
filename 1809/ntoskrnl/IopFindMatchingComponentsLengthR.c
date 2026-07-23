/*
 * XREFs of IopFindMatchingComponentsLengthR @ 0x14081E698
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406AD4B0 (IopSymlinkProcessReparse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindMatchingComponentsLengthR(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _WORD *v4; // r8
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  _WORD *v7; // r9
  _WORD *v8; // rax
  _WORD *v9; // rdx
  __int16 v10; // r10

  v2 = *((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = v3 + v2;
  v7 = (_WORD *)(v3 + v2);
  if ( v3 + v2 < v2 )
    return 0LL;
  v8 = (_WORD *)(v5 + *a2);
  do
  {
    v9 = v7;
    if ( (unsigned __int64)v8 < v5 )
      break;
    v10 = *v7;
    if ( *v7 != *v8 )
      break;
    --v7;
    --v8;
    if ( v10 != 92 )
      v9 = v4;
    v4 = v9;
  }
  while ( (unsigned __int64)v7 >= v2 );
  if ( v4 )
    return (unsigned __int16)((v6 - (__int64)v4) >> 1);
  else
    return 0LL;
}
