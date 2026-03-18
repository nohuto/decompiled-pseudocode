/*
 * XREFs of ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C0129850
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDestructionBuffers(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 i; // rax
  __int64 v13; // r14
  SIZE_T v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // rsi
  __int64 v18; // r8
  _QWORD *v19; // rax
  void *v20; // rcx

  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 4464LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
  {
    for ( i = *((_QWORD *)a3 + 3); i; ++a2 )
      i = *(_QWORD *)(i + 64);
  }
  if ( a2 <= 0x10 )
    return 0LL;
  v13 = a2;
  v14 = 8LL * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v14 = -1LL;
  v17 = operator new(v14, 0x4B677844u, PagedPool);
  if ( v17 )
  {
    if ( !a4 )
    {
      v20 = (void *)*((_QWORD *)a3 + 8);
      if ( v20 )
        operator delete[](v20);
    }
    *((_QWORD *)a3 + 8) = v17;
    return 0LL;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v18);
  v19[3] = this;
  v19[4] = v13;
  v19[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v19);
  return 3221225495LL;
}
