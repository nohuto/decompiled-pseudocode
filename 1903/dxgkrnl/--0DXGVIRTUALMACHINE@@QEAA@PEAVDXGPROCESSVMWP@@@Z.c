/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C025CF44
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C025E730 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddVirtualMachine@DXGGLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00444B8 (-AddVirtualMachine@DXGGLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C015F348 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  struct _KTHREAD **Global; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 20) = -1;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)this + 88, 1);
  *(_DWORD *)(v3 + 56) = v4;
  *(_QWORD *)(v3 + 64) = v4;
  *(_QWORD *)(v3 + 72) = v4;
  *((_QWORD *)this + 21) = v4;
  *((_QWORD *)this + 22) = v4;
  *((_QWORD *)this + 23) = v4;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = v4;
  *((_QWORD *)this + 28) = v4;
  *((_QWORD *)this + 29) = v4;
  *((_QWORD *)this + 30) = v4;
  *((_WORD *)this + 124) = v4;
  *((_BYTE *)this + 250) = v4;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 7) = v5;
  *((_QWORD *)this + 24) = v4;
  Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v3, v6);
  DXGGLOBAL::AddVirtualMachine(Global, (struct _LIST_ENTRY *)((char *)this + 8));
  return this;
}
