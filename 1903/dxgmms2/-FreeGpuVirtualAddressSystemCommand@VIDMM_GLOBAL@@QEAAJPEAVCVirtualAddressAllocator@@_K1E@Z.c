/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00630AC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001EB4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037EC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00631FC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00776B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0080A54 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  struct _RTL_BALANCED_NODE *v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _RTL_BALANCED_NODE *v12; // r12
  __int64 v13; // rbp
  __int64 i; // rbp
  __int64 *j; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  unsigned int v19; // ecx
  void *v20; // rcx
  __int64 v21; // rax
  _BYTE v22[24]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[80]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a4;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v22,
    (struct CVirtualAddressAllocator *)((char *)a2 + 56));
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a2 + 6);
  v25 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v25, v8);
    if ( started < 0 )
    {
      v8 = v8->Children[0];
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = v8->Children[1];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  if ( v8 )
  {
    if ( ((__int64)v8[3].Children[0] & 0x800) == 0 || a5 )
    {
      v12 = v8[1].Children[0];
      v13 = (char *)v8[1].Children[1] - (char *)v12;
      v24 = (_QWORD *)*((_QWORD *)a2 + 11);
      if ( *((_QWORD *)this + 5115) )
      {
        v18 = operator new[](0x20uLL, 0x32356956u, PagedPool);
        if ( v18 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
          *((_QWORD *)this + 5118) = KeGetCurrentThread();
          v19 = *((_DWORD *)this + 10232);
          if ( v19 == dword_1C004E32C )
          {
            *((_DWORD *)this + 10232) = 0;
            v19 = 0;
          }
          v20 = *(void **)(*((_QWORD *)this + 5115) + 24LL * v19 + 16);
          if ( v20 )
            operator delete(v20);
          *v18 = *v24;
          v18[1] = v24[4];
          v18[2] = v12;
          v18[3] = v13;
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v18;
          *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 15;
          *((_QWORD *)this + 5118) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1748); i = (unsigned int)(i + 1) )
      {
        for ( j = (__int64 *)v8[i + 4].Children[0]; j != (__int64 *)&v8[i + 4]; j = (__int64 *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(this, a2, (struct VIDMM_MAPPED_VA_RANGE *)(j - 1), 1u, 0LL);
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, (struct _KTHREAD **)a2 + 7);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(a2, (struct VIDMM_VAD *)v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
      v17[3] = a2;
      v17[4] = a3;
      v17[5] = 19558LL;
      WdLogEvent5_WdWarning(v17);
    }
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = a3;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
}
