/*
 * XREFs of ?GetStreamPriority@CAudioStream@@UEAAKXZ @ 0x180043370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetStreamPriority(CAudioStream *this)
{
  return *((unsigned int *)this + 53);
}
