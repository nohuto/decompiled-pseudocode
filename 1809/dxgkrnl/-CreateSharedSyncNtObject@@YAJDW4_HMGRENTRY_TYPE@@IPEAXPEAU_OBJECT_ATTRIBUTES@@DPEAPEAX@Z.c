/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BFA4
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C01F39B8 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        char a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGDEVICESYNCOBJECT *v13; // r15
  PERESOURCE *Global; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  _DWORD *v26; // r14
  __int64 v27; // rcx
  PVOID v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGGLOBAL *v38; // rax
  unsigned int NtSharedObject; // eax
  __int64 v40; // rcx
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v42[8]; // [rsp+58h] [rbp-28h] BYREF
  char v43; // [rsp+60h] [rbp-20h]
  _BYTE v44[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v11);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_29;
  }
  v13 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v44, (struct _KTHREAD **)Current);
    v20 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( a2 == 11 )
    {
      if ( (unsigned int)v20 >= *((_DWORD *)Current + 62) )
        goto LABEL_32;
      v19 = *((_QWORD *)Current + 29);
      v18 = ((unsigned int)v7 >> 25) & 0x60;
      v17 = *(unsigned int *)(v19 + 16 * v20 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v20 + 8) & 0x60)
        || (v17 & 0x2000) != 0
        || (v17 & 0x1F) == 0 )
      {
        goto LABEL_32;
      }
      v17 &= 0x1Fu;
      if ( (_BYTE)v17 != 11 )
      {
        v31 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v31 + 24) = 316LL;
        WdLogEvent5_WdError(v31);
        goto LABEL_32;
      }
      v13 = *(struct DXGDEVICESYNCOBJECT **)(v19 + 16LL * (unsigned int)v20);
      if ( !v13 )
      {
LABEL_32:
        v32 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        LODWORD(v25) = -1073741811;
        *(_QWORD *)(v32 + 24) = v7;
        *(_QWORD *)(v32 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v32);
        goto LABEL_34;
      }
      a4 = *((_QWORD *)v13 + 4);
    }
    else
    {
      if ( (unsigned int)v20 < *((_DWORD *)Current + 62) )
      {
        v19 = *((_QWORD *)Current + 29);
        v18 = ((unsigned int)v7 >> 25) & 0x60;
        v17 = *(unsigned int *)(v19 + 16 * v20 + 8);
        if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v20 + 8) & 0x60)
          && (v17 & 0x2000) == 0
          && (v17 & 0x1F) != 0 )
        {
          v17 &= 0x1Fu;
          if ( a2 == (_DWORD)v17 )
          {
            a4 = *(_QWORD *)(v19 + 16LL * (unsigned int)v20);
            goto LABEL_11;
          }
          v35 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v35 + 24) = 316LL;
          WdLogEvent5_WdError(v35);
        }
      }
      a4 = 0LL;
    }
LABEL_11:
    if ( a4 )
    {
      if ( (*(_DWORD *)(a4 + 172) & 2) != 0 )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
        goto LABEL_14;
      }
      _InterlockedIncrement(&dword_1C008EE14);
      v33 = WdLogNewEntry5_WdError(v18);
      LODWORD(v25) = -1073741811;
      *(_QWORD *)(v33 + 24) = a4;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v33);
LABEL_34:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
      goto LABEL_35;
    }
    goto LABEL_32;
  }
LABEL_14:
  LOBYTE(v16) = a6;
  LOBYTE(v15) = a1;
  v21 = ObCreateObject(v15, g_pDxgkSharedSyncObjectType, a5, v16, 0LL, 16, 0, 0, &Object);
  v25 = v21;
  if ( v21 < 0 )
  {
    if ( Object )
    {
      v36 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v36 + 24) = 402LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v37 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v37 + 24) = Current;
    *(_QWORD *)(v37 + 32) = v25;
    WdLogEvent5_WdWarning(v37);
  }
  else
  {
    v26 = Object;
    DXGSYNCOBJECT::AddReference((DXGSYNCOBJECT *)a4);
    *(_QWORD *)v26 = a4;
    v26[2] = 0;
    if ( *(_BYTE *)(a4 + 253) )
    {
      v38 = DXGGLOBAL::GetGlobal(v27);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v38 + 168),
                         Current,
                         v7,
                         (struct DXGSYNCOBJECT *)a4,
                         v13,
                         0LL);
      v26[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v34 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v34 + 24) = 428LL;
        WdLogEvent5_WdError(v34);
        LODWORD(v25) = -1073741823;
LABEL_35:
        if ( v43 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
        goto LABEL_29;
      }
    }
  }
  if ( v43 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
  if ( (int)v25 >= 0 )
  {
    v28 = Object;
    goto LABEL_20;
  }
LABEL_29:
  v28 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v28 = 0LL;
  }
LABEL_20:
  *a7 = v28;
  return (unsigned int)v25;
}
