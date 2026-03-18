/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0250E68
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1C02515CC (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043328 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bp
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD **v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  PVOID v21; // rcx
  DXGKEYEDMUTEX *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE v34[32]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  v7 = a1;
  v8 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v13 = Current;
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, Current);
  v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *((_DWORD *)v13 + 56) )
    goto LABEL_9;
  v17 = v13[26];
  v16 = ((unsigned int)v8 >> 25) & 0x60;
  v15 = *((unsigned int *)v17 + 4 * v18 + 2);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*((_BYTE *)v17 + 16 * v18 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v15 &= 0x1Fu;
  if ( (_BYTE)v15 != 9 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_9:
    v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v20 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
LABEL_10:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
    goto LABEL_11;
  }
  v23 = (DXGKEYEDMUTEX *)*((_QWORD *)v17 + 2 * (unsigned int)v18);
  if ( !v23 )
    goto LABEL_9;
  if ( (*((_DWORD *)v23 + 37) & 1) == 0 )
  {
    v24 = WdLogNewEntry5_WdError(v16, v15, v17);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v24 + 24) = v23;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v23, v15);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  LOBYTE(v25) = 1;
  LOBYTE(v26) = v7;
  v27 = ObCreateObject(v26, g_pDxgkSharedKeyedMutexObjectType, a5, v25, 0LL, 8, 0, 0, &Object);
  v8 = v27;
  if ( v27 >= 0 )
  {
    *(_QWORD *)Object = v23;
  }
  else
  {
    if ( Object )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v31 + 24) = 271LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v32 + 24) = v13;
    *(_QWORD *)(v32 + 32) = v8;
    WdLogEvent5_WdWarning(v32);
    DXGKEYEDMUTEX::ReleaseReference(v23, v33);
  }
  if ( (int)v8 >= 0 )
  {
    v21 = Object;
    goto LABEL_13;
  }
LABEL_11:
  v21 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v21 = 0LL;
  }
LABEL_13:
  *a7 = v21;
  return (unsigned int)v8;
}
