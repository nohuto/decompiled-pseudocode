/*
 * XREFs of ?SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ @ 0x1800C1F3C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$0A@@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18018789C (-InsertAt@-$DynArray@PEAVCRenderTarget@@$0A@@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 */

void __fastcall CRenderTargetManager::SyncLockForParallelMode(CRenderTargetManager *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  unsigned int v4; // r15d
  _QWORD *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rdi
  _QWORD **v8; // r12
  unsigned int v9; // r12d
  _QWORD *v10; // r15
  int v11; // eax
  unsigned int v12; // esi
  int v13; // edi
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rsi
  void *lpMem[2]; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+30h] [rbp-10h]
  int v19; // [rsp+34h] [rbp-Ch]
  unsigned int i; // [rsp+38h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF

  v18 = 0;
  v1 = 0;
  v19 = 0;
  v2 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  for ( i = 0; (unsigned int)v2 < *((_DWORD *)this + 12); v2 = (unsigned int)(v2 + 1) )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 80LL) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 296LL))(v21);
      if ( v4 )
      {
        v7 = 0LL;
        if ( v1 )
        {
          v8 = (_QWORD **)lpMem[0];
          do
          {
            if ( v4 <= (*(unsigned int (__fastcall **)(_QWORD *))(*v8[v7] + 296LL))(v8[v7]) )
              break;
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v1 );
        }
        DynArray<CRenderTarget *,0>::InsertAt(lpMem, &v21, (unsigned int)v7);
        v1 = i;
      }
    }
  }
  v5 = lpMem[0];
  v6 = 0;
  LODWORD(v21) = 0;
  while ( v6 < v1 )
  {
    v9 = 0;
    v10 = &v5[v6];
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 296LL))(*v10);
    v12 = v6;
    if ( v6 >= v1 )
      break;
    v13 = v11;
    do
    {
      v14 = v5[v12];
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 296LL))(v14) != v13 )
        break;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 312LL))(v14);
      if ( v9 <= v15 )
        v9 = v15;
      ++v12;
    }
    while ( v12 < v1 );
    v6 = v21;
    if ( (unsigned int)v21 < v12 )
    {
      v16 = v12 - (unsigned int)v21;
      v6 = v16 + v21;
      LODWORD(v21) = v16 + v21;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 304LL))(*v10, v9);
        ++v10;
        --v16;
      }
      while ( v16 );
    }
  }
  if ( v5 != lpMem[1] )
    operator delete(v5);
}
