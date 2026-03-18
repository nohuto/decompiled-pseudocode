/*
 * XREFs of GdiThreadCallout @ 0x1C0067F40
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00172F0 (PopThreadGuardedObject.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     HmgFreeDcAttr @ 0x1C0027DBC (HmgFreeDcAttr.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00680F0 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     bDeletePalette @ 0x1C00699E0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD **v10; // r14
  _QWORD *v11; // rsi
  HPALETTE *v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r15
  void (__fastcall *v15)(__int64); // rbp

  v4 = 0;
  if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0 && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock() )
  {
    if ( a2 )
    {
      if ( a2 == 1 && (int)IsUmfdUninitializeThreadSupported() >= 0 )
        UmfdUninitializeThread();
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 96) = ThreadWin32Thread + 88;
        *(_QWORD *)(ThreadWin32Thread + 88) = ThreadWin32Thread + 88;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      v8 = W32GetThreadWin32Thread(a1);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported() >= 0 )
        GdiThreadCalloutFlushUserBatch();
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
        HmgFreeDcAttr(v9);
      vUMPDThreadCleanup((struct _W32THREAD *)v8);
      v10 = (_QWORD **)(v8 + 88);
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == v10 )
          break;
        if ( v11 )
        {
          KeEnterCriticalRegion();
          v14 = v11[2];
          v15 = (void (__fastcall *)(__int64))v11[3];
          PopThreadGuardedObject(v11);
          if ( v15 )
            v15(v14);
          KeLeaveCriticalRegion();
        }
      }
      v12 = *(HPALETTE **)(v8 + 288);
      if ( v12 )
      {
        *(_QWORD *)(v8 + 288) = 0LL;
        bDeletePalette(*v12);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap(v12);
      }
      if ( *(_QWORD *)(v8 + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0212170)(v8 + 80, 0LL);
    }
  }
  else
  {
    v5 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v6) = 1;
    v5[6] = v5 + 5;
    v5[5] = v5 + 5;
    v5[12] = v5 + 11;
    v5[11] = v5 + 11;
    v5[35] = v5 + 14;
    v5[10] = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C0212170)(v5 + 10, v6);
  }
  return v4;
}
