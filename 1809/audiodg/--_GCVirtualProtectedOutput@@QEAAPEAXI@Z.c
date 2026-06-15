/*
 * XREFs of ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14003B8B4
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003BA20 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14003BEA0 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::`scalar deleting destructor'(
        CVirtualProtectedOutput *this)
{
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  operator delete(this);
  return this;
}
