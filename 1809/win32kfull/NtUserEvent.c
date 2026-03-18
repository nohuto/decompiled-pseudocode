/*
 * XREFs of NtUserEvent @ 0x1C0213AC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C022C7CC (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int64 Src)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  EnterCrit(0LL, 1LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2);
  v4 = 0LL;
  if ( !CurrentProcessWow64Process )
    v4 = 3LL;
  if ( (v4 & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *(unsigned __int16 *)(Src + 6);
  v6 = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForRead((volatile void *)(Src + 8), v5, v6 != 0 ? 1 : 4);
  v7 = xxxCsEvent((void *)Src);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
