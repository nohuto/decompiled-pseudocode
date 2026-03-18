/*
 * XREFs of ViThunkFindAPIContextByName @ 0x1409765C4
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x140960284 (ViThunkSnapSharedExportByName.c)
 * Callees:
 *     _stricmp @ 0x14019FB50 (_stricmp.c)
 */

void __fastcall ViThunkFindAPIContextByName(char *Str2, _QWORD *a2)
{
  _QWORD **v4; // rax
  _QWORD *v5; // rbx

  if ( Str2 && (v4 = (_QWORD **)VfDifAPIThunkContextHead) != 0LL )
  {
    *a2 = 0LL;
    v5 = *v4;
    if ( *v4 != v4 )
    {
      while ( stricmp((const char *)*(v5 - 1), Str2) )
      {
        v5 = (_QWORD *)*v5;
        if ( v5 == (_QWORD *)VfDifAPIThunkContextHead )
          return;
      }
      *a2 = v5 - 1;
    }
  }
  else
  {
    *a2 = 0LL;
  }
}
