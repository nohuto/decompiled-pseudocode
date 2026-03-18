/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0064DA8
 * Callers:
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 *v7; // rbx
  _QWORD *v8; // r15
  __int64 *v9; // r14
  __int64 *v10; // rcx
  __int64 *v11; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v6 = (_QWORD *)(gpDispInfo + 24);
  v7 = *(__int64 **)(gpDispInfo + 24);
  if ( v7 )
  {
    do
    {
      v8 = v6;
      v9 = v7;
      v10 = v7;
      if ( a1 == v7[9] && (v7[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v6, v7[1]);
        v10 = (__int64 *)*v6;
      }
      v11 = v10;
      if ( v7 == v10 )
        v11 = (__int64 *)*v7;
      v6 = v7;
      v7 = v11;
      if ( v9 != v10 )
        v6 = v8;
    }
    while ( v11 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v4, v5);
}
