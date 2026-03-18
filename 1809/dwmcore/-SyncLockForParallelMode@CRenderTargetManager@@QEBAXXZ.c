/*
 * XREFs of ?SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ @ 0x18006462C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x18007E5E8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::SyncLockForParallelMode(CRenderTargetManager *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  _QWORD *v4; // rsi
  unsigned int v5; // edx
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 j; // r8
  char *v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+34h] [rbp-24h]
  unsigned int i; // [rsp+38h] [rbp-20h]
  _QWORD *v21; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  v1 = 0;
  v19 = 0;
  v2 = 0LL;
  v17 = 0LL;
  for ( i = 0; (unsigned int)v2 < *((_DWORD *)this + 12); v2 = (unsigned int)(v2 + 1) )
  {
    v4 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v2);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v4 + 48LL))(v4, 76LL) )
    {
      v21 = v4;
      v5 = *(_DWORD *)(v4[21] + 316LL);
      if ( v5 )
      {
        for ( j = 0LL; (unsigned int)j < v1; j = (unsigned int)(j + 1) )
        {
          if ( v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * j) + 168LL) + 316LL) )
            break;
        }
        DynArray<CHwndRenderTarget *,0>::InsertAt(&v17, &v21, j);
        v1 = i;
      }
    }
  }
  v6 = (_QWORD *)v17;
  v7 = 0LL;
  while ( (unsigned int)v7 < v1 )
  {
    v9 = (char *)&v6[v7];
    v10 = 0;
    v11 = v7;
    if ( (unsigned int)v7 >= v1 )
      break;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v6[v11] + 168LL) + 316LL) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 168LL) + 316LL) )
        break;
      ++v11;
      v12 = *(_DWORD *)(*(_QWORD *)v9 + 540LL) < *(_DWORD *)(*(_QWORD *)v9 + 536LL)
          ? *(_DWORD *)(*(_QWORD *)v9 + 536LL) - *(_DWORD *)(*(_QWORD *)v9 + 540LL)
          : 0;
      if ( v10 > v12 )
        v12 = v10;
      v10 = v12;
    }
    while ( v11 < v1 );
    if ( (unsigned int)v7 < v11 )
    {
      v13 = v11 - v7;
      v14 = v13;
      v7 = v13 + (unsigned int)v7;
      do
      {
        v15 = *(_QWORD *)v9;
        v16 = *(unsigned int *)(*(_QWORD *)v9 + 536LL);
        if ( v10 > ((*(_DWORD *)(*(_QWORD *)v9 + 536LL) - *(_DWORD *)(*(_QWORD *)v9 + 540LL)) & (unsigned int)-(*(_DWORD *)(*(_QWORD *)v9 + 540LL) < (unsigned int)v16))
          && *(_QWORD *)(v15 + 176)
          && !*(_BYTE *)(v15 + 859) )
        {
          *(_BYTE *)(v15 + 857) = 1;
          LOBYTE(v16) = 1;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v15 + 64) + 64LL))(v15 + 64, v16, 0LL);
        }
        v9 += 8;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v6 != *((_QWORD **)&v17 + 1) )
    WPF::ProcessHeapImpl::Free(v6);
}
