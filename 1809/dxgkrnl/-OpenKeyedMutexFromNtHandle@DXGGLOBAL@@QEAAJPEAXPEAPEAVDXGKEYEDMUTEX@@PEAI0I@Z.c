/*
 * XREFs of ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C023525C
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C021E270 (DxgkOpenKeyedMutexFromNtHandle.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C00AD3A0 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutexFromNtHandle(
        DXGGLOBAL *this,
        void *a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp+18h] BYREF

  Object = this;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 4320LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 4321LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedKeyedMutexObjectType, 1, &Object, &HandleInformation);
  v15 = v11;
  if ( v11 == -1073741788 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v15;
  }
  else if ( v11 >= 0 )
  {
    v19 = (__int64 *)Object;
    if ( !Object )
    {
      v20 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v20 + 24) = 4356LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *v19;
    _m_prefetchw((const void *)(v21 + 24));
    v22 = *(_QWORD *)(v21 + 24);
    do
    {
      if ( !v22 )
      {
        ObfDereferenceObject(Object);
        v18 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        v15 = -1073741811LL;
        goto LABEL_15;
      }
      v23 = v22;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), v22 + 1, v22);
    }
    while ( v23 != v22 );
    ObfDereferenceObject(Object);
    v27 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v21, a4, a5, a6, 1);
    v31 = v27;
    if ( v27 < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v32 + 24) = a2;
      *(_QWORD *)(v32 + 32) = v31;
      WdLogEvent5_WdWarning(v32);
    }
    else
    {
      *a3 = (struct DXGKEYEDMUTEX *)v21;
    }
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v21);
    return (unsigned int)v31;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14);
LABEL_15:
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = v15;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v15;
  }
}
