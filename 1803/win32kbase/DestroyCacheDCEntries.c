/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0034AD8
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v6 = (_QWORD *)(gpDispInfo + 24);
  v7 = *(_QWORD **)(gpDispInfo + 24);
  if ( v7 )
  {
    do
    {
      v8 = v7;
      if ( a1 == v7[9] && (v7[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v6, v7[1]);
        v8 = (_QWORD *)*v6;
      }
      v9 = v8;
      if ( v7 == v8 )
        v9 = (_QWORD *)*v7;
      else
        v7 = v6;
      v6 = v7;
      v7 = v9;
    }
    while ( v9 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v4, v5);
}
