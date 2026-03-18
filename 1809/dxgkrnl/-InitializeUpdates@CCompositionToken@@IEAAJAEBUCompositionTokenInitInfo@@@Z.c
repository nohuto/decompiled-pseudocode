/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000CA24
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000C798 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r9
  void *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v24; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v7 = 3221225485LL;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)a2;
    v9 = *((unsigned int *)this + 20);
    v10 = 0;
    v24 = *(_QWORD *)a2;
    v11 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v4);
    if ( (_DWORD)v9 )
    {
      v12 = *((_QWORD *)this + 9);
      while ( v11 != *(_QWORD *)(v12 + 32LL * v10) )
      {
        if ( ++v10 >= (unsigned int)v9 )
          goto LABEL_9;
      }
      v3 = v12 + 32LL * v10;
LABEL_9:
      v7 = 3221225485LL;
    }
    if ( v10 == (_DWORD)v9 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 3) )
      {
        v2 = -1073741811;
      }
      else
      {
        v13 = *(void **)(v8 + 24 * v4);
        v3 = *((_QWORD *)this + 9) + 32 * v9;
        *(_QWORD *)v3 = v11;
        v2 = CompositionSurfaceObject::ResolveHandle(v13, 2u, 13, (struct CompositionSurfaceObject **)(v3 + 8));
        if ( v2 < 0 )
          goto LABEL_25;
        ++*((_DWORD *)this + 20);
        v14 = *(_QWORD *)(v3 + 8);
        v2 = CPushLock::AcquireLockExclusive((CPushLock *)(v14 + 48));
        if ( v2 >= 0 )
        {
          v2 = 0;
          if ( *(_DWORD *)(v14 + 120)
            && (v15 = *(_QWORD *)(v14 + 104), *(_BYTE *)(v15 + 16))
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v15 - 24) + 80LL))(v15 - 24) )
          {
            v16 = *(_QWORD *)(v15 - 8);
          }
          else
          {
            v2 = -1073741275;
            v16 = 0LL;
          }
          *(_QWORD *)(v3 + 16) = v16;
          v17 = v14 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v14 + 64) )
          {
            *(_QWORD *)(v14 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v17, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v17, 0LL);
          }
          KeLeaveCriticalRegion();
        }
        if ( v2 < 0 )
          goto LABEL_25;
        Global = DXGGLOBAL::GetGlobal();
        v19 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 2541) + 8LL))(v3 + 24);
        v8 = v24;
        v2 = v19;
      }
    }
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 24) + 40LL))(
             *(_QWORD *)(v3 + 24),
             v8 + 8 + 24 * v4,
             v7);
LABEL_25:
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
