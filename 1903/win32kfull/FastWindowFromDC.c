/*
 * XREFs of FastWindowFromDC @ 0x1C00C8070
 * Callers:
 *     _ScrollDC @ 0x1C00C7F58 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // rcx
  int v10; // eax

  v5 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  v6 = (_QWORD *)(gpDispInfo + 24LL);
  v7 = *(__int64 **)(gpDispInfo + 24LL);
  if ( !v7 )
  {
LABEL_5:
    v8 = *(_QWORD *)(gpDispInfo + 40LL);
    goto LABEL_6;
  }
  if ( v7[1] != a1 )
  {
    while ( v7[1] != a1 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_5;
    }
    if ( (v7[8] & 0x401000) == 0x1000 )
    {
      *v6 = *v7;
      *v7 = *(_QWORD *)(gpDispInfo + 24LL);
      *(_QWORD *)(gpDispInfo + 24LL) = v7;
      v5 = v7[2];
    }
    goto LABEL_5;
  }
  v10 = *((_DWORD *)v7 + 16);
  if ( (v10 & 0x1000) != 0 && (v10 & 0x400000) == 0 )
    v5 = v7[2];
  v8 = *(_QWORD *)(gpDispInfo + 40LL);
LABEL_6:
  GreUnlockVisRgn(v8);
  return v5;
}
