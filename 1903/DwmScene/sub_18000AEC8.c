/*
 * XREFs of sub_18000AEC8 @ 0x18000AEC8
 * Callers:
 *     sub_18000C914 @ 0x18000C914 (sub_18000C914.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18000AEC8(__int64 a1, char a2)
{
  __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // rax
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  _WORD *v8; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v4 = v2 == 0;
  if ( !v2 )
  {
    v5 = 0LL;
    if ( !a2 )
    {
LABEL_7:
      v4 = v5 == 0;
      return !v4;
    }
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    *(_QWORD *)(a1 + 24) = v7;
    v4 = v7 == 0LL;
    if ( v7 )
    {
      *(_DWORD *)(a1 + 32) = 5;
      v8 = v7;
      do
      {
        *v8 = 80;
        v8 += 40;
      }
      while ( v8 != v7 + 200 );
      v5 = *(_QWORD *)(a1 + 24);
      goto LABEL_7;
    }
  }
  return !v4;
}
