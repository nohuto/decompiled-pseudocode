/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0095038
 * Callers:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0094D50 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0094E64 (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0094F14 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C0094FB0 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::InputThreadState::IsEmpty(CInputThread::InputThreadState *this)
{
  __int64 v1; // r8
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 1);
  v3 = (v1 == 0) ^ (*((_QWORD *)this + 2) == 0LL) ^ (unsigned int)(*((_DWORD *)this + 6) == 0);
  if ( (_DWORD)v3 != (*(_DWORD *)this == 0) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, v1);
    v1 = *((_QWORD *)this + 1);
  }
  return v1 == 0;
}
