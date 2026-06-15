/*
 * XREFs of ?ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z @ 0x14002BB5C
 * Callers:
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x14002ACE4 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 * Callees:
 *     WPP_SF_qd @ 0x14002BF0C (WPP_SF_qd.c)
 */

bool __fastcall CAudioDGModule::ValidateInheritedHandle(CAudioDGModule *this, void *a2)
{
  DWORD LastError; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  CAudioDGModule *dwFlags; // [rsp+40h] [rbp+8h] BYREF

  dwFlags = this;
  if ( GetHandleInformation(a2, (LPDWORD)&dwFlags) )
    return (unsigned __int8)dwFlags & 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, a2, LastError);
  }
  return 0;
}
