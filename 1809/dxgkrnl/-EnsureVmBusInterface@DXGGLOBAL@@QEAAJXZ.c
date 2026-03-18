/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C020F330
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C003B910 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C014C9C4 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C01E7D3C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C01E9ABC (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // r14
  char v3; // bp
  struct VMBCHANNEL__ **v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // rcx
  PMDL PagesForMdl; // rax
  PMDL v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  PVOID MappedSystemVa; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int GpadlFromMdl; // eax
  __int64 v16; // rcx
  struct _MDL *v17; // rcx
  _QWORD *v18; // rcx

  v1 = (char *)this + 264;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 264));
  v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 168);
  if ( v4 )
    goto LABEL_16;
  v3 = 1;
  v5 = operator new(0x38uLL, 0x4B677844u, PagedPool);
  if ( v5 )
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)v5, 1);
  else
    v6 = 0LL;
  *((_QWORD *)this + 168) = v6;
  if ( !v6 )
    goto LABEL_9;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x1000uLL, MmNonCached, 0);
  *((_QWORD *)this + 173) = PagesForMdl;
  v8 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 172) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = 6111LL;
      goto LABEL_8;
    }
    v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 168);
LABEL_16:
    v12 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(v4);
    v10 = v12;
    if ( v12 >= 0 )
    {
      if ( *((_DWORD *)this + 343) )
      {
LABEL_22:
        if ( (int)v10 >= 0 || !v3 )
          goto LABEL_28;
        goto LABEL_24;
      }
      GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                       *((DXG_GUEST_GLOBAL_VMBUS **)this + 168),
                       *((struct _MDL **)this + 173),
                       (unsigned int *)this + 343);
      v10 = GpadlFromMdl;
      if ( GpadlFromMdl >= 0 )
        goto LABEL_28;
      v14 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v14 + 32) = 6141LL;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
    }
    *(_QWORD *)(v14 + 24) = v10;
    WdLogEvent5_WdError(v14);
    goto LABEL_22;
  }
  v9 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v9 + 24) = 6104LL;
LABEL_8:
  WdLogEvent5_WdError(v9);
LABEL_9:
  LODWORD(v10) = -1073741801;
LABEL_24:
  v17 = (struct _MDL *)*((_QWORD *)this + 173);
  if ( v17 )
  {
    MmFreePagesFromMdl(v17);
    *((_QWORD *)this + 172) = 0LL;
    *((_QWORD *)this + 173) = 0LL;
  }
  v18 = (_QWORD *)*((_QWORD *)this + 168);
  if ( v18 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v18);
    *((_QWORD *)this + 168) = 0LL;
  }
LABEL_28:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
