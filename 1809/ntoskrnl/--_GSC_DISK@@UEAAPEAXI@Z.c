/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1403299A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1401685A0 (--1SC_DISK@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C28A0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *this, char a2)
{
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(this);
  return this;
}
