/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0015B70
 * Callers:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0015A1C (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016A70 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r10
  void *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v7 = 3221225485LL;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)a2;
    v9 = *((unsigned int *)this + 20);
    v10 = 0;
    v26 = *(_QWORD *)a2;
    v11 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v4);
    if ( (_DWORD)v9 )
    {
      v24 = *((_QWORD *)this + 9);
      while ( v11 != *(_QWORD *)(v24 + 32LL * v10) )
      {
        if ( ++v10 >= (unsigned int)v9 )
          goto LABEL_35;
      }
      v3 = v24 + 32LL * v10;
LABEL_35:
      v7 = 3221225485LL;
    }
    if ( v10 != (_DWORD)v9 )
      goto LABEL_20;
    if ( (unsigned int)v9 >= *((_DWORD *)a2 + 3) )
    {
      v2 = -1073741811;
LABEL_20:
      if ( v2 >= 0 )
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 24) + 40LL))(
               *(_QWORD *)(v3 + 24),
               v8 + 8 + 24 * v4,
               v7);
      goto LABEL_22;
    }
    v12 = *(void **)(v8 + 24 * v4);
    v3 = *((_QWORD *)this + 9) + 32 * v9;
    *(_QWORD *)v3 = v11;
    v2 = CompositionSurfaceObject::ResolveHandle(v12, 2u, 13, (struct CompositionSurfaceObject **)(v3 + 8));
    if ( v2 >= 0 )
    {
      ++*((_DWORD *)this + 20);
      v2 = 0;
      v13 = *(_QWORD *)(v3 + 8);
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13 + 56, 0LL);
        *(_QWORD *)(v13 + 64) = KeGetCurrentThread();
        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
        {
LABEL_9:
          if ( v2 >= 0 )
          {
            v2 = 0;
            if ( *(_DWORD *)(v13 + 120)
              && (v14 = *(_QWORD *)(v13 + 104), *(_BYTE *)(v14 + 16))
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v14 - 24) + 80LL))(v14 - 24) )
            {
              v15 = *(_QWORD *)(v14 - 8);
            }
            else
            {
              v2 = -1073741275;
              v15 = 0LL;
            }
            *(_QWORD *)(v3 + 16) = v15;
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
            if ( v2 >= 0 )
            {
              if ( !DXGGLOBAL::m_pGlobal )
              {
                v25 = WdLogNewEntry5_WdAssertion(v18, v17);
                *(_QWORD *)(v25 + 24) = 2200LL;
                WdLogEvent5_WdAssertion(v25);
              }
              v19 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 16LL))(v3 + 24);
              v8 = v26;
              v2 = v19;
              goto LABEL_20;
            }
          }
          goto LABEL_22;
        }
        CPushLock::ReleaseLock((CPushLock *)(v13 + 48));
      }
      v2 = -1073741816;
      goto LABEL_9;
    }
LABEL_22:
    v4 = (unsigned int)(v4 + 1);
    v7 = 3221225485LL;
    if ( v2 < 0 )
      break;
  }
  if ( v2 >= 0 )
  {
    v20 = *((_DWORD *)this + 20);
    if ( v20 != *((_DWORD *)a2 + 3) )
      v2 = -1073741811;
    if ( v2 >= 0 )
    {
      v21 = 0;
      if ( v20 )
      {
        do
        {
          v22 = v21++;
          *(_QWORD *)(32 * v22 + *((_QWORD *)this + 9)) = 0LL;
        }
        while ( v21 < *((_DWORD *)this + 20) );
      }
    }
  }
  return (unsigned int)v2;
}
