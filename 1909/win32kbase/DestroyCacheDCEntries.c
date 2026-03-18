/*
 * XREFs of DestroyCacheDCEntries @ 0x1C007E6B4
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0028B40 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v6 = (__int64 *)(gpDispInfo + 24);
  v7 = *(_QWORD *)(gpDispInfo + 24);
  if ( v7 )
  {
    do
    {
      v8 = v6;
      v9 = v7;
      v10 = v7;
      if ( a1 == *(_QWORD *)(v7 + 72) && (*(_DWORD *)(v7 + 64) & 0x80000002) == 2 )
      {
        DestroyCacheDC(v6, *(_QWORD *)(v7 + 8));
        v10 = *v6;
      }
      v11 = v10;
      if ( v7 == v10 )
        v11 = *(_QWORD *)v7;
      v6 = (__int64 *)v7;
      v7 = v11;
      if ( v9 != v10 )
        v6 = v8;
    }
    while ( v11 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v4, v5);
}
