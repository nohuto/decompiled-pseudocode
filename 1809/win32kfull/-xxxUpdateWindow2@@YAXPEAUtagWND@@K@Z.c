/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F76E0 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x1C00F7870 (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  struct tagWND *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v21; // [rsp+28h] [rbp-20h]

  v2 = a2;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 27LL) & 2) != 0 )
        break;
      v4 = (struct tagWND *)*((_QWORD *)v4 + 10);
    }
    while ( v4 );
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v20 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
      v21 = v4;
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      xxxCompositedPaint(v4);
LABEL_14:
      ThreadUnlock1(v10, v9);
      return;
    }
  }
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*(_BYTE *)(v5 + 17) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, (__int64)a1, 0x240u, 1);
  SetOrClrWF(0, (__int64)a1, 0x120u, 1);
  v13 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v13 + 21) & 2) == 0 && (*(_BYTE *)(v13 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 14) + 80LL)
    || (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) == 0
    || (v16 = *((_QWORD *)a1 + 2), gptiCurrent == v16) )
  {
    xxxSendMessage((ULONG_PTR)a1);
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 816);
    v18 = v17 + 16;
    v19 = -v17;
    if ( (v18 & -(__int64)(v19 != 0)) == 0
      || *(_DWORD *)((v18 & -(__int64)(v19 != 0)) + 8) != 15
      || *(_QWORD *)((v18 & -(__int64)(v19 != 0)) + 0x10)
      || *(_QWORD *)((v18 & -(__int64)(v19 != 0)) + 0x18) )
    {
      PostMessage(a1, 0xFu, 0LL, 0LL);
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (v2 & 1) != 0 )
  {
    v6 = *((_QWORD *)a1 + 3);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8);
      if ( v8 )
        v7 = *(struct tagWND **)(v8 + 24);
    }
    if ( a1 != v7 )
    {
      v9 = 0LL;
      v10 = gptiCurrent;
      v20 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v20;
      v11 = *((_QWORD *)a1 + 11);
      v21 = 0LL;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( (*(_BYTE *)(v12 + 24) & 0x20) == 0 || !*(_QWORD *)(v12 + 136) && (*(_BYTE *)(v12 + 17) & 0x10) == 0 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v11 + 64);
        if ( !v10 )
          goto LABEL_17;
        do
        {
          v14 = *(_QWORD *)(v10 + 40);
          if ( *(_QWORD *)(v14 + 136) )
            break;
          if ( (*(_BYTE *)(v14 + 17) & 0x10) != 0 )
            break;
          v10 = *(_QWORD *)(v10 + 64);
        }
        while ( v10 );
        if ( v10 )
        {
          v11 = *(_QWORD *)(v11 + 64);
        }
        else
        {
LABEL_17:
          v21 = (struct tagWND *)v11;
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          if ( v9 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
              HMUnlockObjectInternal(v9);
          }
          xxxUpdateWindow2((struct tagWND *)v11, v2 | 4);
          v9 = v21;
          v11 = *(_QWORD *)(v11 + 64);
        }
      }
      goto LABEL_14;
    }
  }
}
