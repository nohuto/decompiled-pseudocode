/*
 * XREFs of ?PanCloseProcess@@YAXQEAXPEAU_EPROCESS@@@Z @ 0x1C028F230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanCloseProcess(_QWORD *a1, struct _EPROCESS *a2)
{
  void (__fastcall *v2)(_QWORD, struct _EPROCESS *); // rax

  v2 = (void (__fastcall *)(_QWORD, struct _EPROCESS *))a1[203];
  if ( v2 )
    v2(a1[4], a2);
}
