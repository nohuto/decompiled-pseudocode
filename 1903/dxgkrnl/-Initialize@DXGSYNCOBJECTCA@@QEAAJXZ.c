/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C02696CC
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F5F0C (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v10; // rax
  int v11; // eax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x4B677844u);
  v7 = 0LL;
  *((_QWORD *)this + 38) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v10 = (_QWORD *)(*((_QWORD *)this + 38) + 16LL);
    v10[1] = v10;
    *v10 = v10;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 38) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 38));
    v11 = *((_DWORD *)this + 48);
    if ( v11 == 3 || v11 == 5 )
      v7 = *((_QWORD *)this + 25);
    *(_QWORD *)(*((_QWORD *)this + 38) + 40LL) = v7;
    *(_QWORD *)(*((_QWORD *)this + 38) + 32LL) = v7;
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
