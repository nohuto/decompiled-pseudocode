/*
 * XREFs of ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002E1AC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400042E0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140018020 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(_DWORD *Block)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  Block[2] = -1073741823;
  *(_QWORD *)Block = &ATL::CComClassFactory::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)(Block + 4);
  if ( LOBYTE(v2[1].DebugInfo) )
  {
    LOBYTE(v2[1].DebugInfo) = 0;
    DeleteCriticalSection(v2);
  }
  operator delete(Block);
  return Block;
}
