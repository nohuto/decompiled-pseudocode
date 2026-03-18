/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00116E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011C10 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C0011D14 (-ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // r12d
  int v4; // ebp
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rsi
  char v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rcx
  bool v17; // zf
  int v18; // r14d
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // r12
  int v22; // edi
  void (__fastcall *v23)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, __int64, __int64); // rsi
  unsigned int v24; // eax
  __int64 v25; // rbp
  int v26; // esi
  struct CCompositionBuffer *v27; // rdi
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rdi
  _QWORD *v38; // rbx
  _QWORD *v39; // rcx
  __int64 v41; // rax
  char v42; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp+10h]
  struct CCompositionBuffer *v44; // [rsp+B0h] [rbp+18h] BYREF
  struct CCompositionBuffer *v45; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_23;
  v8 = *((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 48))(v8 + 48) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v8 + 56, 0LL);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 48))(v8 + 48) )
    {
      if ( !*(_DWORD *)(v8 + 120) || (v10 = *(_QWORD **)(v8 + 104), v10 == (_QWORD *)(v8 + 104)) )
      {
LABEL_64:
        v11 = 0;
      }
      else
      {
        while ( *(v10 - 1) != v9 )
        {
          v10 = (_QWORD *)*v10;
          if ( v10 == (_QWORD *)(v8 + 104) )
            goto LABEL_64;
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*(v10 - 3) + 176LL))(v10 - 3);
      }
      v12 = v8 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v8 + 64) )
      {
        *(_QWORD *)(v8 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v12, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v11 == 2 )
        goto LABEL_23;
    }
    else
    {
      CPushLock::ReleaseLock((CPushLock *)(v8 + 48));
    }
  }
  v13 = *((_QWORD *)this + 4);
  v14 = 1;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v13 + 56, 0LL);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
    {
      v15 = *(_DWORD *)(v13 + 124);
      v14 = 0;
      if ( !v15 || v3 > v15 || v15 - v3 > 4 )
        v14 = 1;
      v16 = v13 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v13 + 64) )
      {
        *(_QWORD *)(v13 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v16, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    CPushLock::ReleaseLock((CPushLock *)(v13 + 48));
  }
  v4 = -1073741816;
LABEL_19:
  if ( v4 < 0 )
  {
LABEL_61:
    ++*((_DWORD *)this + 7);
    return (unsigned int)v4;
  }
  if ( v14 || !*((_DWORD *)this + 28) )
    *a3 = 1;
LABEL_23:
  if ( !*a3 )
    goto LABEL_61;
  v17 = *((_BYTE *)this + 559) == 0;
  *((_DWORD *)this + 6) = 3;
  v18 = v17;
  v19 = *((_QWORD *)this + 4);
  v20 = *((_QWORD *)this + 5);
  v43 = *((_DWORD *)this + 26);
  v21 = *(_QWORD *)(v19 + 24);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v41 + 24) = 2200LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v22 = *((unsigned __int8 *)this + 556);
  v23 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, __int64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal
                                                                                                  + 38000)
                                                                                                + 120LL);
  v24 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v23(v19, v43, v24, *((_QWORD *)this + 12), 3, v22, v18, v21, v20);
  v25 = *((_QWORD *)this + 4);
  v42 = 0;
  v26 = CPushLock::AcquireLockExclusive((CPushLock *)(v25 + 48));
  if ( v26 >= 0 )
  {
    v27 = 0LL;
    v26 = -1073741275;
    if ( *(_DWORD *)(v25 + 120) )
    {
      v28 = *(_QWORD **)(v25 + 104);
      if ( v28 != (_QWORD *)(v25 + 104) )
      {
        while ( *(v28 - 1) != *((_QWORD *)this + 5) )
        {
          v28 = (_QWORD *)*v28;
          if ( v28 == (_QWORD *)(v25 + 104) )
            goto LABEL_33;
        }
        v27 = (struct CCompositionBuffer *)(v28 - 3);
        v26 = 0;
      }
    }
LABEL_33:
    if ( v26 >= 0 )
    {
      v26 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, CFlipToken *, char *))(*(_QWORD *)v27 + 120LL))(
              v27,
              this,
              &v42);
      if ( v26 >= 0 )
      {
        if ( v42 )
          CCompositionSurface::ReleaseOlderInactiveBuffers((CCompositionSurface *)(v25 + 40), v27);
      }
    }
    v29 = v25 + 56;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v25 + 64) )
    {
      *(_QWORD *)(v25 + 64) = 0LL;
      ExReleasePushLockExclusiveEx(v29, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v29, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v26 >= 0 )
  {
    *((_BYTE *)this + 88) = v42;
    v30 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(this, *((unsigned int *)a2 + 12));
    if ( v30 )
    {
      v31 = *((_QWORD *)this + 4);
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v31 + 48)) >= 0 )
      {
        *(_DWORD *)(v31 + 124) = v30;
        v32 = v31 + 56;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v31 + 64) )
        {
          *(_QWORD *)(v31 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v32, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v32, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( !*((_BYTE *)this + 48) )
    {
      v33 = *((_QWORD *)this + 12);
      if ( v33 > 1 )
      {
        v34 = v33 - 1;
        v35 = *((_QWORD *)this + 4);
        v36 = *((_QWORD *)this + 5);
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v35 + 48)) >= 0 )
        {
          if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v35 + 40), v36, &v44) >= 0 )
            (*(void (__fastcall **)(struct CCompositionBuffer *, unsigned __int64, _QWORD))(*(_QWORD *)v44 + 104LL))(
              v44,
              v34,
              0LL);
          CPushLock::ReleaseLock((CPushLock *)(v35 + 48));
        }
      }
    }
    v17 = *((_BYTE *)this + 89) == 0;
    *((_QWORD *)this + 12) = 0LL;
    if ( v17 )
    {
      v37 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 89) = 1;
      v38 = (_QWORD *)*((_QWORD *)this + 4);
      if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v38 + 6)) >= 0 )
      {
        if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v38 + 5), v37, &v45) >= 0 )
          (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v45 + 112LL))(v45);
        v39 = v38 + 7;
        if ( KeGetCurrentThread() == (struct _KTHREAD *)v38[8] )
        {
          v38[8] = 0LL;
          ExReleasePushLockExclusiveEx(v39, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v39, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return (unsigned int)v26;
}
