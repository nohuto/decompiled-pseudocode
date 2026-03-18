/*
 * XREFs of NtUserEvent @ 0x1C01ED740
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C0203878 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int64 Src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  EnterCrit(0LL, 1LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v3, v2, v4, v5);
  v9 = 0LL;
  if ( !CurrentProcessWow64Process )
    v9 = 3LL;
  if ( (v9 & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = *(unsigned __int16 *)(Src + 6);
  v11 = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v9, v7, v8);
  ProbeForRead((volatile void *)(Src + 8), v10, v11 != 0 ? 1 : 4);
  v12 = xxxCsEvent((void *)Src);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}
