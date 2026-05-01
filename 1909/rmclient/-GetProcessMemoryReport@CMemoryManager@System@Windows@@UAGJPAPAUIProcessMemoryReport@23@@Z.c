/*
 * XREFs of ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z @ 0x100108C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AAKAAK@Details@WRL@Microsoft@@YGJPAPAUIProcessMemoryReport@System@Windows@@AAK1@Z @ 0x10010277 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AAKAAK@Detai.c)
 */

int __stdcall Windows::System::CMemoryManager::GetProcessMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IProcessMemoryReport **a2)
{
  int v2; // eax
  signed int v3; // eax
  int v4; // esi
  struct Windows::System::IProcessMemoryReport *v5; // ecx
  struct Windows::System::IProcessMemoryReport *v7; // [esp+8h] [ebp-50h] BYREF
  ULONG ReturnLength; // [esp+Ch] [ebp-4Ch] BYREF
  _BYTE ProcessInformation[16]; // [esp+10h] [ebp-48h] BYREF
  _DWORD v10[8]; // [esp+20h] [ebp-38h] BYREF
  _DWORD v11[5]; // [esp+40h] [ebp-18h] BYREF

  v7 = 0;
  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessVmCounters, ProcessInformation, 0x40u, &ReturnLength);
  if ( v2 >= 0 )
  {
    Microsoft::WRL::ComPtr<IMarshal>::InternalRelease((int *)&v7);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned long &,unsigned long &>(
           v11,
           &v7,
           (int)a2,
           v10);
    if ( v4 >= 0 )
    {
      v5 = v7;
      v7 = 0;
      *a2 = v5;
    }
  }
  else
  {
    v3 = RtlNtStatusToDosError(v2);
    v4 = v3;
    if ( v3 > 0 )
      v4 = (unsigned __int16)v3 | 0x80070000;
  }
  Microsoft::WRL::ComPtr<IMarshal>::InternalRelease((int *)&v7);
  return v4;
}
