/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14000B380
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000A0E0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1400346DC (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140034734 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400347B4 (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this, unsigned int a2)
{
  bool v2; // zf
  unsigned int v3; // ebx

  v2 = (*((_DWORD *)this + 4))-- == 1;
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    CInPlaceBuffer::`scalar deleting destructor'(this, a2);
  return v3;
}
