/*
 * XREFs of VidSchInsertContextAllocation @ 0x1C007DCA4
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007DA00 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v18; // rax

  v9 = operator new[](0x20uLL, 0x31366956u, PagedPool);
  v12 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x20uLL);
    v12[3] = a4;
    v13 = a2 + 688;
    v14 = *a4;
    v15 = a2 + 664;
    if ( (*(_DWORD *)(*(_QWORD *)v14 + 76LL) & 0x10000000) == 0 )
    {
      v13 = a3 + 328;
      v15 = a3 + 304;
    }
    v12[2] = v15;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    v16 = *(_QWORD **)(v13 + 8);
    if ( *v16 != v13 )
      __fastfail(3u);
    *v12 = v13;
    v12[1] = v16;
    *v16 = v12;
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 52) = 1;
    *a5 = v12;
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10);
    WdLogEvent5_WdWarning(v18);
    *a5 = 0LL;
    return 3221225495LL;
  }
}
