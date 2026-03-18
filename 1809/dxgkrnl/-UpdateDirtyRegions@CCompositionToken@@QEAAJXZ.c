/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C000C888
 * Callers:
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000C680 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C00165D0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C0055AD0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // esi
  unsigned int i; // r14d
  _QWORD *v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // edi
  _QWORD *v9; // r15
  _QWORD *j; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = v4[3];
    v6 = v4[1];
    if ( v5 )
    {
      v7 = v4[2];
      v8 = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 48));
      if ( v8 >= 0 )
      {
        v9 = 0LL;
        v8 = -1073741275;
        if ( *(_DWORD *)(v6 + 120) )
        {
          for ( j = *(_QWORD **)(v6 + 104); j != (_QWORD *)(v6 + 104); j = (_QWORD *)*j )
          {
            if ( *(j - 1) == v7 )
            {
              v9 = j - 3;
              v8 = 0;
              break;
            }
          }
        }
        if ( v8 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v9 + 80LL))(v9) )
          {
            v11 = 0LL;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v9 + 80LL))(v9) )
              v11 = v9;
            if ( *((_DWORD *)v11 + 87) == -1 )
              *((_DWORD *)v11 + 87) = 0;
            *((_DWORD *)v11 + 12) = 1;
            if ( *((_DWORD *)v11 + 64) )
            {
              CCompositionBuffer::AddScrollAsDirty(
                (CCompositionBuffer *)v11,
                (const struct ScrollOptimization *)(v11 + 32));
              *((_DWORD *)v11 + 64) = 0;
              *((_BYTE *)v11 + 42) = 1;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) )
            {
              (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v11[31] + 48LL))(v11[31], v5, 2LL);
              *((_BYTE *)v11 + 42) = 1;
            }
          }
          else
          {
            v8 = -1073741811;
          }
        }
        v12 = v6 + 56;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v6 + 64) )
        {
          *(_QWORD *)(v6 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v12, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v12, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      if ( v1 >= 0 && v8 < 0 )
        v1 = v8;
    }
  }
  return (unsigned int)v1;
}
