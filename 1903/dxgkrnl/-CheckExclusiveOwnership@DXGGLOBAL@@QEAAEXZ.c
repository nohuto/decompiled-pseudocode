/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C014E060
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C014DFF0 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdx
  struct DXGADAPTER *v5; // rcx
  char *v6; // r14
  char *v7; // rsi
  char *v8; // rbx
  char *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  char v12; // al
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // r9
  __int64 v25; // rcx
  struct DXGADAPTER *v26; // rcx
  unsigned __int8 v27; // di
  DXGFASTMUTEX *v28; // rbx
  __int64 v29; // rdx
  int v30; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  DXGFASTMUTEX *v37; // [rsp+28h] [rbp-89h] BYREF
  char v38; // [rsp+30h] [rbp-81h]
  _QWORD v39[2]; // [rsp+40h] [rbp-71h] BYREF
  char v40; // [rsp+50h] [rbp-61h]
  _BYTE v41[8]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v42; // [rsp+68h] [rbp-49h]
  struct DXGADAPTER *v43; // [rsp+70h] [rbp-41h]
  char v44; // [rsp+78h] [rbp-39h]
  int v45; // [rsp+7Ch] [rbp-35h]
  __int64 v46; // [rsp+80h] [rbp-31h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-9h]
  struct DXGADAPTER *v49; // [rsp+B0h] [rbp-1h]
  char v50; // [rsp+B8h] [rbp+7h]
  int v51; // [rsp+BCh] [rbp+Bh]
  __int64 v52; // [rsp+C0h] [rbp+Fh]

  v37 = (DXGGLOBAL *)((char *)this + 408);
  v38 = 0;
  if ( this == (DXGGLOBAL *)-408LL )
  {
    v32 = WdLogNewEntry5_WdAssertion(-408LL, a2);
    *(_QWORD *)(v32 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v32);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v37 + 2) == CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v33 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v38 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v34[5] = &v37;
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  DXGFASTMUTEX::Acquire(v37);
  v6 = (char *)this + 448;
  v38 = 1;
  v7 = (char *)*((_QWORD *)this + 56);
  while ( 1 )
  {
    do
    {
      if ( v7 == v6 || !v7 )
      {
        v27 = 0;
        goto LABEL_47;
      }
      v8 = v7;
      v9 = v7;
      v7 = *(char **)v7;
      _m_prefetchw(v8 + 24);
      v10 = *((_QWORD *)v8 + 3);
      if ( v10 )
      {
        while ( 1 )
        {
          v5 = (struct DXGADAPTER *)(v10 + 1);
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( !v10 )
            goto LABEL_57;
        }
        v12 = 1;
      }
      else
      {
LABEL_57:
        v12 = 0;
      }
    }
    while ( !v12 );
    v43 = (struct DXGADAPTER *)v8;
    v44 = 0;
    v45 = -1;
    v46 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v42 = -1LL;
    v49 = (struct DXGADAPTER *)v8;
    v50 = 0;
    v51 = -1;
    v52 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v48 = -1LL;
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v8 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    if ( *((_QWORD *)v8 + 319) )
      break;
LABEL_32:
    v26 = v49;
    if ( v49 )
    {
      if ( v50 )
      {
        COREACCESS::Release((COREACCESS *)v47);
        v26 = v49;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v26 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v26);
    }
    v5 = v43;
    if ( v43 )
    {
      if ( v44 )
      {
        COREACCESS::Release((COREACCESS *)v41);
        v5 = v43;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v5 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v5 + 2), v5);
    }
  }
  v39[1] = v8;
  _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
  v39[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 120, 0LL);
  v13 = *((_DWORD *)v8 + 44);
  v40 = 1;
  if ( v13 != 1 )
  {
LABEL_30:
    ExReleasePushLockSharedEx(v8 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v8 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    goto LABEL_32;
  }
  v14 = *((_QWORD *)v8 + 319);
  v15 = *(_QWORD *)(v14 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 160) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 144));
  v16 = *(_DWORD *)(v14 + 80);
  v17 = 0;
  if ( !v16 )
  {
LABEL_24:
    v20 = *((_QWORD *)v8 + 319);
    v21 = *(_QWORD *)(v20 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v21 + 160) )
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v21 + 144));
    v22 = *(_DWORD *)(v20 + 80);
    v23 = 0;
    if ( v22 )
    {
      v24 = *(_QWORD *)(v20 + 112);
      while ( 1 )
      {
        v25 = 3968LL * v23;
        if ( *(_QWORD *)(v25 + v24 + 688) )
        {
          if ( *(_DWORD *)(v25 + v24 + 696) == 3 )
            goto LABEL_58;
        }
        if ( ++v23 >= v22 )
          goto LABEL_30;
      }
    }
    goto LABEL_30;
  }
  v18 = *(_QWORD *)(v14 + 112);
  while ( 1 )
  {
    v19 = 3968LL * v17;
    if ( *(_QWORD *)(v19 + v18 + 688) )
    {
      if ( *(_DWORD *)(v19 + v18 + 696) == 2 )
        break;
    }
    if ( ++v17 >= v16 )
      goto LABEL_24;
  }
LABEL_58:
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  v27 = 1;
LABEL_47:
  if ( v38 )
  {
    v28 = v37;
    v38 = 0;
    if ( *((struct _KTHREAD **)v37 + 2) != KeGetCurrentThread() )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v35[3] = 275LL;
      v35[4] = 4LL;
      v35[5] = v28;
      v35[6] = 0LL;
      v35[7] = 0LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    v29 = *((unsigned int *)v28 + 6);
    if ( (int)v29 <= 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v5, v29);
      *(_QWORD *)(v36 + 24) = 602LL;
      WdLogEvent5_WdAssertion(v36);
      LODWORD(v29) = *((_DWORD *)v28 + 6);
    }
    v30 = v29 - 1;
    *((_DWORD *)v28 + 6) = v30;
    if ( !v30 )
    {
      *((_QWORD *)v28 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v28, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return v27;
}
