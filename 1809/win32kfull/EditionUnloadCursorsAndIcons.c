/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1C012BF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUnloadCursorsAndIcons(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbp

  v1 = (__int64 *)&unk_1C030D5B8;
  v2 = 7LL;
  v3 = (char *)&unk_1C030D5B8;
  do
  {
    if ( *v1 )
    {
      v4 = *v1;
      *(_QWORD *)(v4 + 24) = PsGetCurrentProcessWin32Process(a1);
      HMAssignmentUnlock(v3);
    }
    v3 += 552;
    v1 += 69;
    --v2;
  }
  while ( v2 );
  v5 = 0LL;
  v6 = 0LL;
  v7 = 19LL;
  do
  {
    result = *(_QWORD *)gasyscur;
    v9 = *(_QWORD *)(v5 + *(_QWORD *)gasyscur + 8);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 24) = PsGetCurrentProcessWin32Process(a1);
      result = HMAssignmentUnlock(&gasyscur[v6 + 4]);
    }
    v6 += 276LL;
    v5 += 552LL;
    --v7;
  }
  while ( v7 );
  if ( gpCursorSizes )
    result = Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
  return result;
}
