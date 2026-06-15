/*
 * XREFs of ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x1400348B4
 * Callers:
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140034010 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400341F0 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140032D10 (-CreateNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CE.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140033010 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = -2LL;
  result = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
             a1,
             a2,
             (int *)&v7,
             (unsigned int *)&v10,
             v9);
  if ( !result )
  {
    result = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CreateNode(
               a1,
               a2,
               v7,
               v10);
    v10 = result;
  }
  *(_OWORD *)(result + 8) = *a3;
  return result;
}
