/*
 * XREFs of ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003EEC0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180009F60 (CemRcObjectCleanup.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 14);
  if ( v2 )
  {
    if ( *((_QWORD *)a1 + 15) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, *((unsigned int *)a1 + 32));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 15) + 16LL))(*((_QWORD *)a1 + 15));
      *((_QWORD *)a1 + 15) = 0LL;
      v2 = *((_QWORD *)a1 + 14);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 14) = 0LL;
  }
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
