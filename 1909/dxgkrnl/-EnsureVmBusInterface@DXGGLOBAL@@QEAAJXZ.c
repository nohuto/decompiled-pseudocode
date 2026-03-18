/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0243918
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01EDB44 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C004216C (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C01630F8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0217B1C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0219A64 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // r14
  char v3; // bp
  struct VMBCHANNEL__ **v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // rcx
  PMDL PagesForMdl; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  PMDL v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  PVOID MappedSystemVa; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int GpadlFromMdl; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _MDL *v23; // rcx
  _QWORD *v24; // rcx

  v1 = (char *)this + 264;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 264));
  v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 164);
  if ( v4 )
    goto LABEL_16;
  v3 = 1;
  v5 = operator new[](0x38uLL, 0x4B677844u, PagedPool);
  if ( v5 )
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)v5, 2);
  else
    v6 = 0LL;
  *((_QWORD *)this + 164) = v6;
  if ( !v6 )
    goto LABEL_9;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x1000uLL, MmNonCached, 0);
  *((_QWORD *)this + 169) = PagesForMdl;
  v10 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 168) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v11 = WdLogNewEntry5_WdError(v10, v8, v9);
      *(_QWORD *)(v11 + 24) = 6941LL;
      goto LABEL_8;
    }
    v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 164);
LABEL_16:
    v14 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(v4);
    v12 = v14;
    if ( v14 >= 0 )
    {
      if ( *((_DWORD *)this + 335) )
      {
LABEL_22:
        if ( (int)v12 >= 0 || !v3 )
          goto LABEL_28;
        goto LABEL_24;
      }
      GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                       *((struct _KTHREAD ***)this + 164),
                       *((struct _MDL **)this + 169),
                       (unsigned int *)this + 335);
      v12 = GpadlFromMdl;
      if ( GpadlFromMdl >= 0 )
        goto LABEL_28;
      v18 = WdLogNewEntry5_WdError(v21, v20, v22);
      *(_QWORD *)(v18 + 32) = 6971LL;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    }
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdError(v18);
    goto LABEL_22;
  }
  v11 = WdLogNewEntry5_WdError(0LL, v8, v9);
  *(_QWORD *)(v11 + 24) = 6934LL;
LABEL_8:
  WdLogEvent5_WdError(v11);
LABEL_9:
  LODWORD(v12) = -1073741801;
LABEL_24:
  v23 = (struct _MDL *)*((_QWORD *)this + 169);
  if ( v23 )
  {
    MmFreePagesFromMdl(v23);
    *((_QWORD *)this + 168) = 0LL;
    *((_QWORD *)this + 169) = 0LL;
  }
  v24 = (_QWORD *)*((_QWORD *)this + 164);
  if ( v24 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v24);
    *((_QWORD *)this + 164) = 0LL;
  }
LABEL_28:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
