/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C006BC24
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C000FCFC (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0010148 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002430 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C006C314 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C007D768 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00B22BC (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  _QWORD *v6; // r14
  int v7; // edi
  struct _MDL *Mdl; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v26[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v28 = 0LL;
  v27 = 4096LL;
  v4 = 0x8000000;
  v5 = 0LL;
  if ( *((PVOID *)this + 19) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v4 = 134479872;
    v5 = -1LL;
  }
  v6 = (_QWORD *)((char *)this + 96);
  v7 = MmCreateSection((char *)this + 96, 0LL, 0LL, &v27, 4, v4, v5, 0LL);
  if ( v7 < 0 )
  {
    *v6 = 0LL;
  }
  else
  {
    v25 = 4096LL;
    v7 = MmMapViewInSystemSpaceEx(*v6, (char *)this + 104, &v25, &v28, 0LL);
    if ( v7 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(*((PVOID *)this + 13), 0x1000uLL);
      *((_QWORD *)this + 14) = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 120) = 1;
        v12 = *((_QWORD *)this + 19);
        if ( *(_BYTE *)(v12 + 64) )
        {
          if ( !a2 )
            a2 = *(struct VIDMM_PROCESS **)v12;
        }
        else if ( !a2 )
        {
          if ( *((_QWORD *)this + 17) )
          {
            v15 = WdLogNewEntry5_WdAssertion(v11, v10);
            *(_QWORD *)(v15 + 24) = 378LL;
            WdLogEvent5_WdAssertion(v15);
          }
          if ( *((_QWORD *)this + 16) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v11, v10);
            *(_QWORD *)(v16 + 24) = 379LL;
            WdLogEvent5_WdAssertion(v16);
          }
          return 0LL;
        }
        *((_QWORD *)this + 4) = a2;
        v7 = VIDMM_PROCESS::MapHostAddressesToGuest(
               a2,
               *((struct _MDL **)this + 14),
               0x1000uLL,
               (void **)this + 17,
               (unsigned __int64 *)this + 16);
        if ( v7 >= 0 )
        {
          v20 = *((_QWORD *)this + 19);
          if ( !*(_BYTE *)(v20 + 64) )
          {
            if ( *(_QWORD *)v20 )
            {
              v21 = WdLogNewEntry5_WdAssertion(v18, v17);
              *(_QWORD *)(v21 + 24) = 366LL;
              WdLogEvent5_WdAssertion(v21);
              v20 = *((_QWORD *)this + 19);
            }
            *(_BYTE *)(v20 + 65) = 1;
            *((_BYTE *)this + 144) = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v26,
              (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL));
            v22 = (_QWORD *)((char *)this + 16);
            v23 = *((_QWORD *)this + 4) + 48LL;
            v24 = *(_QWORD *)v23;
            if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
              __fastfail(3u);
            *v22 = v24;
            *((_QWORD *)this + 3) = v23;
            *(_QWORD *)(v24 + 8) = v22;
            *(_QWORD *)v23 = v22;
            DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26);
          }
          return 0LL;
        }
        v19 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v19 + 24) = 354LL;
        WdLogEvent5_WdAssertion(v19);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
        v14 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v14 + 24) = 293LL;
        WdLogEvent5_WdLowResource(v14);
        v7 = -1073741801;
      }
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v7;
}
