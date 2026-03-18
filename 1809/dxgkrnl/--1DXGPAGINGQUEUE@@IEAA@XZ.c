/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00EFFF8
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C0038C8C (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFF40 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this)
{
  void *v2; // rbx
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  DXGPROCESS *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  struct _MDL *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]

  if ( !*((_BYTE *)this + 72) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 36LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*((DXGDEVICESYNCOBJECT **)this + 5));
    ExFreePoolWithTag(v2, 0);
  }
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    DXGPROCESS::FreeResourceHandleNoRefSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v3);
  if ( *((_DWORD *)this + 7) )
  {
    v5 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v5 + 464) != 4 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(DXGPROCESS **)(v5 + 40);
      v8 = *((_DWORD *)this + 7);
      v11 = 0LL;
      v9 = *(_QWORD *)(v6 + 16);
      v13 = 0;
      HostProcess = DXGPROCESS::GetHostProcess(v7);
      v14 = 10;
      v15 = v8;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXG_VMBUS_CHANNEL_BASE *)(v9 + 4152),
        (struct DXGKVMB_COMMAND_BASE *)&v11,
        0x20u,
        0LL,
        0LL,
        v10);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}
