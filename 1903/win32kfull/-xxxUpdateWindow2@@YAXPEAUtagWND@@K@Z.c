/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009A228 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     DecPaintCount @ 0x1C0114AFC (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct tagWND *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v23 = 0LL;
  v24 = 0LL;
  v6 = a1;
  v25 = 0LL;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 27LL) & 2) != 0 )
        break;
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
    }
    while ( v6 );
    if ( v6 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v23 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
      v24 = v6;
      HMLockObject(v6);
      xxxCompositedPaint(v6);
LABEL_14:
      ThreadUnlock1(v11, a2, a3);
      return;
    }
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v7 + 136) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*(_BYTE *)(v7 + 17) & 0x10) == 0 )
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
  v14 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v14 + 21) & 2) == 0 && (*(_BYTE *)(v14 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
  {
    v15 = 1LL;
    v16 = 38LL;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
    {
      v19 = *((_QWORD *)a1 + 2);
      if ( gptiCurrent != v19 )
      {
        v20 = *(_QWORD *)(v19 + 808);
        v21 = v20 + 16;
        v22 = -v20;
        a3 = v21 & -(__int64)(v22 != 0);
        if ( !a3
          || *(_DWORD *)((v21 & -(__int64)(v22 != 0)) + 8) != 15
          || *(_QWORD *)((v21 & -(__int64)(v22 != 0)) + 0x10)
          || *(_QWORD *)((v21 & -(__int64)(v22 != 0)) + 0x18) )
        {
          PostMessage((int)a1, 15, 0, 0);
        }
        goto LABEL_26;
      }
    }
    v15 = 0LL;
    v16 = 15LL;
  }
  xxxSendMessage(a1, v16, v15, 0LL);
LABEL_26:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (v4 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 3);
    v9 = 0LL;
    if ( v8 )
    {
      a2 = *(_QWORD *)(v8 + 8);
      if ( a2 )
        v9 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != v9 )
    {
      v10 = 0LL;
      v11 = gptiCurrent;
      v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      v12 = *((_QWORD *)a1 + 14);
      v24 = 0LL;
      while ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 24) & 0x20) == 0 || !*(_QWORD *)(v13 + 136) && (*(_BYTE *)(v13 + 17) & 0x10) == 0 )
          goto LABEL_17;
        a2 = *(_QWORD *)(v12 + 88);
        v11 = a2;
        if ( !a2 )
          goto LABEL_17;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v11 + 40);
          if ( *(_QWORD *)(v17 + 136) || (*(_BYTE *)(v17 + 17) & 0x10) != 0 )
            break;
          v11 = *(_QWORD *)(v11 + 88);
          if ( !v11 )
            goto LABEL_17;
        }
        if ( v11 )
        {
          v12 = *(_QWORD *)(v12 + 88);
        }
        else
        {
LABEL_17:
          v24 = (struct tagWND *)v12;
          HMLockObject(v12);
          if ( v10 )
            HMUnlockObject(v10);
          xxxUpdateWindow2((struct tagWND *)v12, v4 | 4);
          v12 = *(_QWORD *)(v12 + 88);
          v10 = v24;
        }
      }
      goto LABEL_14;
    }
  }
}
