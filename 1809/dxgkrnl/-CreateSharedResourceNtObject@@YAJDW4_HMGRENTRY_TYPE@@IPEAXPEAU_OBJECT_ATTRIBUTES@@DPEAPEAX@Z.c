/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BDB0
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0016234 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C01F39B8 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  struct _KTHREAD **v13; // r14
  __int64 v14; // rax
  struct _KTHREAD *v15; // r9
  int v16; // edx
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGRESOURCE *v21; // rbx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  PVOID v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rax
  __int64 v40; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int NtSharedObject; // eax
  __int64 v43; // rcx
  struct DXGRESOURCE *v44; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v47[24]; // [rsp+68h] [rbp-18h] BYREF

  Object = 0LL;
  v8 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v13 = Current;
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v11);
    LODWORD(v28) = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_23;
  }
  v44 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, Current);
    v14 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)v13 + 62) )
    {
      v15 = v13[29];
      v16 = *((_DWORD *)v15 + 4 * v14 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v15 + 16 * v14 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        if ( (v16 & 0x1F) == 4 )
        {
          v17 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v15 + 2 * (unsigned int)v14);
LABEL_9:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v46, v17);
          DXGRESOURCEREFERENCE::MoveAssign(&v44, (struct DXGRESOURCE **)&v46);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v46);
          v21 = v44;
          if ( v44 && (*((_DWORD *)v44 + 1) & 1) != 0 && (a4 = *((_QWORD *)v44 + 7)) != 0 )
          {
            if ( (*(_DWORD *)(a4 + 12) & 8) == 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
              v35[3] = *((_QWORD *)v21 + 7);
              goto LABEL_31;
            }
            _m_prefetchw((const void *)(a4 + 60));
            v22 = *(_DWORD *)(a4 + 60);
            while ( v22 )
            {
              v19 = (unsigned int)(v22 + 1);
              v23 = v22;
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 60), v19, v22);
              if ( v23 == v22 )
              {
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
                goto LABEL_17;
              }
            }
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
            v35[5] = 105LL;
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
          }
          v35[3] = v8;
LABEL_31:
          LODWORD(v28) = -1073741811;
          v35[4] = -1073741811LL;
          WdLogEvent5_WdWarning(v35);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
LABEL_32:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
          goto LABEL_23;
        }
        v34 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
        *(_QWORD *)(v34 + 24) = 316LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v17 = 0LL;
    goto LABEL_9;
  }
  _m_prefetchw((const void *)(a4 + 60));
  v37 = *(_DWORD *)(a4 + 60);
  do
  {
    if ( !v37 )
      break;
    v11 = (unsigned int)(v37 + 1);
    v38 = v37;
    v37 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 60), v11, v37);
  }
  while ( v38 != v37 );
LABEL_17:
  LOBYTE(v12) = a6;
  LOBYTE(v11) = a1;
  v24 = ObCreateObject(v11, g_pDxgkSharedAllocationObjectType, a5, v12, 0LL, 48, 0, 0, &Object);
  v28 = v24;
  if ( v24 < 0 )
  {
    if ( Object )
    {
      v39 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v39 + 24) = 137LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v40 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v40 + 24) = v13;
    *(_QWORD *)(v40 + 32) = v28;
    WdLogEvent5_WdWarning(v40);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a4 + 60), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)a4, 0LL, 0);
  }
  else
  {
    v29 = Object;
    ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(a4 + 72), (struct _LIST_ENTRY *)Object);
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 56));
    v29[3] = 0LL;
    v29[4] = 0LL;
    *((_DWORD *)v29 + 10) = 0;
    v29[2] = a4;
    v30 = *(_QWORD *)(*(_QWORD *)(a4 + 72) + 16LL);
    if ( *(_BYTE *)(v30 + 185) )
    {
      Global = DXGGLOBAL::GetGlobal(v30);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)Global + 168),
                         (struct DXGPROCESS *)v13,
                         0,
                         0LL,
                         0LL,
                         v44);
      *((_DWORD *)v29 + 10) = NtSharedObject;
      if ( !NtSharedObject )
      {
        v36 = WdLogNewEntry5_WdError(v43);
        *(_QWORD *)(v36 + 24) = 169LL;
        WdLogEvent5_WdError(v36);
        LODWORD(v28) = -1073741823;
        goto LABEL_32;
      }
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
  if ( (int)v28 >= 0 )
  {
    v31 = Object;
    goto LABEL_21;
  }
LABEL_23:
  v31 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v31 = 0LL;
  }
LABEL_21:
  *a7 = v31;
  return (unsigned int)v28;
}
