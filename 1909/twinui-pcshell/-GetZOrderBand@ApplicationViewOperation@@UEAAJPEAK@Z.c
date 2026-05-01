/*
 * XREFs of ?GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z @ 0x1800811D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetZOrderBand(ApplicationViewOperation *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 45);
  return *((_DWORD *)this + 45) == 0 ? 0x80070490 : 0;
}
