/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C0026C20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0026EF4 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(unsigned int *a1, unsigned int *a2, ULONG64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  const unsigned __int16 *v9; // rdi
  ULONG64 v10; // rdx
  unsigned int **v11; // rax
  unsigned int *v12; // rax
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  NTSTATUS v17; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v21; // [rsp+20h] [rbp-2A8h]
  unsigned int v22; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v23; // [rsp+40h] [rbp-288h]
  struct _UNICODE_STRING v24; // [rsp+48h] [rbp-280h] BYREF
  __int64 v25; // [rsp+60h] [rbp-268h]
  const unsigned __int16 *v26; // [rsp+68h] [rbp-260h]
  __int128 v27; // [rsp+70h] [rbp-258h] BYREF
  __int64 v28; // [rsp+80h] [rbp-248h]
  unsigned __int16 v29[256]; // [rsp+A0h] [rbp-228h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  v27 = 0uLL;
  v28 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v27 = *(_OWORD *)a3;
  v28 = *(_QWORD *)(a3 + 16);
  v6 = 0LL;
  if ( (_QWORD)v27 )
  {
    v23 = (struct tagCURSOR *)HMValidateHandle(v27, 3);
    if ( !v23 )
      goto LABEL_35;
  }
  else
  {
    v23 = 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v8 = *a1;
  v21 = *a1;
  LODWORD(v25) = *a1;
  v9 = (const unsigned __int16 *)*((_QWORD *)a1 + 1);
  v26 = v9;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
  v11 = (unsigned int **)MmUserProbeAddress;
  if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v21) )
  {
    if ( (v8 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v11 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_17;
    }
    if ( v10 > (unsigned __int64)v9 )
      goto LABEL_18;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_16;
LABEL_17:
  *(_BYTE *)*v11 = 0;
  v11 = (unsigned int **)MmUserProbeAddress;
LABEL_18:
  v12 = *v11;
  if ( a2 >= v12 )
    a2 = v12;
  v13 = *a2;
  v22 = *a2;
  *(_DWORD *)&v24.Length = *a2;
  v14 = (WCHAR *)*((_QWORD *)a2 + 1);
  v24.Buffer = v14;
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v22) )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_28:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v16 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_29;
    }
    if ( v15 > (unsigned __int64)v14 )
      goto LABEL_30;
  }
  if ( (v13 & 1) != 0 )
    goto LABEL_28;
LABEL_29:
  **v16 = 0;
LABEL_30:
  v17 = RtlStringCchCopyW(v29, 0x100uLL, v9);
  if ( v17 < 0 )
  {
    UserSetLastStatus(v17);
  }
  else
  {
    Atom = UserFindAtom(v29);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v24, v23, (struct tagCURSORFIND *)&v27);
      if ( ExistingCursorIcon )
        v6 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
