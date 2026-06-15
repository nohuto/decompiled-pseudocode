/*
 * XREFs of ??_GCCPAudioHistoryControl@@UEAAPEAXI@Z @ 0x140053EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCPAudioHistoryControl *__fastcall CCPAudioHistoryControl::`scalar deleting destructor'(
        CCPAudioHistoryControl *this,
        char a2)
{
  *(_QWORD *)this = &CCPAudioHistoryControl::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
