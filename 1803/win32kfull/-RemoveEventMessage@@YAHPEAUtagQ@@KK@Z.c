/*
 * XREFs of ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C005AC88
 * Callers:
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 */

__int64 __fastcall RemoveEventMessage(struct tagQ *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v8; // r9d
  __int64 v9; // rdi

  result = 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( v5 )
  {
    do
    {
      v8 = *(_DWORD *)(v5 + 96);
      if ( v8 == a3 )
        break;
      v9 = *(_QWORD *)(v5 + 8);
      if ( v8 == a2 && v5 != *((_QWORD *)a1 + 10) )
      {
        DelQEntry((_QWORD *)a1 + 3, (_QWORD *)v5);
        result = 1LL;
      }
      v5 = v9;
    }
    while ( v9 );
  }
  return result;
}
