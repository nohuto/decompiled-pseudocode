/*
 * XREFs of ndisOidPreWakeUpPatternList @ 0x1C0074E10
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueryWakeUpPatternList @ 0x1C0075F08 (ndisQueryWakeUpPatternList.c)
 *     ndisQueryWolPatternList @ 0x1C00760E4 (ndisQueryWolPatternList.c)
 */

char __fastcall ndisOidPreWakeUpPatternList(__int64 *a1)
{
  char v2; // dl
  __int64 v3; // rcx
  __int64 v4; // r9
  _DWORD *v5; // r8
  __int64 v6; // r10
  unsigned __int8 v7; // al
  int v8; // eax
  unsigned __int8 v9; // al
  int WolPatternList; // eax

  v2 = 0;
  v3 = *a1;
  v4 = a1[3];
  v5 = (_DWORD *)a1[4];
  if ( v4 && ((v6 = *(_QWORD *)(v4 + 24), v7 = *(_BYTE *)(v6 + 56), v7 > 6u) || v7 == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    || a1[1] && (v5[22] & 0x4000) == 0
    || (v8 = v5[1], (v8 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( v4 && !v8 )
    goto LABEL_16;
  if ( !a1[2] && v3 )
  {
    v9 = *(_BYTE *)(v3 + 32);
    if ( v9 > 6u || v9 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
    {
      v5[8] = -50265844;
      WolPatternList = ndisQueryWolPatternList(*(_QWORD *)(v3 + 968), v5, v5, v4);
      goto LABEL_18;
    }
LABEL_16:
    WolPatternList = ndisQueryWakeUpPatternList(a1[3], v3, (char)v5);
LABEL_18:
    *((_DWORD *)a1 + 10) = WolPatternList;
    return 1;
  }
  return v2;
}
