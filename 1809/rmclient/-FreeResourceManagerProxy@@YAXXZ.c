/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x180006C30
 * Callers:
 *     DllMain @ 0x180009A48 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_1800226A8 )
    (**(void (__fastcall ***)(__int64, __int64))qword_1800226A8)(qword_1800226A8, 1LL);
  qword_1800226A8 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
