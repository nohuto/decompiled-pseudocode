/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14017668C
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
 *     DownLevelGetParentLanguageName @ 0x140321E80 (DownLevelGetParentLanguageName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( (v4 & 0x80000000) != 0 )
  {
    if ( !a2 )
      return v4;
LABEL_16:
    *(_WORD *)a1 = 0;
    return v4;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    v4 = -2147024809;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v5 = a4 - a2;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + a2) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --a2;
    }
    while ( a2 );
  }
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v8 = (unsigned __int16 *)a1;
  v4 = a2 == 0 ? 0x8007007A : 0;
  *v8 = 0;
  return v4;
}
