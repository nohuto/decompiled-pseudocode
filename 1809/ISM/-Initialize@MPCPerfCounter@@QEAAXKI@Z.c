/*
 * XREFs of ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x1801035FC
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18010054C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCPerfCounter::Initialize(MPCPerfCounter *this, int a2, int a3)
{
  unsigned __int64 v4; // rdx
  float v5; // xmm0_4
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  QueryPerformanceFrequency(&Frequency);
  v4 = 0LL;
  v5 = (float)(int)Frequency.LowPart * *(float *)this;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  pvData = 0;
  pcbData = 4;
  *((_QWORD *)this + 3) = v4 + (unsigned int)(int)v5;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"EnableMPCPerfCounter",
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  *((_BYTE *)this + 4) = pvData == 1;
}
