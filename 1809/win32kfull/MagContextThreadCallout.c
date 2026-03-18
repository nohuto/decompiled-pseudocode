/*
 * XREFs of MagContextThreadCallout @ 0x1C01BC190
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C0137190 (MagContextDestroy.c)
 *     MagControl @ 0x1C01BC3DC (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C001D364 (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C0258258 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0258314 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C02584C4 (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *ThreadContext; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = (_QWORD *)*v6;
      v8 = v6;
      v9 = v6;
      v6 = v7;
      if ( (_QWORD *)v7[1] != v8 )
        goto LABEL_28;
      v10 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v10 != v8 )
        goto LABEL_28;
      *v10 = v7;
      v7[1] = v10;
      v11 = v8[3];
      if ( v11 == -1 )
      {
        v14 = ThreadContext[2];
        v15 = *(_QWORD *)(v14 + 456);
        if ( *(_QWORD **)(v15 + 232) == v8 )
        {
          v16 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v15 + 8), a2);
          DwmAsyncMagnSetDesktopColorTransform(v16);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL) = 0LL;
          v14 = ThreadContext[2];
        }
        v17 = *(_QWORD *)(v14 + 456);
        if ( *(_QWORD **)(v17 + 224) == v8 )
        {
          v18 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v17 + 8), a2);
          DwmAsyncMagnSetDesktopTransform(v18, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL) = 0LL;
        }
      }
      else
      {
        v12 = *((unsigned int *)v8 + 4);
        if ( (v12 & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          *((_DWORD *)v8 + 4) &= ~0x40u;
          v12 = *((unsigned int *)v8 + 4);
          v11 = v9[3];
        }
        if ( (v12 & 0x20) == 0 )
        {
          v13 = (void *)ReferenceDwmApiPort(v12, a2);
          DwmAsyncMagnDestroy(v13);
          v11 = v8[3];
        }
        if ( v11 )
          HMAssignmentUnlock(v8 + 3);
      }
      v19 = v8[29];
      if ( v19 )
        Win32FreePool(v19);
      v20 = v8[32];
      if ( v20 )
        Win32FreePool(v20);
      Win32FreePool(v8);
    }
    v21 = *ThreadContext;
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext
      || (v22 = (_QWORD *)ThreadContext[1], (_QWORD *)*v22 != ThreadContext) )
    {
LABEL_28:
      __fastfail(3u);
    }
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    Win32FreePool(ThreadContext);
    *(_DWORD *)(a2 + 1208) &= ~8u;
  }
}
