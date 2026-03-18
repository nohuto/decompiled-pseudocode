/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0038270 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DecPaintCount @ 0x1C00F1034 (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  struct tagWND *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v25; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) != 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 10);
    }
    while ( v5 );
    if ( v5 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v24 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
      v25 = v5;
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      xxxCompositedPaint(v5);
LABEL_14:
      ThreadUnlock1(v11, v10, a3);
      return;
    }
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v6 + 136) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*(_BYTE *)(v6 + 17) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
      DecPaintCount(a1, v17);
  }
  SetOrClrWF(1LL, a1, 576LL, 1LL);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v14 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v14 + 21) & 2) == 0 && (*(_BYTE *)(v14 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 14) + 80LL) )
  {
    v16 = 38LL;
    v15 = 1LL;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) != 0 )
    {
      v20 = *((_QWORD *)a1 + 2);
      if ( gptiCurrent != v20 )
      {
        v21 = *(_QWORD *)(v20 + 808);
        v22 = v21 + 16;
        v23 = -v21;
        a3 = v22 & -(__int64)(v23 != 0);
        if ( !a3
          || *(_DWORD *)((v22 & -(__int64)(v23 != 0)) + 8) != 15
          || *(_QWORD *)((v22 & -(__int64)(v23 != 0)) + 0x10)
          || *(_QWORD *)((v22 & -(__int64)(v23 != 0)) + 0x18) )
        {
          PostMessage(a1, 15LL, 0LL, 0LL);
        }
        goto LABEL_27;
      }
    }
    v15 = 0LL;
    v16 = 15LL;
  }
  xxxSendMessage(a1, v16, v15, 0LL);
LABEL_27:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (v3 & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 3);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( v9 )
        v8 = *(struct tagWND **)(v9 + 24);
    }
    if ( a1 != v8 )
    {
      v10 = 0LL;
      v11 = gptiCurrent;
      v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      v12 = *((_QWORD *)a1 + 11);
      v25 = 0LL;
      while ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 24) & 0x20) == 0 || !*(_QWORD *)(v13 + 136) && (*(_BYTE *)(v13 + 17) & 0x10) == 0 )
          goto LABEL_17;
        a3 = *(_QWORD *)(v12 + 64);
        v11 = a3;
        if ( !a3 )
          goto LABEL_17;
        do
        {
          v18 = *(_QWORD *)(v11 + 40);
          if ( *(_QWORD *)(v18 + 136) )
            break;
          if ( (*(_BYTE *)(v18 + 17) & 0x10) != 0 )
            break;
          v11 = *(_QWORD *)(v11 + 64);
        }
        while ( v11 );
        if ( v11 )
        {
          v12 = *(_QWORD *)(v12 + 64);
        }
        else
        {
LABEL_17:
          v25 = (struct tagWND *)v12;
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          if ( v10 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
              HMUnlockObjectInternal(v10, v10, a3);
          }
          xxxUpdateWindow2((struct tagWND *)v12, v3 | 4);
          v10 = v25;
          v12 = *(_QWORD *)(v12 + 64);
        }
      }
      goto LABEL_14;
    }
  }
}
