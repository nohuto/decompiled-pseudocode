/*
 * XREFs of PopWakeSourceIsParent @ 0x1408A7634
 * Callers:
 *     PopProcessWakeSourceWork @ 0x1408A73A4 (PopProcessWakeSourceWork.c)
 * Callees:
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 */

char __fastcall PopWakeSourceIsParent(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // bl
  _QWORD *v6; // rdi
  unsigned __int16 v7; // ax
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v2 = (_QWORD *)a1[1];
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v6 = v2;
      v2 = (_QWORD *)v2[1];
    }
    while ( v2 );
    while ( 1 )
    {
      v7 = *((_WORD *)v6 + 20);
      if ( v7 == *(_WORD *)a2
        && !wcsncmp((const wchar_t *)v6[6], *(const wchar_t **)(a2 + 8), (unsigned __int64)v7 >> 1) )
      {
        break;
      }
      v8 = (_QWORD *)*v6;
      if ( *v6 )
      {
        do
        {
          v6 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( v8 );
      }
      else
      {
        v9 = (_QWORD *)v6[2];
        v6 = 0LL;
        if ( v9 != IopRootDeviceNode )
          v6 = v9;
        if ( v6 == a1 )
          v6 = 0LL;
      }
      if ( !v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
