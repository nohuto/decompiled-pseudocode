/*
 * XREFs of sub_180112140 @ 0x180112140
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_180112140(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 0x40 )
    return 3221225507LL;
  *a2 = 64LL;
  return ZwQueryInformationProcess();
}
