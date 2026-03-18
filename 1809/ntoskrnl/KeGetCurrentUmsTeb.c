/*
 * XREFs of KeGetCurrentUmsTeb @ 0x14029F8E8
 * Callers:
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDF0 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeGetCurrentUmsTeb(struct _KTHREAD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 result; // rax

  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) == 0 )
    return (unsigned __int64)a1->Teb;
  result = __readmsr(0xC0000102);
  if ( result > 0x7FFFFFFF0000LL )
    return 0LL;
  return result;
}
