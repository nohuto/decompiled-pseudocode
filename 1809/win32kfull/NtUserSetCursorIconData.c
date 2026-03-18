/*
 * XREFs of NtUserSetCursorIconData @ 0x1C006C880
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C0131580 (LeaveEditionCrit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, ULONG64 a2, ULONG64 a3, _BYTE *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  struct tagCURSOR *v10; // r15
  unsigned int v11; // ebx
  int v12; // edx
  WCHAR *v13; // r9
  int v14; // esi
  WCHAR *v15; // r14
  ULONG64 v16; // r8
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v21; // [rsp+34h] [rbp-D4h]
  int v22; // [rsp+38h] [rbp-D0h]
  _BYTE v23[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v24; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v25; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-98h] BYREF
  __int128 v27; // [rsp+80h] [rbp-88h]
  __int128 v28; // [rsp+90h] [rbp-78h]
  __int128 v29; // [rsp+A0h] [rbp-68h]
  __int128 v30; // [rsp+B0h] [rbp-58h]
  __int128 v31; // [rsp+C0h] [rbp-48h]
  __int128 v32; // [rsp+D0h] [rbp-38h]
  __int128 v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+F0h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  LOBYTE(v8) = 3;
  v9 = HMValidateHandle(a1, v8);
  v10 = (struct tagCURSOR *)v9;
  v11 = 0;
  if ( !v9 )
    goto LABEL_38;
  if ( (*(_DWORD *)(v9 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0LL);
    goto LABEL_38;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v12 = *(_DWORD *)a2;
  v21 = *(_DWORD *)a2;
  *(_DWORD *)&v25.Length = *(_DWORD *)a2;
  v13 = *(WCHAR **)(a2 + 8);
  v25.Buffer = v13;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v14 = *(_DWORD *)a3;
  v22 = *(_DWORD *)a3;
  *(_DWORD *)&v24.Length = *(_DWORD *)a3;
  v15 = *(WCHAR **)(a3 + 8);
  v24.Buffer = v15;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v17 = (unsigned __int64 *)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v12 > HIWORD(v21) )
    goto LABEL_14;
  if ( (v12 & 1) != 0 )
    goto LABEL_15;
  if ( v16 <= (unsigned __int64)v13 )
  {
LABEL_14:
    if ( (v12 & 1) == 0 )
    {
LABEL_16:
      *(_BYTE *)*v17 = 0;
      v17 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_17;
    }
LABEL_15:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
    v17 = (unsigned __int64 *)MmUserProbeAddress;
    goto LABEL_16;
  }
LABEL_17:
  if ( ((unsigned __int64)v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
    if ( v18 >= *v17 || (unsigned __int16)v14 > HIWORD(v22) )
      goto LABEL_24;
    if ( (v14 & 1) != 0 )
      goto LABEL_25;
    if ( v18 <= (unsigned __int64)v15 )
    {
LABEL_24:
      if ( (v14 & 1) == 0 )
      {
LABEL_26:
        *(_BYTE *)*v17 = 0;
        v17 = (unsigned __int64 *)MmUserProbeAddress;
        goto LABEL_27;
      }
LABEL_25:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      v17 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( (unsigned __int64)a4 >= *v17 )
    a4 = (_BYTE *)*v17;
  v26 = *(_OWORD *)a4;
  v27 = *((_OWORD *)a4 + 1);
  v28 = *((_OWORD *)a4 + 2);
  v29 = *((_OWORD *)a4 + 3);
  v30 = *((_OWORD *)a4 + 4);
  v31 = *((_OWORD *)a4 + 5);
  v32 = *((_OWORD *)a4 + 6);
  v33 = *((_OWORD *)a4 + 7);
  v34 = *((_QWORD *)a4 + 16);
  if ( (DWORD2(v27) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_38;
  }
  if ( (BYTE8(v27) & 8) == 0 )
  {
LABEL_37:
    ProbeForRead(*((volatile void **)&v32 + 1), v11, 4u);
    LODWORD(Size) = v11;
    v11 = (unsigned __int8)_SetCursorIconData(v10, &v25, &v24, (struct tagCURSORDATA *)&v26, Size);
    goto LABEL_38;
  }
  if ( !(WORD1(v32) | WORD3(v32))
    && *((_QWORD *)&v33 + 1) == 8LL * (int)v32
    && (_QWORD)v33 == *((_QWORD *)&v33 + 1) + 4LL * SDWORD1(v32) )
  {
    v11 = 8 * (v32 + DWORD1(v32));
    goto LABEL_37;
  }
LABEL_38:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  LeaveEditionCrit();
  return (int)v11;
}
