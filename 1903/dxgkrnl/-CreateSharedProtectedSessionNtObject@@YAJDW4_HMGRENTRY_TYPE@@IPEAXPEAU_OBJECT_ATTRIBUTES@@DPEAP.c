/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0250A58
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0250F4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0043198 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int v7; // r15d
  __int64 v8; // rbx
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  PVOID v34; // rcx
  _BYTE v36[8]; // [rsp+50h] [rbp-10h] BYREF
  char v37; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v7 = a2;
  v8 = a3;
  v9 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v13);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_22;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v36, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)Current + 56) )
    goto LABEL_9;
  v17 = *((_QWORD *)Current + 26);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v19 = v18 & 0x1F;
  if ( v7 != (_DWORD)v19 )
  {
    v20 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v19, v17);
    *(_QWORD *)(v20 + 24) = 267LL;
    WdLogEvent5_WdError(v20);
LABEL_9:
    v21 = 0LL;
    goto LABEL_10;
  }
  v21 = *(_QWORD *)(v17 + 16LL * (unsigned int)v16);
LABEL_10:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v21 )
  {
    LOBYTE(v25) = a6;
    LOBYTE(v23) = v9;
    v27 = ObCreateObject(v23, g_pDxgkSharedProtectedSessionObjectType, a5, v25, 0LL, 8, 0, 0, &Object);
    v8 = v27;
    if ( v27 >= 0 )
    {
      v33 = Object;
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 72));
      *v33 = v21;
    }
    else
    {
      if ( Object )
      {
        v31 = WdLogNewEntry5_WdAssertion(v29, v28);
        *(_QWORD *)(v31 + 24) = 509LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v32 + 24) = Current;
      *(_QWORD *)(v32 + 32) = v8;
      WdLogEvent5_WdWarning(v32);
    }
    if ( v37 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
    if ( (int)v8 >= 0 )
    {
      v34 = Object;
      goto LABEL_25;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    if ( v37 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
  }
LABEL_22:
  v34 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v34 = 0LL;
  }
LABEL_25:
  *a7 = v34;
  return (unsigned int)v8;
}
