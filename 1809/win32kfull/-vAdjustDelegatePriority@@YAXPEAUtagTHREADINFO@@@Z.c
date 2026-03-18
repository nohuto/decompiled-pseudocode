/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00D4E68
 * Callers:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  HANDLE ThreadId; // rax
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  v4 = *((_DWORD *)a1 + 302);
  if ( (v4 & 0x2000) != 0
    && (v4 & 0x4000) == 0
    && (PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
  {
    *(_QWORD *)&v7 = PsGetThreadProcessId(*(PETHREAD *)a1);
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    v9 = 13;
    *((_QWORD *)&v7 + 1) = ThreadId;
    SystemInformation = v7;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 302) |= 0x4000u;
  }
}
