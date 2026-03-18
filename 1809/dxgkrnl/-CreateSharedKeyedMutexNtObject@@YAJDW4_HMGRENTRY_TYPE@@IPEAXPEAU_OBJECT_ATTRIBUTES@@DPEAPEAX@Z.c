/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C2EC
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C970 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  PVOID v19; // rcx
  DXGKEYEDMUTEX *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[32]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  v8 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, Current);
  v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)v11 + 62) )
    goto LABEL_9;
  v15 = v11[29];
  v14 = ((unsigned int)v8 >> 25) & 0x60;
  v13 = *((unsigned int *)v15 + 4 * v16 + 2);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*((_BYTE *)v15 + 16 * v16 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v13 &= 0x1Fu;
  if ( (_BYTE)v13 != 9 )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_9:
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_10:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
    goto LABEL_11;
  }
  v21 = (DXGKEYEDMUTEX *)*((_QWORD *)v15 + 2 * (unsigned int)v16);
  if ( !v21 )
    goto LABEL_9;
  if ( (*((_DWORD *)v21 + 37) & 1) == 0 )
  {
    v22 = WdLogNewEntry5_WdError(v14);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v22 + 24) = v21;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v21);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  LOBYTE(v23) = 1;
  LOBYTE(v24) = a1;
  v25 = ObCreateObject(v24, g_pDxgkSharedKeyedMutexObjectType, a5, v23, 0LL, 8, 0, 0, &Object);
  v8 = v25;
  if ( v25 >= 0 )
  {
    *(_QWORD *)Object = v21;
  }
  else
  {
    if ( Object )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v29 + 24) = 271LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v30 + 24) = v11;
    *(_QWORD *)(v30 + 32) = v8;
    WdLogEvent5_WdWarning(v30);
    DXGKEYEDMUTEX::ReleaseReference(v21);
  }
  if ( (int)v8 >= 0 )
  {
    v19 = Object;
    goto LABEL_13;
  }
LABEL_11:
  v19 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v19 = 0LL;
  }
LABEL_13:
  *a7 = v19;
  return (unsigned int)v8;
}
