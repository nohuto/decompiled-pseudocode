/*
 * XREFs of CmpDelayedDerefKeys @ 0x1405DD0C4
 * Callers:
 *     CmpReportNotifyHelper @ 0x1405DCEE0 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( *((void ***)v2 + 1) != a1 || (v3 = *(void ***)v2, *(void **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
