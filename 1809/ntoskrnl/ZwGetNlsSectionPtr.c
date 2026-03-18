/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1401B9FD0
 * Callers:
 *     RtlpGetNormalization @ 0x14089A524 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
