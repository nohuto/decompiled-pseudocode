/*
 * XREFs of ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180416ED0
 * Callers:
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180416CF0 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(HDC *this)
{
  return DeleteDC(this[1]);
}
