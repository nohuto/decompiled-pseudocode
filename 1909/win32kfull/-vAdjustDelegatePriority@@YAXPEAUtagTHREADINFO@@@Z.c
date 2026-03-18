/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C002BCF8
 * Callers:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C002BDB0 (AdjustPwndPtiPqForDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(struct tagTHREADINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  HANDLE ThreadId; // rax
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  SystemInformation = 0uLL;
  v9 = 0LL;
  v5 = *((_DWORD *)a1 + 306);
  if ( (v5 & 0x2000) != 0
    && (v5 & 0x4000) == 0
    && (PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
  {
    *(_QWORD *)&v7 = PsGetThreadProcessId(*(PETHREAD *)a1);
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    LODWORD(v9) = 13;
    *((_QWORD *)&v7 + 1) = ThreadId;
    SystemInformation = v7;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 306) |= 0x4000u;
  }
}
