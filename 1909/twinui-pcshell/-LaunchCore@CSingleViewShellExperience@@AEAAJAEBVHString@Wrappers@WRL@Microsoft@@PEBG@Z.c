/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180081C68
 * Callers:
 *     _lambda_57aa3e92036d8099e639386d4804eb50_::operator() @ 0x180081B80 (_lambda_57aa3e92036d8099e639386d4804eb50_--operator().c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006B4E0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v3; // edi
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int v7; // esi
  int v8; // eax

  v3 = *((_DWORD *)this + 33);
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v7 = 0;
  v8 = ActivateApplicationForExperienceWithPropertySet(
         StringRawBuffer,
         a3,
         (unsigned __int64)L"ShellExperience" & -(__int64)((v3 & 2) != 0),
         0LL,
         (v3 & 2) == 0,
         (__int64)this + 56);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v7;
}
