/*
 * XREFs of ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x18004A818
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049940 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::Init(CImmersiveIconicBitmapRegistry *this)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v4; // rax
  int v5; // ecx
  void *v7; // [rsp+28h] [rbp-60h]
  _BYTE SystemInformation[8]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+3Ch] [rbp-4Ch]

  v2 = 0;
  v3 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3 | 0x10000000, 0x3Au, v7);
  }
  else
  {
    v4 = (unsigned int)(v10 * v9);
    if ( (unsigned int)v4 <= 0x40000000 )
      v5 = 8;
    else
      v5 = (12 * v4 - 0x300000000LL) / 0xC0000000uLL + 8;
    *((_DWORD *)this + 2) = v5;
  }
  return v2;
}
