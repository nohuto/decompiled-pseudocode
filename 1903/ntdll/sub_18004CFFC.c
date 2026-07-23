/*
 * XREFs of sub_18004CFFC @ 0x18004CFFC
 * Callers:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_18004CFFC(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Ptr )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, (PRTL_RUN_ONCE_INIT_FN)sub_18004EF60, a2, 0LL);
}
