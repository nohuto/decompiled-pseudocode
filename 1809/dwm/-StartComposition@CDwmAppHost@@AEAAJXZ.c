/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B00 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001D10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0 @ 0x1400050C0 (McTemplateU0.c)
 *     McTemplateU0q @ 0x140005108 (McTemplateU0q.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  __int64 v1; // rcx
  int v2; // ebx
  HANDLE CurrentProcess; // rax
  CDwmAppHost *v4; // rcx
  __int64 result; // rax
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = qword_14000B858;
  v2 = DwmInitializeEngine(&v6, &qword_14000B848);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xF6u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q();
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(v1, &UdwmEstablishTransport_Start);
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v2 = DwmClientStartup(&v6, &qword_14000B848);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x100u);
    }
    else
    {
      result = CDwmAppHost::StartKernelRedirection(v4);
      v2 = result;
      if ( (int)result >= 0 )
      {
        LOBYTE(word_14000B8A0) = 1;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x102u);
    }
  }
  return (unsigned int)v2;
}
