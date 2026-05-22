/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801081C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  *((_QWORD *)this + 6) = (unsigned int)++dword_180193BB8;
  return 0LL;
}
