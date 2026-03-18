/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0139D20
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0250F4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0017330 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00EE57C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0139F28 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C02236E8 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  char v9; // r15
  struct _KTHREAD **Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD **v15; // r14
  __int64 v16; // rax
  struct _KTHREAD *v17; // r9
  int v18; // edx
  __int64 v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGRESOURCE *v26; // rbx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  __int64 v45; // rax
  __int64 v46; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int NtSharedObject; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  struct DXGRESOURCE *v51; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v53; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v54[24]; // [rsp+68h] [rbp-18h] BYREF

  Object = 0LL;
  v8 = a3;
  v9 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v15 = Current;
  if ( !Current )
  {
    v39 = WdLogNewEntry5_WdError(v12, v11, v13);
    LODWORD(v33) = -1073741811;
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_25;
  }
  v51 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, Current);
    v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)v15 + 56) )
    {
      v17 = v15[26];
      v18 = *((_DWORD *)v17 + 4 * v16 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v17 + 16 * v16 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        v19 = v18 & 0x1F;
        if ( (_BYTE)v19 == 4 )
        {
          v20 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v17 + 2 * (unsigned int)v16);
LABEL_11:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v53, v20);
          DXGRESOURCEREFERENCE::MoveAssign(&v51, &v53);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v53, v22);
          v26 = v51;
          if ( v51 && (*((_DWORD *)v51 + 1) & 1) != 0 && (a4 = *((_QWORD *)v51 + 7)) != 0 )
          {
            if ( (*(_DWORD *)(a4 + 12) & 8) == 0 )
            {
              v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
              v40[3] = *((_QWORD *)v26 + 7);
              goto LABEL_31;
            }
            _m_prefetchw((const void *)(a4 + 60));
            v27 = *(_DWORD *)(a4 + 60);
            while ( v27 )
            {
              v24 = (unsigned int)(v27 + 1);
              v28 = v27;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 60), v24, v27);
              if ( v28 == v27 )
              {
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
                goto LABEL_19;
              }
            }
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
            v40[5] = 105LL;
          }
          else
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
          }
          v40[3] = v8;
LABEL_31:
          LODWORD(v33) = -1073741811;
          v40[4] = -1073741811LL;
          WdLogEvent5_WdWarning(v40);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
LABEL_32:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v51, v41);
          goto LABEL_25;
        }
        v21 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v19, 2LL * (unsigned int)v16);
        *(_QWORD *)(v21 + 24) = 267LL;
        WdLogEvent5_WdError(v21);
      }
    }
    v20 = 0LL;
    goto LABEL_11;
  }
  _m_prefetchw((const void *)(a4 + 60));
  v43 = *(_DWORD *)(a4 + 60);
  do
  {
    if ( !v43 )
      break;
    v12 = (unsigned int)(v43 + 1);
    v44 = v43;
    v43 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 60), v12, v43);
  }
  while ( v44 != v43 );
LABEL_19:
  LOBYTE(v14) = a6;
  LOBYTE(v12) = v9;
  v29 = ObCreateObject(v12, g_pDxgkSharedAllocationObjectType, a5, v14, 0LL, 48, 0, 0, &Object);
  v33 = v29;
  if ( v29 < 0 )
  {
    if ( Object )
    {
      v45 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v45 + 24) = 137LL;
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v46 + 24) = v15;
    *(_QWORD *)(v46 + 32) = v33;
    WdLogEvent5_WdWarning(v46);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a4 + 60), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)a4, 0LL, 0);
  }
  else
  {
    v34 = Object;
    ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(a4 + 72), (struct _LIST_ENTRY *)Object);
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 56));
    v34[3] = 0LL;
    v34[4] = 0LL;
    *((_DWORD *)v34 + 10) = 0;
    v34[2] = a4;
    v36 = *(_QWORD *)(*(_QWORD *)(a4 + 72) + 16LL);
    if ( *(_BYTE *)(v36 + 185) )
    {
      Global = DXGGLOBAL::GetGlobal(v36, v35);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)Global + 164),
                         (struct DXGPROCESS *)v15,
                         0,
                         0LL,
                         0LL,
                         v51);
      *((_DWORD *)v34 + 10) = NtSharedObject;
      if ( !NtSharedObject )
      {
        v42 = WdLogNewEntry5_WdError(v49, v35, v50);
        *(_QWORD *)(v42 + 24) = 169LL;
        WdLogEvent5_WdError(v42);
        LODWORD(v33) = -1073741823;
        goto LABEL_32;
      }
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v51, v35);
  if ( (int)v33 >= 0 )
  {
    v37 = Object;
    goto LABEL_23;
  }
LABEL_25:
  v37 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v37 = 0LL;
  }
LABEL_23:
  *a7 = v37;
  return (unsigned int)v33;
}
