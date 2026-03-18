/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0021080
 * Callers:
 *     <none>
 * Callees:
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenuItemInfo @ 0x1C006B998 (xxxSetMenuItemInfo.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // rsi
  __int64 *ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD v35[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-A8h]
  int v37; // [rsp+48h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v39[3]; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v40[5]; // [rsp+80h] [rbp-68h] BYREF

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v35);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v40[0] = *v10;
  v40[1] = v10[1];
  v40[2] = v10[2];
  v40[3] = v10[3];
  v40[4] = v10[4];
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
  v37 = v13;
  *(_DWORD *)&DestinationString.Length = v13;
  v14 = (WCHAR *)*((_QWORD *)v11 + 1);
  DestinationString.Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v37) )
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
  if ( (BYTE4(v40[0]) & 1) == 0 || (HIDWORD(v40[0]) & 0xFFFFEF74) == 0 )
  {
    v17 = ValidateHmenu(a1);
    v36 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v35, v17);
    v18 = SmartObjStackRef<tagMENU>::operator==(v35);
    if ( a4 )
    {
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v20 = *(_QWORD *)v35[0];
      v21 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v18 )
        goto LABEL_18;
      v20 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v35[0] + 40LL) + 40LL);
      v21 = (v20 & 0x40) == 0;
    }
    if ( v21 )
    {
      v22 = v36;
      if ( !v36 )
        v22 = *(_QWORD *)v35[0];
      CurrentThread = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v24 = *ThreadWin32Thread;
      }
      v39[0] = *(_QWORD *)(v24 + 408);
      *(_QWORD *)(v24 + 408) = v39;
      v39[1] = v22;
      if ( v22 )
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v35, a2, a3, (unsigned int)v40, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v35, a2, a3, (unsigned int)v40, (__int64)&DestinationString);
      v12 = inserted;
      ThreadUnlock1(v28, v27, v29);
    }
  }
LABEL_18:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v35);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v12;
}
