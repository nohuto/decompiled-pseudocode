/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C55C
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C003C940 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        char a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  PVOID v31; // rcx
  _BYTE v33[8]; // [rsp+50h] [rbp-10h] BYREF
  char v34; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v8 = a3;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_22;
  }
  Global = DXGGLOBAL::GetGlobal(v10);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v33, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v14 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)Current + 62) )
    goto LABEL_9;
  v15 = *((_QWORD *)Current + 29);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( a2 != (*(_DWORD *)(v15 + 16 * v14 + 8) & 0x1F) )
  {
    v17 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_9:
    v18 = 0LL;
    goto LABEL_10;
  }
  v18 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
LABEL_10:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 )
  {
    LOBYTE(v22) = a6;
    LOBYTE(v20) = a1;
    v24 = ObCreateObject(v20, g_pDxgkSharedProtectedSessionObjectType, a5, v22, 0LL, 8, 0, 0, &Object);
    v8 = v24;
    if ( v24 >= 0 )
    {
      v30 = Object;
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 72));
      *v30 = v18;
    }
    else
    {
      if ( Object )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v28 + 24) = 509LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v29 + 24) = Current;
      *(_QWORD *)(v29 + 32) = v8;
      WdLogEvent5_WdWarning(v29);
    }
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    if ( (int)v8 >= 0 )
    {
      v31 = Object;
      goto LABEL_25;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  }
LABEL_22:
  v31 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v31 = 0LL;
  }
LABEL_25:
  *a7 = v31;
  return (unsigned int)v8;
}
