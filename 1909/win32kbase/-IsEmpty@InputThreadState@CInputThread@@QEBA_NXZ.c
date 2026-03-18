/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0093A08
 * Callers:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0093720 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0093834 (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00938E4 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C0093980 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
