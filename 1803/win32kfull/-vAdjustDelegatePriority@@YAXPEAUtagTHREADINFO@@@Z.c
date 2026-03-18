/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C001C604
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(PETHREAD *a1, __int64 a2)
{
  HANDLE ThreadId; // rax
  __int128 v4; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  if ( ((_DWORD)a1[150] & 0x6000) == 0x2000
    && (PsGetCurrentProcess(a1, a2) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
  {
    *(_QWORD *)&v4 = PsGetThreadProcessId(*a1);
    ThreadId = PsGetThreadId(*a1);
    v6 = 13;
    *((_QWORD *)&v4 + 1) = ThreadId;
    SystemInformation = v4;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 300) |= 0x4000u;
  }
}
