/*
 * XREFs of ExpVerifyFilePath @ 0x1408D4640
 * Callers:
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1408D479C (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x1408D7120 (NtTranslateFilePath.c)
 * Callees:
 *     ExpSafeWcslen @ 0x1408D299C (ExpSafeWcslen.c)
 */

__int64 __fastcall ExpVerifyFilePath(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned int v5; // r9d
  _WORD *i; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  char v9; // al
  _WORD *v10; // rax
  __int64 v11; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  int v17; // r9d

  if ( a1 > a2 )
    return 3221225485LL;
  v2 = a1 + 12;
  if ( a1 + 12 > a2 )
    return 3221225485LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 < 0xC )
    return 3221225485LL;
  v4 = a1 + v3;
  if ( a1 + v3 < a1 )
    return 3221225485LL;
  if ( v4 > a2 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 - 1 > 4 )
    return 3221225485LL;
  if ( v4 < a2 )
    a2 = a1 + v3;
  if ( !v5 )
    return 3221225485LL;
  if ( v5 <= 2 )
  {
    v16 = ExpSafeWcslen((_WORD *)(a1 + 12), a2);
    v17 = -1;
  }
  else
  {
    if ( v5 != 3 )
    {
      if ( v5 == 4 )
      {
        for ( i = (_WORD *)(a1 + 16); v2 + 4 <= a2; i = (_WORD *)(v2 + 4) )
        {
          v7 = *(unsigned __int16 *)(v2 + 2);
          if ( (unsigned int)v7 < 4 )
            break;
          v8 = v7 + v2;
          if ( v7 + v2 > a2 )
            break;
          v9 = *(_BYTE *)v2 & 0x7F;
          if ( v9 == 127 )
            return 0LL;
          if ( v9 == 4 && *(_BYTE *)(v2 + 1) == 4 )
          {
            v10 = i;
            if ( (unsigned __int64)i >= v8 )
              goto LABEL_25;
            do
            {
              if ( !*v10 )
                break;
              ++v10;
            }
            while ( (unsigned __int64)v10 < v8 );
            if ( (unsigned __int64)v10 >= v8 )
LABEL_25:
              LODWORD(v11) = -1;
            else
              v11 = v10 - i;
            if ( (_DWORD)v11 == -1 )
              break;
          }
          v2 += (*(unsigned __int8 *)(v2 + 3) << 8) | (unsigned __int64)*(unsigned __int8 *)(v2 + 2);
        }
      }
      return 3221225485LL;
    }
    v13 = ExpSafeWcslen((_WORD *)(a1 + 12), a2);
    if ( v13 == -1 )
      return 3221225485LL;
    v16 = ExpSafeWcslen((_WORD *)(v15 + 2 * (v13 + 1LL)), v14);
  }
  if ( v16 == v17 )
    return 3221225485LL;
  return 0LL;
}
