/*
 * XREFs of FastWindowFromDC @ 0x1C0069740
 * Callers:
 *     _ScrollDC @ 0x1C0069628 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v7; // eax

  v2 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v3 = (_QWORD *)(gpDispInfo + 24LL);
  v4 = *(__int64 **)(gpDispInfo + 24LL);
  if ( !v4 )
  {
LABEL_5:
    v5 = *(_QWORD *)(gpDispInfo + 40LL);
    goto LABEL_6;
  }
  if ( v4[1] != a1 )
  {
    while ( v4[1] != a1 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
      if ( !v4 )
        goto LABEL_5;
    }
    if ( (v4[8] & 0x401000) == 0x1000 )
    {
      *v3 = *v4;
      *v4 = *(_QWORD *)(gpDispInfo + 24LL);
      *(_QWORD *)(gpDispInfo + 24LL) = v4;
      v2 = v4[2];
    }
    goto LABEL_5;
  }
  v7 = *((_DWORD *)v4 + 16);
  if ( (v7 & 0x1000) != 0 && (v7 & 0x400000) == 0 )
    v2 = v4[2];
  v5 = *(_QWORD *)(gpDispInfo + 40LL);
LABEL_6:
  GreUnlockVisRgn(v5);
  return v2;
}
