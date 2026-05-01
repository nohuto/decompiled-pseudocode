/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIAppMemoryReport@23@@Z @ 0x100083E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *ecx0,
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a3)
{
  int AppMemoryInformation; // esi
  __int64 v5; // [esp+10h] [ebp-40h] BYREF
  unsigned __int64 v6; // [esp+18h] [ebp-38h] BYREF
  unsigned __int64 v7; // [esp+20h] [ebp-30h] BYREF
  _QWORD v8[2]; // [esp+28h] [ebp-28h] BYREF
  _BYTE v9[24]; // [esp+38h] [ebp-18h] BYREF

  AppMemoryInformation = Windows::System::CMemoryManager::GetAppMemoryInformation(
                           ecx0,
                           &v7,
                           &v6,
                           (struct _PROCESS_JOB_MEMORY_INFO *)v8);
  if ( AppMemoryInformation >= 0 )
  {
    v5 = v8[1] + v8[0];
    AppMemoryInformation = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CAppMemoryReport,Windows::System::IAppMemoryReport,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
                             v9,
                             &v5,
                             &v7,
                             &v6);
    if ( AppMemoryInformation >= 0 )
      *a3 = 0;
  }
  return AppMemoryInformation;
}
