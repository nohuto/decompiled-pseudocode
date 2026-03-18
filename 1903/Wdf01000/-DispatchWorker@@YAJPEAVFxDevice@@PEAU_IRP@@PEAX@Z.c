/*
 * XREFs of ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C0053678
 * Callers:
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00535BC (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0047D98 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C0053DC4 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 */

int __fastcall DispatchWorker(FxDevice *Device, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  _LIST_ENTRY *v4; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxIrpPreprocessInfo *v8; // r8
  unsigned int NumMinorFunctions; // edx
  __int64 v10; // rcx
  FxDefaultIrpHandler *DispatchPackage; // rax
  _IRP *v12; // r11

  p_m_PreprocessInfoListHead = &Device->m_PreprocessInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &Device->m_PreprocessInfoListHead )
  {
LABEL_9:
    DispatchPackage = FxDevice::GetDispatchPackage(Device, Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
    return DispatchPackage->Dispatch(DispatchPackage, v12);
  }
  else
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    while ( 1 )
    {
      v8 = (FxIrpPreprocessInfo *)v4;
      v4 = v4->Flink;
      if ( v8->Dispatch[CurrentStackLocation->MajorFunction].EvtDevicePreprocess )
        break;
LABEL_8:
      if ( v4 == p_m_PreprocessInfoListHead )
        goto LABEL_9;
    }
    NumMinorFunctions = v8->Dispatch[CurrentStackLocation->MajorFunction].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v10 = 0LL;
      while ( v8->Dispatch[CurrentStackLocation->MajorFunction].MinorFunctions[v10] != CurrentStackLocation->MinorFunction )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= NumMinorFunctions )
          goto LABEL_8;
      }
    }
    return PreprocessIrp(Device, Irp, v8, v4);
  }
}
