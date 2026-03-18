/*
 * XREFs of ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01D4BE4
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01D45B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C01D4978 (-ContainsAllocation@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01D4B24 (-Free@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Free(_QWORD *a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 *v6; // r14

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    {
      v6 = (__int64 *)i[4];
      if ( NSInstrumentation::CSectionBitmapAllocator<24576,96>::ContainsAllocation(v6, (unsigned __int64)a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<24576,96>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
