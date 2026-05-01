/*
 * XREFs of ?GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z @ 0x18007B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetZOrderBand(ApplicationViewOperation *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 44);
  return *((_DWORD *)this + 44) == 0 ? 0x80070490 : 0;
}
