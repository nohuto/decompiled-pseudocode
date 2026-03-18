/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C00F36A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C00F35B0 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, __int64 a3, ULONG64 a4, char *Address)
{
  unsigned int v6; // r15d
  int v9; // ebx
  unsigned __int64 v10; // rax
  ULONG64 v11; // rcx
  unsigned int v12; // edi
  __int64 CurrentProcessWow64Process; // rax
  char *v14; // r14
  unsigned int i; // edi
  NTSTATUS v16; // eax
  ULONG v17; // eax
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  v9 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v19, (__int64)a2, a3);
  v10 = 8LL * v6;
  v11 = 0xFFFFFFFFLL;
  if ( v10 > 0xFFFFFFFF )
  {
    UserSetLastError(8LL);
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
    v14 = Address;
    ProbeForWrite(Address, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0; i != v6; ++i )
    {
      v16 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * i),
              (struct VisualPoint *)&v14[8 * i]);
      if ( v16 < 0 )
      {
        v17 = RtlNtStatusToDosError(v16);
        UserSetLastError(v17);
        goto LABEL_16;
      }
    }
    v9 = 1;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit();
  return v9;
}
