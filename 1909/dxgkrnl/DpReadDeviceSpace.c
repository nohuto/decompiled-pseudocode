/*
 * XREFs of DpReadDeviceSpace @ 0x1C001EB80
 * Callers:
 *     ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0215B30 (-ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0218030 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  void *v7; // r10
  __int64 (__fastcall *v8)(_QWORD, __int64, void *); // r11
  ULONG BusDataByOffset; // eax
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall *v14)(_QWORD, void *, _QWORD, _QWORD); // rax
  __int64 v15; // rax

  v6 = 0;
  v7 = a3;
  if ( !a1 )
    goto LABEL_16;
  if ( !a3 )
    goto LABEL_16;
  if ( !a6 )
    goto LABEL_16;
  *a6 = 0;
  a1 = *(_QWORD *)(a1 + 64);
  if ( !a1 )
    goto LABEL_16;
  if ( *(_DWORD *)(a1 + 16) != 1953656900 )
    goto LABEL_16;
  a3 = (void *)*(unsigned int *)(a1 + 20);
  if ( (unsigned int)((_DWORD)a3 - 2) > 1 || (_DWORD)a2 && (_DWORD)a2 != 1382638416 && (unsigned int)a2 + 0x80000000 > 1 )
    goto LABEL_16;
  if ( (_DWORD)a2 == -2147483647 )
  {
    if ( (_DWORD)a3 != 2 )
    {
LABEL_16:
      v12 = -1073741811LL;
LABEL_17:
      v6 = v12;
      v13 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdError(v13);
      return v6;
    }
    if ( (*(_DWORD *)(a1 + 3996) & 4) == 0 )
    {
      v12 = -1071774661LL;
      goto LABEL_17;
    }
    v14 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(a1 + 2952);
    if ( v14 )
    {
      BusDataByOffset = v14(*(_QWORD *)(a1 + 2928), v7, Offset, Length);
      goto LABEL_12;
    }
LABEL_23:
    v6 = -1073741823;
    v15 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v15);
    return v6;
  }
  if ( (_DWORD)a2 == 0x80000000 )
  {
    BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, v7, Offset, Length);
    goto LABEL_12;
  }
  v8 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(a1 + 616);
  if ( !v8 )
    goto LABEL_23;
  BusDataByOffset = v8(*(_QWORD *)(a1 + 568), a2, v7);
LABEL_12:
  *a6 = BusDataByOffset;
  v10 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v10 + 24) = *a6;
  WdLogEvent5_WdEvent(v10);
  return v6;
}
