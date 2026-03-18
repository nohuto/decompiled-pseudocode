/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C00077B4
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C0002104 (Command_SendInternalCommandSynchronously.c)
 *     Register_IsGetSetExtendedPropertyCapabilityPresent @ 0x1C0003170 (Register_IsGetSetExtendedPropertyCapabilityPresent.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C00391FC (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  char *v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  char SetExtendedPropertyCapabilityPresent; // al
  int v7; // edx
  size_t v8; // r14
  char *PoolWithTag; // rax
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  __int16 v13; // ax
  __int16 v14; // cx
  LONG (__fastcall *v15)(__int64); // rcx
  unsigned int v16; // eax

  v2 = 0LL;
  if ( a2 != 5 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  SetExtendedPropertyCapabilityPresent = Register_IsGetSetExtendedPropertyCapabilityPresent(v5);
  v8 = (unsigned int)(v7 + 123);
  if ( SetExtendedPropertyCapabilityPresent )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                            (unsigned int)v8,
                            0x49434858u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = v8 - 101;
      v11 = 2;
LABEL_5:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v11, 7u, v10, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
      return 0LL;
    }
    memset(PoolWithTag, 0, v8);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    *((_QWORD *)v2 + 7) = v2;
    *((_QWORD *)v2 + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    *((_DWORD *)v2 + 11) = *((_DWORD *)v2 + 11) & 0xFFFF03FF | 0x6000;
    Command_SendInternalCommandSynchronously(a1, (__int64)v2);
    if ( (*(_BYTE *)(v5 + 108) & 1) != 0 )
      *(_DWORD *)(v4 + 564) = 2;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_WORD *)(v12 + 184);
  if ( v13 != 4147 && v13 != 6418 && v13 != 6945 && _stricmp((const char *)(v12 + 240), "NVDA") )
    goto LABEL_25;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) = -1LL;
  if ( !v2 )
  {
    v2 = (char *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v8, 0x49434858u);
    if ( !v2 )
    {
      v10 = 28;
      v11 = 3;
      goto LABEL_5;
    }
  }
  v14 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 184LL);
  if ( v14 == 4147 || v14 == 6418 )
  {
    memset(v2, 0, v8);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v15 = (LONG (__fastcall *)(__int64))Command_RenesasGetFirmwareVersionCommandCompletion;
    goto LABEL_22;
  }
  if ( v14 != 6945 )
  {
    memset(v2, 0, v8);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v15 = (LONG (__fastcall *)(__int64))Command_NvidiaGetFirmwareVersionCommandCompletion;
LABEL_22:
    v16 = *((_DWORD *)v2 + 11) & 0xFFFF03FF | 0xC400;
LABEL_23:
    *((_QWORD *)v2 + 7) = v2;
    *((_QWORD *)v2 + 6) = v15;
    *((_DWORD *)v2 + 11) = v16;
    Command_SendInternalCommandSynchronously(a1, (__int64)v2);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) != -1LL )
      Etw_ControllerFirmareVersionUpdate();
    goto LABEL_25;
  }
  memset(v2, 0, v8);
  *(_QWORD *)v2 = a1;
  KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
  *((_QWORD *)v2 + 7) = v2;
  *((_QWORD *)v2 + 6) = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
  *((_DWORD *)v2 + 11) = *((_DWORD *)v2 + 11) & 0xFFFF03FF | 0xD000;
  Command_SendInternalCommandSynchronously(a1, (__int64)v2);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) != -1LL )
  {
    memset(v2, 0, v8);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v15 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
    v16 = *((_DWORD *)v2 + 11) & 0xFFFF03FF | 0xCC00;
    goto LABEL_23;
  }
LABEL_25:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49434858u);
  return 0LL;
}
