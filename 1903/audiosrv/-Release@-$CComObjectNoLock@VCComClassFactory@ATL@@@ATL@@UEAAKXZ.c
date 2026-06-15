/*
 * XREFs of ?Release@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x18011C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18011BA7C (--_G-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectNoLock<ATL::CComClassFactory>::Release(__int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 8));
  if ( !v1 && a1 )
    ATL::CComObjectNoLock<ATL::CComClassFactory>::`scalar deleting destructor'((_DWORD *)a1);
  return v1;
}
