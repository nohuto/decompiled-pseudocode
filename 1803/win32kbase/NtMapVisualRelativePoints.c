/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C00BBA80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUtagWF_Point@@PEAU1@@Z @ 0x1C00BB990 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUtagWF_Point@@PEAU1@@Z.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, __int64 a3, ULONG64 a4, char *Address)
{
  unsigned int v6; // r15d
  int v9; // ebx
  unsigned __int64 v10; // rax
  ULONG64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  char *v15; // r14
  unsigned int i; // edi
  NTSTATUS v17; // eax
  ULONG v18; // eax
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  v9 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v20, (__int64)a2, a3);
  v10 = 8LL * v6;
  v11 = 0xFFFFFFFFLL;
  if ( v10 > 0xFFFFFFFF )
  {
    UserSetLastError(8);
  }
  else
  {
    v12 = 8 * v6;
    if ( (_DWORD)v10 )
    {
      if ( ((PsGetCurrentProcessWow64Process(0xFFFFFFFFLL) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a4 + v12;
      if ( v11 > MmUserProbeAddress || v11 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    v15 = Address;
    ProbeForWrite(Address, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0; i != v6; ++i )
    {
      v17 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct tagWF_Point *)(a4 + 8LL * i),
              (struct tagWF_Point *)&v15[8 * i]);
      if ( v17 < 0 )
      {
        v18 = RtlNtStatusToDosError(v17);
        UserSetLastError(v18);
        goto LABEL_16;
      }
    }
    v9 = 1;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
