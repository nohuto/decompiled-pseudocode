/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0129140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenuItemInfo @ 0x1C012C204 (xxxSetMenuItemInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        PCWSTR SourceString)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD *v12; // rax
  PCWSTR v13; // rdx
  int v14; // ebx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  ULONG64 v17; // r8
  _BYTE **v18; // rax
  __int64 v19; // rax
  bool v20; // al
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v25; // rsi
  __int64 *ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD v33[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-A8h]
  int v35; // [rsp+48h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  __int64 v37; // [rsp+60h] [rbp-88h] BYREF
  __int64 v38; // [rsp+68h] [rbp-80h]
  __int64 v39; // [rsp+70h] [rbp-78h]
  _OWORD v40[5]; // [rsp+80h] [rbp-68h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33, v10, v11);
  v12 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v40[0] = *v12;
  v40[1] = v12[1];
  v40[2] = v12[2];
  v40[3] = v12[3];
  v40[4] = v12[4];
  v13 = SourceString;
  v14 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v13 = (PCWSTR)MmUserProbeAddress;
  v15 = *(unsigned int *)v13;
  v35 = v15;
  *(_DWORD *)&DestinationString.Length = v15;
  v16 = *((_QWORD *)v13 + 1);
  DestinationString.Buffer = (PWSTR)v16;
  if ( (v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (unsigned __int16)v15 + v16 + 2;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 >= MmUserProbeAddress || (unsigned __int16)v15 > HIWORD(v35) )
    goto LABEL_12;
  if ( (v15 & 1) != 0 )
    goto LABEL_13;
  if ( v17 <= v16 )
  {
LABEL_12:
    if ( (v15 & 1) == 0 )
    {
LABEL_14:
      **v18 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v40[0]) & 1) == 0 || (HIDWORD(v40[0]) & 0xFFFFEF74) == 0 )
  {
    v19 = ValidateHmenu(a1);
    v34 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v33, v19);
    v20 = SmartObjStackRef<tagMENU>::operator==((__int64)v33);
    if ( a4 )
    {
      if ( v20 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v21 = *(_QWORD *)v33[0];
      v22 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v20 )
        goto LABEL_18;
      v21 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 40LL);
      v22 = (v21 & 0x40) == 0;
    }
    if ( v22 )
    {
      v23 = v34;
      if ( !v34 )
        v23 = *(_QWORD *)v33[0];
      CurrentThread = KeGetCurrentThread();
      v25 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v16) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v25 = *ThreadWin32Thread;
      }
      v37 = *(_QWORD *)(v25 + 408);
      *(_QWORD *)(v25 + 408) = &v37;
      v38 = v23;
      if ( v23 )
        HMLockObject(v23);
      if ( a4 )
        inserted = xxxInsertMenuItem(v33, a2, a3, (__int64)v40, &DestinationString.Length);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v33, a2, a3, (unsigned int)v40, (__int64)&DestinationString);
      v14 = inserted;
      ThreadUnlock1(v29, v28, v30);
    }
  }
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v16, v17);
  UserSessionSwitchLeaveCrit(v31);
  return v14;
}
