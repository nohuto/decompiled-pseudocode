/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C0031660
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0031934 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(unsigned int *a1, unsigned int *a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const unsigned __int16 *v12; // rdi
  ULONG64 v13; // rdx
  unsigned int **v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // rcx
  WCHAR *v17; // rdx
  ULONG64 v18; // r8
  _BYTE **v19; // rax
  NTSTATUS v20; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v24; // [rsp+20h] [rbp-2A8h]
  unsigned int v25; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v26; // [rsp+40h] [rbp-288h]
  struct _UNICODE_STRING v27; // [rsp+48h] [rbp-280h] BYREF
  __int64 v28; // [rsp+60h] [rbp-268h]
  const unsigned __int16 *v29; // [rsp+68h] [rbp-260h]
  __int128 v30; // [rsp+70h] [rbp-258h] BYREF
  __int64 v31; // [rsp+80h] [rbp-248h]
  unsigned __int16 v32[256]; // [rsp+A0h] [rbp-228h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  v30 = 0uLL;
  v31 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v30 = *(_OWORD *)a3;
  v31 = *(_QWORD *)(a3 + 16);
  v9 = 0LL;
  if ( (_QWORD)v30 )
  {
    LOBYTE(v6) = 3;
    v26 = (struct tagCURSOR *)HMValidateHandle(v30, v6, v7, v8);
    if ( !v26 )
      goto LABEL_35;
  }
  else
  {
    v26 = 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v11 = *a1;
  v24 = *a1;
  LODWORD(v28) = *a1;
  v12 = (const unsigned __int16 *)*((_QWORD *)a1 + 1);
  v29 = v12;
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
  v14 = (unsigned int **)MmUserProbeAddress;
  if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v24) )
  {
    if ( (v11 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      v14 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_17;
    }
    if ( v13 > (unsigned __int64)v12 )
      goto LABEL_18;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_16;
LABEL_17:
  *(_BYTE *)*v14 = 0;
  v14 = (unsigned int **)MmUserProbeAddress;
LABEL_18:
  v15 = *v14;
  if ( a2 >= v15 )
    a2 = v15;
  v16 = *a2;
  v25 = *a2;
  *(_DWORD *)&v27.Length = *a2;
  v17 = (WCHAR *)*((_QWORD *)a2 + 1);
  v27.Buffer = v17;
  if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
  v19 = (_BYTE **)MmUserProbeAddress;
  if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v25) )
  {
    if ( (v16 & 1) != 0 )
    {
LABEL_28:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
      v19 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_29;
    }
    if ( v18 > (unsigned __int64)v17 )
      goto LABEL_30;
  }
  if ( (v16 & 1) != 0 )
    goto LABEL_28;
LABEL_29:
  **v19 = 0;
LABEL_30:
  v20 = RtlStringCchCopyW(v32, 0x100uLL, v12);
  if ( v20 < 0 )
  {
    UserSetLastStatus(v20);
  }
  else
  {
    Atom = UserFindAtom(v32);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v27, v26, (struct tagCURSORFIND *)&v30);
      if ( ExistingCursorIcon )
        v9 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
