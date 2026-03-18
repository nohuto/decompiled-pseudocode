/*
 * XREFs of InitCreateSystemThreadsMsg @ 0x1C00A65C0
 * Callers:
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C0104B80 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 * Callees:
 *     CSTPush @ 0x1C00A6620 (CSTPush.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall InitCreateSystemThreadsMsg(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( !(unsigned int)CSTPush(a2, a3) )
    return 0LL;
  memset(a1, 0, 0x1B0uLL);
  result = 1LL;
  *a1 = 28311944;
  a1[12] = 197636;
  return result;
}
