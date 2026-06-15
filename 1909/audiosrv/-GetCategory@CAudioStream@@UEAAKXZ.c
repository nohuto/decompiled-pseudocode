/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x180049BB0
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x18006CC30 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 80);
}
