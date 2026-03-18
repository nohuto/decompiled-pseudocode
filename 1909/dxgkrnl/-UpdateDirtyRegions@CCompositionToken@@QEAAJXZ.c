/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C005A954
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0018580 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00123B0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C005C48C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C005CD10 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // ebx
  unsigned int i; // edi
  _QWORD *v4; // rax
  const struct IRegion *v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  CPushLock *v8; // r12
  int Buffer; // esi
  struct CCompositionBuffer *v10; // r14
  struct CFlipExBuffer *v11; // rax
  struct CCompositionBuffer *v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = (const struct IRegion *)v4[3];
    v6 = v4[1];
    if ( v5 )
    {
      v7 = v4[2];
      v8 = (CPushLock *)(v6 + 48);
      Buffer = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 48));
      if ( Buffer >= 0 )
      {
        Buffer = CCompositionSurface::FindBuffer((CCompositionSurface *)(v6 + 40), v7, &v13);
        if ( Buffer >= 0 )
        {
          v10 = v13;
          if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v13 + 80LL))(v13) )
          {
            v11 = CFlipExBuffer::FromBuffer(v10);
            if ( *((_DWORD *)v11 + 87) == -1 )
              *((_DWORD *)v11 + 87) = 0;
            *((_DWORD *)v11 + 12) = 1;
            CCompositionBuffer::NotifyDirty(v11, v5, 0LL);
          }
          else
          {
            Buffer = -1073741811;
          }
        }
        CPushLock::ReleaseLock(v8);
      }
      if ( v1 >= 0 && Buffer < 0 )
        v1 = Buffer;
    }
  }
  return (unsigned int)v1;
}
