/*
 * XREFs of ?GetOutputDataPointer@CApoEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14001B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CApoEndpoint::GetOutputDataPointer(
        CApoEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 4);
  *(struct AE_CURRENT_POSITION *)((char *)this + 64) = *a3;
  return result;
}
