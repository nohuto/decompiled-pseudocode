/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001D70
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001E20 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0 @ 0x140005A88 (McTemplateU0.c)
 *     McTemplateU0q @ 0x140005AD0 (McTemplateU0q.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  __int64 v1; // rcx
  int v2; // ebx
  HANDLE CurrentProcess; // rax
  CDwmAppHost *v4; // rcx
  __int64 result; // rax
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = qword_1400109D8;
  v2 = DwmInitializeEngine(&v6, &qword_1400109C8);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x107u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q();
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(v1, &UdwmEstablishTransport_Start);
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v2 = DwmClientStartup(&v6, &qword_1400109C8);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x111u);
    }
    else
    {
      result = CDwmAppHost::StartKernelRedirection(v4);
      v2 = result;
      if ( (int)result >= 0 )
      {
        LOBYTE(word_140010A40) = 1;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x113u);
    }
  }
  return (unsigned int)v2;
}
