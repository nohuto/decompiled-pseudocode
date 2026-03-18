/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64
 * Callers:
 *     DxgkDestroyOutputDupl @ 0x1C0240400 (DxgkDestroyOutputDupl.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C02405A0 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C0240780 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C0240980 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C0240C60 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C023FAA8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdi
  __int64 v11; // rax
  int v13; // eax
  struct DXGADAPTER **v14; // r9
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // ebx
  struct DXGADAPTER *v20; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v21; // [rsp+38h] [rbp-30h] BYREF

  v5 = a1;
  Current = DXGPROCESS::GetCurrent();
  v10 = (struct _KTHREAD **)Current;
  if ( Current )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL);
    v14 = &v20;
    v20 = 0LL;
    if ( v13 )
      v14 = 0LL;
    v15 = v13;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v21, v5, v10, v14, 1);
    if ( v15 || v20 )
    {
      v19 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(v20, v16, a2, a3, a4);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(0LL, v16, v17);
      v19 = -1073741811;
      *(_QWORD *)(v18 + 24) = v5;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
    }
    if ( v21 )
      DXGADAPTER::ReleaseReference(v21);
    return v19;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 43LL;
    WdLogEvent5_WdError(v11);
    return -1073741811LL;
  }
}
