/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0139F64
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0250F4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C02236E8 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  int v9; // ebx
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // r8
  struct DXGDEVICESYNCOBJECT *v15; // r14
  PERESOURCE *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  _DWORD *v28; // r15
  PVOID v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGGLOBAL *v39; // rax
  unsigned int NtSharedObject; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v45[8]; // [rsp+58h] [rbp-28h] BYREF
  char v46; // [rsp+60h] [rbp-20h]
  _BYTE v47[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  Object = 0LL;
  v9 = a2;
  v10 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v12, v11, v14);
    LODWORD(v27) = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_31;
  }
  v15 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12, v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v45, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v45);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, (struct _KTHREAD **)Current);
    v22 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v9 == 11 )
    {
      if ( (unsigned int)v22 >= *((_DWORD *)Current + 56) )
        goto LABEL_21;
      v21 = *((_QWORD *)Current + 26);
      v20 = ((unsigned int)v7 >> 25) & 0x60;
      v19 = *(unsigned int *)(v21 + 16 * v22 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v22 + 8) & 0x60)
        || (v19 & 0x2000) != 0
        || (v19 & 0x1F) == 0 )
      {
        goto LABEL_21;
      }
      v19 &= 0x1Fu;
      if ( (_BYTE)v19 != 11 )
      {
        v34 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_21;
      }
      v15 = *(struct DXGDEVICESYNCOBJECT **)(v21 + 16LL * (unsigned int)v22);
      if ( !v15 )
      {
LABEL_21:
        v31 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        LODWORD(v27) = -1073741811;
        *(_QWORD *)(v31 + 24) = v7;
        *(_QWORD *)(v31 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_22;
      }
      a4 = *((_QWORD *)v15 + 4);
LABEL_11:
      if ( a4 )
      {
        if ( (*(_DWORD *)(a4 + 196) & 2) != 0 )
        {
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
          goto LABEL_14;
        }
        _InterlockedIncrement(&dword_1C00A40E4);
        v36 = WdLogNewEntry5_WdError(v20, v19, v21);
        LODWORD(v27) = -1073741811;
        *(_QWORD *)(v36 + 24) = a4;
        *(_QWORD *)(v36 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v36);
LABEL_22:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
        goto LABEL_34;
      }
      goto LABEL_21;
    }
    if ( (unsigned int)v22 < *((_DWORD *)Current + 56) )
    {
      v21 = *((_QWORD *)Current + 26);
      v20 = ((unsigned int)v7 >> 25) & 0x60;
      v19 = *(unsigned int *)(v21 + 16 * v22 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v22 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        v19 &= 0x1Fu;
        if ( v9 == (_DWORD)v19 )
        {
          a4 = *(_QWORD *)(v21 + 16LL * (unsigned int)v22);
          goto LABEL_11;
        }
        v32 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v32 + 24) = 267LL;
        WdLogEvent5_WdError(v32);
      }
    }
    a4 = 0LL;
    goto LABEL_11;
  }
LABEL_14:
  LOBYTE(v18) = a6;
  LOBYTE(v17) = v10;
  v23 = ObCreateObject(v17, g_pDxgkSharedSyncObjectType, a5, v18, 0LL, 16, 0, 0, &Object);
  v27 = v23;
  if ( v23 < 0 )
  {
    if ( Object )
    {
      v37 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v37 + 24) = 402LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v38 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v38 + 24) = Current;
    *(_QWORD *)(v38 + 32) = v27;
    WdLogEvent5_WdWarning(v38);
  }
  else
  {
    v28 = Object;
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 24));
    *(_QWORD *)v28 = a4;
    v28[2] = 0;
    if ( *(_BYTE *)(a4 + 277) )
    {
      v39 = DXGGLOBAL::GetGlobal(v25, v24);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v39 + 164),
                         Current,
                         v7,
                         (struct DXGSYNCOBJECT *)a4,
                         v15,
                         0LL);
      v28[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v35 = WdLogNewEntry5_WdError(v42, v41, v43);
        *(_QWORD *)(v35 + 24) = 428LL;
        WdLogEvent5_WdError(v35);
        LODWORD(v27) = -1073741823;
LABEL_34:
        if ( v46 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
        goto LABEL_31;
      }
    }
  }
  if ( v46 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
  if ( (int)v27 >= 0 )
  {
    v29 = Object;
    goto LABEL_20;
  }
LABEL_31:
  v29 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v29 = 0LL;
  }
LABEL_20:
  *a7 = v29;
  return (unsigned int)v27;
}
