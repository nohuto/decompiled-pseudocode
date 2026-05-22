/*
 * XREFs of ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x1800213D8
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021264 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCPerfCounter::Initialize(MPCPerfCounter *this, int a2, int a3)
{
  float v3; // xmm1_4
  double v4; // xmm0_8
  int v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(float *)this;
  v4 = (double)(int)qword_1801E0C48;
  v6 = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  v7 = 4;
  *((_QWORD *)this + 3) = (unsigned int)(int)(v3 * v4);
  RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", L"EnableMPCPerfCounter", 0x10u, 0LL, &v6, &v7);
  *((_BYTE *)this + 4) = v6 == 1;
}
