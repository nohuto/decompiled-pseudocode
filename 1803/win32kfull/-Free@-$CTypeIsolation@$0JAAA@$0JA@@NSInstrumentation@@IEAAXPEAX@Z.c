/*
 * XREFs of ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00DF54C
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00F111C (--$FreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00DF8A4 (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C00DF968 (-ContainsAllocation@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 v6; // r14

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    {
      v6 = i[4];
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<36864,144>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
