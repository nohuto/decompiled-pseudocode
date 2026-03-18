/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C006AEE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C006B194 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(unsigned int *a1, unsigned int *a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  const wchar_t *v13; // rdi
  ULONG64 v14; // rdx
  unsigned int **v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rcx
  WCHAR *v18; // rdx
  ULONG64 v19; // r8
  _BYTE **v20; // rax
  int v21; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v25; // [rsp+20h] [rbp-2A8h]
  unsigned int v26; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v27; // [rsp+40h] [rbp-288h]
  struct _UNICODE_STRING v28; // [rsp+50h] [rbp-278h] BYREF
  int v29; // [rsp+70h] [rbp-258h]
  const wchar_t *v30; // [rsp+78h] [rbp-250h]
  __int128 v31; // [rsp+80h] [rbp-248h] BYREF
  __int64 v32; // [rsp+90h] [rbp-238h]
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-228h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v31 = *(_OWORD *)a3;
  v32 = *(_QWORD *)(a3 + 16);
  v7 = 0LL;
  if ( (_QWORD)v31 )
  {
    LOBYTE(v6) = 3;
    v27 = (struct tagCURSOR *)HMValidateHandle(v31, v6);
    if ( !v27 )
      goto LABEL_35;
  }
  else
  {
    v27 = 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v12 = *a1;
  v25 = *a1;
  v29 = *a1;
  v13 = (const wchar_t *)*((_QWORD *)a1 + 1);
  v30 = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v15 = (unsigned int **)MmUserProbeAddress;
  if ( v14 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v25) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      v15 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_17;
    }
    if ( v14 > (unsigned __int64)v13 )
      goto LABEL_18;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_16;
LABEL_17:
  *(_BYTE *)*v15 = 0;
  v15 = (unsigned int **)MmUserProbeAddress;
LABEL_18:
  v16 = *v15;
  if ( a2 >= v16 )
    a2 = v16;
  v17 = *a2;
  v26 = *a2;
  *(_DWORD *)&v28.Length = *a2;
  v18 = (WCHAR *)*((_QWORD *)a2 + 1);
  v28.Buffer = v18;
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v18 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
  v20 = (_BYTE **)MmUserProbeAddress;
  if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v26) )
  {
    if ( (v17 & 1) != 0 )
    {
LABEL_28:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      v20 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_29;
    }
    if ( v19 > (unsigned __int64)v18 )
      goto LABEL_30;
  }
  if ( (v17 & 1) != 0 )
    goto LABEL_28;
LABEL_29:
  **v20 = 0;
LABEL_30:
  v21 = RtlStringCchCopyW(pszDest, 0x100uLL, v13);
  if ( v21 < 0 )
  {
    UserSetLastStatus(v21);
  }
  else
  {
    Atom = UserFindAtom(pszDest);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v28, v27, (struct tagCURSORFIND *)&v31);
      if ( ExistingCursorIcon )
        v7 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
