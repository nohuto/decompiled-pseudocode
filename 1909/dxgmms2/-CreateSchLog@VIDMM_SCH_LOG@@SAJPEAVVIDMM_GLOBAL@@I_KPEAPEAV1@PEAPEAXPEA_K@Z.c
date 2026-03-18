/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003B9B4
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0038660 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003B980 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F560 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062B94 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C006A270 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C006AF28 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074040 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00824E8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        struct VIDMM_GLOBAL *this,
        unsigned int a2,
        SIZE_T a3,
        struct VIDMM_SCH_LOG **a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v8; // r13
  unsigned __int64 v10; // rdi
  int v11; // esi
  _DWORD *v12; // rax
  struct _MDL *Mdl; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  CVirtualAddressAllocator *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-F8h]
  SIZE_T v27; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+78h] [rbp-A0h] BYREF
  SIZE_T v29; // [rsp+80h] [rbp-98h] BYREF
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+88h] [rbp-90h]
  _QWORD v31[12]; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+120h] [rbp+8h] BYREF
  struct VIDMM_SCH_LOG **v33; // [rsp+138h] [rbp+20h]

  v33 = a4;
  v8 = a2;
  v28 = 0LL;
  memset(v31, 0, 0x58uLL);
  v10 = 0LL;
  if ( (*(_BYTE *)(1560 * v8 + *((_QWORD *)this + 5023) + 436) & 0x20) != 0 )
  {
    v11 = -1073741637;
  }
  else
  {
    v12 = operator new[](0x40uLL, 0x65356956u, PagedPool);
    v10 = (unsigned __int64)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      v12[2] = 0;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_BYTE *)v12 + 56) = 0;
    }
    else
    {
      v10 = 0LL;
    }
    v32 = v10;
    if ( !v10 )
      goto LABEL_7;
    *(_QWORD *)v10 = this;
    *(_DWORD *)(v10 + 8) = v8;
    *(_QWORD *)(v10 + 16) = a3;
    v27 = a3;
    v11 = MmCreateSection(v10 + 24, 0LL, 0LL, &v27, 4, 0x8000000, 0LL, 0LL);
    if ( v11 < 0 )
      goto LABEL_17;
    v29 = a3;
    v11 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v10 + 24), v10 + 32, &v29, &v28, 0LL);
    if ( v11 < 0 )
      goto LABEL_17;
    Mdl = VidMmiAllocateMdl(*(PVOID *)(v10 + 32), a3);
    *(_QWORD *)(v10 + 48) = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      *(_BYTE *)(v10 + 56) = 1;
      v14 = VIDMM_GLOBAL::AdapterId(this);
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v14, v8);
      v32 = 0LL;
      v11 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              a3,
              v15,
              *((_QWORD *)this + 5110),
              *((_QWORD *)this + 5111),
              0x1000u,
              &v32);
      if ( v11 >= 0 )
      {
        v19 = v32;
        *(_QWORD *)(v10 + 40) = v32;
        v26 = a3;
        v20 = VirtualAddressAllocator;
        v21 = CVirtualAddressAllocator::MapVirtualAddressRange(
                VirtualAddressAllocator,
                v10 + 48,
                0LL,
                7LL,
                v26,
                v19,
                0LL,
                0LL,
                4096,
                17LL,
                0LL,
                v8,
                0LL);
        if ( !v21 )
        {
          v24 = WdLogNewEntry5_WdWarning(v23, v22);
          WdLogEvent5_WdWarning(v24);
          v11 = -1073741823;
          goto LABEL_17;
        }
        LODWORD(v31[0]) = 113;
        v31[6] = v21;
        v31[5] = v20;
        HIDWORD(v31[0]) = v8;
        v31[7] = *(_QWORD *)(v10 + 48);
        v11 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v31, 1);
        if ( v11 >= 0 )
        {
          VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, this);
          *a4 = (struct VIDMM_SCH_LOG *)v10;
          *a5 = *(void **)(v10 + 32);
          *a6 = *(_QWORD *)(v10 + 40);
          return (unsigned int)v11;
        }
      }
      v18 = WdLogNewEntry5_WdWarning(v17, v16);
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
LABEL_7:
      v11 = -1073741801;
    }
  }
LABEL_17:
  if ( v10 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v10);
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  return (unsigned int)v11;
}
