/*
 * XREFs of RaidAdapterQueryPowerIrp @ 0x1C0011A2C
 * Callers:
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 * Callees:
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011B30 (RaidAdapterQuerySystemPowerIrp.c)
 *     WPP_SF_qqs @ 0x1C0042834 (WPP_SF_qqs.c)
 *     WPP_SF_qqsD @ 0x1C00428D4 (WPP_SF_qqsD.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Options; // ebp
  const char *v6; // r14
  _IO_STACK_LOCATION *v7; // rax
  NTSTATUS SystemPowerIrp; // eax
  int v9; // edi
  const char *v11; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 6 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v6 = "System";
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v11 = "System";
    if ( Options )
      v11 = "Device";
    WPP_SF_qqs(WPP_GLOBAL_Control->AttachedDevice, 13, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v11);
  }
  if ( !Options )
  {
    SystemPowerIrp = RaidAdapterQuerySystemPowerIrp(a1, a2);
    goto LABEL_7;
  }
  if ( Options == 1 )
  {
    v7 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
    *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
    v7[-1].FileObject = v7->FileObject;
    v7[-1].Control = 0;
    SystemPowerIrp = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_7:
    v9 = SystemPowerIrp;
    goto LABEL_8;
  }
  v9 = -1073741823;
LABEL_8:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( Options )
      v6 = "Device";
    WPP_SF_qqsD(WPP_GLOBAL_Control->AttachedDevice, 14, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v6, v9);
  }
  return v9;
}
