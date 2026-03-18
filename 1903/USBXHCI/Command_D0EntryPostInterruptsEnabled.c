/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C0009608
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013260 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C00022D8 (Command_SendInternalCommandSynchronously.c)
 *     Register_IsGetSetExtendedPropertyCapabilityPresent @ 0x1C00039F8 (Register_IsGetSetExtendedPropertyCapabilityPresent.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C003E55C (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  char *PoolWithTag; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  char *v6; // rax
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  __int16 v10; // ax
  __int16 v11; // dx
  void *v12; // rcx
  LONG (__fastcall *v13)(__int64); // rcx
  unsigned int v14; // eax

  PoolWithTag = 0LL;
  if ( a2 != 5 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( !Register_IsGetSetExtendedPropertyCapabilityPresent(v5) )
  {
LABEL_9:
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_WORD *)(v9 + 248);
    if ( v10 != 4147 && v10 != 6418 && v10 != 6945 && _stricmp((const char *)(v9 + 304), "NVDA") )
      goto LABEL_27;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = -1LL;
    if ( !PoolWithTag )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                              0x80uLL,
                              0x49434858u);
      if ( !PoolWithTag )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v7 = 28;
        v8 = 3;
        goto LABEL_6;
      }
    }
    v11 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 248LL);
    if ( v11 == 4147 || v11 == 6418 )
    {
      memset(PoolWithTag + 8, 0, 0x78uLL);
      *(_QWORD *)PoolWithTag = a1;
      KeInitializeEvent((PRKEVENT)(PoolWithTag + 104), SynchronizationEvent, 0);
      v13 = (LONG (__fastcall *)(__int64))Command_RenesasGetFirmwareVersionCommandCompletion;
    }
    else
    {
      v12 = PoolWithTag + 8;
      if ( v11 == 6945 )
      {
        memset(v12, 0, 0x78uLL);
        *(_QWORD *)PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 104), SynchronizationEvent, 0);
        *((_QWORD *)PoolWithTag + 7) = PoolWithTag;
        *((_QWORD *)PoolWithTag + 6) = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
        *((_DWORD *)PoolWithTag + 11) = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xD000;
        Command_SendInternalCommandSynchronously(a1, (__int64)PoolWithTag);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) != -1LL )
        {
          memset(PoolWithTag + 8, 0, 0x78uLL);
          *(_QWORD *)PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 104), SynchronizationEvent, 0);
          v13 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
          v14 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xCC00;
          goto LABEL_25;
        }
LABEL_27:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x49434858u);
        return 0LL;
      }
      memset(v12, 0, 0x78uLL);
      *(_QWORD *)PoolWithTag = a1;
      KeInitializeEvent((PRKEVENT)(PoolWithTag + 104), SynchronizationEvent, 0);
      v13 = (LONG (__fastcall *)(__int64))Command_NvidiaGetFirmwareVersionCommandCompletion;
    }
    v14 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xC400;
LABEL_25:
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 6) = v13;
    *((_DWORD *)PoolWithTag + 11) = v14;
    Command_SendInternalCommandSynchronously(a1, (__int64)PoolWithTag);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) != -1LL )
      Etw_ControllerFirmareVersionUpdate();
    goto LABEL_27;
  }
  v6 = (char *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x80uLL, 0x49434858u);
  PoolWithTag = v6;
  if ( v6 )
  {
    memset(v6 + 8, 0, 0x78uLL);
    *(_QWORD *)PoolWithTag = a1;
    KeInitializeEvent((PRKEVENT)(PoolWithTag + 104), SynchronizationEvent, 0);
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    *((_DWORD *)PoolWithTag + 11) = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0x6000;
    Command_SendInternalCommandSynchronously(a1, (__int64)PoolWithTag);
    if ( (*(_BYTE *)(v5 + 108) & 1) != 0 )
      *(_DWORD *)(v4 + 628) = 2;
    goto LABEL_9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 27;
    v8 = 2;
LABEL_6:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v8, 7u, v7, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
  }
  return 0LL;
}
