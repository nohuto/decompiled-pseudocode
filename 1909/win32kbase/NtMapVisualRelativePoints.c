/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C011CB50
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C011C914 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, ULONG64 a4, char *Address)
{
  int v9; // ebx
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // edi
  NTSTATUS v17; // eax
  ULONG v18; // eax
  __int64 v19; // rdx

  v9 = 0;
  EnterCrit(0, 1);
  v12 = 8LL * a3;
  if ( v12 > 0xFFFFFFFF )
  {
    UserSetLastError(8LL, v10);
  }
  else
  {
    if ( (_DWORD)v12 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a4 + (unsigned int)v12;
      if ( v11 > MmUserProbeAddress || v11 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    ProbeForWrite(Address, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0; i != a3; ++i )
    {
      v17 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * i),
              (struct VisualPoint *)&Address[8 * i]);
      if ( v17 < 0 )
      {
        v18 = RtlNtStatusToDosError(v17);
        UserSetLastError(v18, v19);
        goto LABEL_15;
      }
    }
    v9 = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v9;
}
