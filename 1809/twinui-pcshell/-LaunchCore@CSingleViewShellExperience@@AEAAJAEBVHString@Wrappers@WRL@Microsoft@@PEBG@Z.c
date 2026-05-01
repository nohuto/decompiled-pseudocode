/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18007CB70
 * Callers:
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::operator() @ 0x18007CA70 (_lambda_2998a484fcd7d742033ed970065ccf76_--operator().c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v3; // edi
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int v7; // esi
  __int64 v8; // r9
  int v9; // eax

  v3 = *((_DWORD *)this + 33);
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v7 = 0;
  v9 = ActivateApplicationForExperienceWithPropertySet(
         StringRawBuffer,
         a3,
         (unsigned __int64)L"ShellExperience" & -(__int64)((v3 & 2) != 0),
         v8,
         (v3 & 2) == 0,
         (__int64)this + 56);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v7;
}
