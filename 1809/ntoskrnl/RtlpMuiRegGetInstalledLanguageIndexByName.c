/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x140908248
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140182840 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x14073FEB4 (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, _WORD *a2, char a3, _WORD *a4)
{
  char v4; // bl
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int16 v10; // r9
  __int16 v12; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(v12) = a3;
  v4 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &v12) < 0 )
    return 3221225524LL;
  v7 = 0;
  if ( !*(_WORD *)(v6 + 6) )
    return 3221225524LL;
  v8 = *(_QWORD *)(v6 + 16);
  do
  {
    v9 = 28LL * v7;
    if ( *(_WORD *)(v9 + v8 + 6) == v12 )
    {
      v10 = *(_WORD *)(v9 + v8);
      if ( (v10 & 0x1020) == 0x20 )
      {
        if ( a4 )
        {
          *a4 = v7;
          return 0LL;
        }
      }
      else if ( (v10 & 0x1000) != 0 )
      {
        v4 = 1;
      }
    }
    ++v7;
  }
  while ( v7 < *(unsigned __int16 *)(v6 + 6) );
  if ( v4 )
    return 3221225659LL;
  else
    return 3221225524LL;
}
