/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C006A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSetMenuItemInfo @ 0x1C00A5F5C (xxxSetMenuItemInfo.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        ULONG64 a5,
        PCWSTR SourceString)
{
  __int64 v10; // rdx
  _OWORD *v11; // rax
  PCWSTR v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG64 v16; // r8
  _BYTE **v17; // rax
  bool v18; // al
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v23; // rsi
  __int64 *ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD v33[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-A8h]
  int v35; // [rsp+48h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v38[5]; // [rsp+80h] [rbp-68h] BYREF

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33, v10);
  v11 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v38[0] = *v11;
  v38[1] = v11[1];
  v38[2] = v11[2];
  v38[3] = v11[3];
  v38[4] = v11[4];
  v12 = SourceString;
  v13 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v12 = (PCWSTR)MmUserProbeAddress;
  v14 = *(unsigned int *)v12;
  v35 = v14;
  *(_DWORD *)&DestinationString.Length = v14;
  v15 = *((_QWORD *)v12 + 1);
  DestinationString.Buffer = (PWSTR)v15;
  if ( (v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (unsigned __int16)v14 + v15 + 2;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v35) )
    goto LABEL_12;
  if ( (v14 & 1) != 0 )
    goto LABEL_13;
  if ( v16 <= v15 )
  {
LABEL_12:
    if ( (v14 & 1) == 0 )
    {
LABEL_14:
      **v17 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v38[0]) & 1) == 0 || (HIDWORD(v38[0]) & 0xFFFFEF74) == 0 )
  {
    ValidateHmenu(a1);
    v34 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v33);
    v18 = SmartObjStackRef<tagMENU>::operator==((__int64)v33);
    if ( a4 )
    {
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v19 = *(_QWORD *)v33[0];
      v20 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v18 )
        goto LABEL_18;
      v19 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL);
      v20 = (v19 & 0x40) == 0;
    }
    if ( v20 )
    {
      v21 = v34;
      if ( !v34 )
        v21 = *(_QWORD *)v33[0];
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v15) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      v37[0] = *(_QWORD *)(v23 + 416);
      *(_QWORD *)(v23 + 416) = v37;
      v37[1] = v21;
      if ( v21 )
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      if ( a4 )
        inserted = xxxInsertMenuItem(v33, a2, a3, (__int64)v38, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v33, a2, a3, (unsigned int)v38, (__int64)&DestinationString);
      v13 = inserted;
      ThreadUnlock1(v27, v26);
    }
  }
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v15);
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v13;
}
