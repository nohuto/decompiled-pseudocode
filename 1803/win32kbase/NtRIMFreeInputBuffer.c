/*
 * XREFs of NtRIMFreeInputBuffer @ 0x1C00DF540
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeInputBuffer @ 0x1C00E1D00 (RIMFreeInputBuffer.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMFreeInputBuffer(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    RIMFreeInputBuffer(a1, a2);
  return 0LL;
}
