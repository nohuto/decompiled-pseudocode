/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003AFD4
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0037C30 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003AFA0 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C006C314 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006E300 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070948 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C007EA1C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        struct VIDMM_GLOBAL *this,
        unsigned int a2,
        SIZE_T a3,
        struct VIDMM_SCH_LOG **a4,
        void **a5,
        unsigned __int64 *a6)
{
  _DWORD *v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  struct _MDL *Mdl; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  CVirtualAddressAllocator *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-108h]
  unsigned __int64 v27; // [rsp+70h] [rbp-B8h] BYREF
  SIZE_T v28; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-A8h] BYREF
  SIZE_T v30; // [rsp+88h] [rbp-A0h] BYREF
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+90h] [rbp-98h]
  _QWORD v32[12]; // [rsp+A0h] [rbp-88h] BYREF

  v29 = 0LL;
  memset(v32, 0, 0x58uLL);
  v10 = operator new[](0x40uLL, 0x65356956u, PagedPool);
  v11 = (unsigned __int64)v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    v10[2] = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_BYTE *)v10 + 56) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v27 = v11;
  if ( !v11 )
    goto LABEL_5;
  *(_QWORD *)v11 = this;
  *(_DWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 16) = a3;
  v28 = a3;
  v12 = MmCreateSection(v11 + 24, 0LL, 0LL, &v28, 4, 0x8000000, 0LL, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  v30 = a3;
  v12 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v11 + 24), v11 + 32, &v30, &v29, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  Mdl = VidMmiAllocateMdl(*(PVOID *)(v11 + 32), a3);
  *(_QWORD *)(v11 + 48) = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    *(_BYTE *)(v11 + 56) = 1;
    v14 = VIDMM_GLOBAL::AdapterId(this);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v14, a2);
    v27 = 0LL;
    v12 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            VirtualAddressAllocator,
            a3,
            v15,
            *((_QWORD *)this + 5110),
            *((_QWORD *)this + 5111),
            0x1000u,
            &v27);
    if ( v12 >= 0 )
    {
      v19 = v27;
      *(_QWORD *)(v11 + 40) = v27;
      v26 = a3;
      v20 = VirtualAddressAllocator;
      v21 = CVirtualAddressAllocator::MapVirtualAddressRange(
              VirtualAddressAllocator,
              v11 + 48,
              0LL,
              7LL,
              v26,
              v19,
              0LL,
              0LL,
              4096,
              17LL,
              0LL,
              a2,
              0LL,
              0);
      if ( !v21 )
      {
        v24 = WdLogNewEntry5_WdWarning(v23, v22);
        WdLogEvent5_WdWarning(v24);
        v12 = -1073741823;
        goto LABEL_15;
      }
      LODWORD(v32[0]) = 113;
      v32[6] = v21;
      v32[5] = v20;
      HIDWORD(v32[0]) = a2;
      v32[7] = *(_QWORD *)(v11 + 48);
      v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v32, 1);
      if ( v12 >= 0 )
      {
        VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, this);
        *a4 = (struct VIDMM_SCH_LOG *)v11;
        *a5 = *(void **)(v11 + 32);
        *a6 = *(_QWORD *)(v11 + 40);
        return (unsigned int)v12;
      }
    }
    v18 = WdLogNewEntry5_WdWarning(v17, v16);
    WdLogEvent5_WdWarning(v18);
  }
  else
  {
LABEL_5:
    v12 = -1073741801;
  }
LABEL_15:
  if ( v11 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v11);
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  return (unsigned int)v12;
}
