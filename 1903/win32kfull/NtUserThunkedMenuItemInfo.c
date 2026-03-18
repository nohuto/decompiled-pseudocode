/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C001B7C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(__int64 a1, int a2, int a3, int a4, ULONG64 a5, PCWSTR SourceString)
{
  _OWORD *v10; // rax
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v26; // rsi
  __int64 *ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  _QWORD v34[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-A8h]
  int v36; // [rsp+48h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  __int64 v38; // [rsp+60h] [rbp-88h] BYREF
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  _OWORD v41[5]; // [rsp+80h] [rbp-68h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v34);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v41[0] = *v10;
  v41[1] = v10[1];
  v41[2] = v10[2];
  v41[3] = v10[3];
  v41[4] = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v11 = (PCWSTR)MmUserProbeAddress;
  v13 = *(unsigned int *)v11;
  v36 = v13;
  *(_DWORD *)&DestinationString.Length = v13;
  v14 = (WCHAR *)*((_QWORD *)v11 + 1);
  DestinationString.Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v36) )
    goto LABEL_12;
  if ( (v13 & 1) != 0 )
    goto LABEL_13;
  if ( v15 <= (unsigned __int64)v14 )
  {
LABEL_12:
    if ( (v13 & 1) == 0 )
    {
LABEL_14:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v41[0]) & 1) == 0 || (HIDWORD(v41[0]) & 0xFFFFEF74) == 0 )
  {
    v17 = ValidateHmenu(a1);
    v35 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v34, v17);
    v18 = SmartObjStackRef<tagMENU>::operator==(v34);
    if ( a4 )
    {
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v22 = *(_QWORD *)v34[0];
      v23 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v18 )
        goto LABEL_18;
      v22 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL);
      v23 = (v22 & 0x40) == 0;
    }
    if ( v23 )
    {
      v24 = v35;
      if ( !v35 )
        v24 = *(_QWORD *)v34[0];
      CurrentThread = KeGetCurrentThread();
      v26 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v22, v19, v20, v21) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v26 = *ThreadWin32Thread;
      }
      v38 = *(_QWORD *)(v26 + 408);
      *(_QWORD *)(v26 + 408) = &v38;
      v39 = v24;
      if ( v24 )
        HMLockObject(v24);
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v34, a2, a3, (unsigned int)v41, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v34, a2, a3, (unsigned int)v41, (__int64)&DestinationString);
      v12 = inserted;
      ThreadUnlock1(v30, v29, v31);
    }
  }
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
  UserSessionSwitchLeaveCrit(v32);
  return v12;
}
