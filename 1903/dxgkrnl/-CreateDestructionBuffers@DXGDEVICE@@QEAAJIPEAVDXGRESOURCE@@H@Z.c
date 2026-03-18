/*
 * XREFs of ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C01397B8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDestructionBuffers(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  SIZE_T v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID v18; // rdi
  __int64 v19; // r8
  _QWORD *v20; // rax
  void *v21; // rcx

  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v13 + 24) = 4459LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
  {
    v12 = *((_QWORD *)a3 + 3);
    while ( v12 )
    {
      v12 = *(_QWORD *)(v12 + 64);
      ++a2;
    }
  }
  if ( a2 <= 0x10 )
    return 0LL;
  v14 = a2;
  v15 = 8LL * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v15 = -1LL;
  v18 = operator new[](v15, 0x4B677844u, PagedPool);
  if ( v18 )
  {
    if ( !a4 )
    {
      v21 = (void *)*((_QWORD *)a3 + 8);
      if ( v21 )
        operator delete[](v21);
    }
    *((_QWORD *)a3 + 8) = v18;
    return 0LL;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v19);
  v20[3] = this;
  v20[4] = v14;
  v20[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v20);
  return 3221225495LL;
}
