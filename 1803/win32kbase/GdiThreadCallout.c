/*
 * XREFs of GdiThreadCallout @ 0x1C0061970
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     HmgFreeDcAttr @ 0x1C0031308 (HmgFreeDcAttr.c)
 *     bDeletePalette @ 0x1C0040B60 (bDeletePalette.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0061AB4 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  _QWORD **v5; // r14
  _QWORD *v6; // rsi
  HPALETTE *v7; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  void (__fastcall *v12)(__int64); // rbp

  v2 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(a1);
      if ( (int)IsGdiThreadCalloutFlushUserBatchSupported() >= 0 )
        GdiThreadCalloutFlushUserBatch();
      v4 = *(_QWORD *)(ThreadWin32Thread + 24);
      if ( v4 )
        HmgFreeDcAttr(v4);
      vUMPDThreadCleanup((struct _W32THREAD *)ThreadWin32Thread);
      v5 = (_QWORD **)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( v6 )
        {
          KeEnterCriticalRegion();
          v11 = v6[2];
          v12 = (void (__fastcall *)(__int64))v6[3];
          PopThreadGuardedObject(v6);
          if ( v12 )
            v12(v11);
          KeLeaveCriticalRegion();
        }
      }
      v7 = *(HPALETTE **)(ThreadWin32Thread + 288);
      if ( v7 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v7, 0, 0);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap(v7);
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C01A1B38)(ThreadWin32Thread + 80, 0LL);
      if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
        && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock()
        && (int)IsUmfdUninitializeThreadSupported() >= 0 )
      {
        UmfdUninitializeThread();
      }
    }
  }
  else
  {
    v9 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v10) = 1;
    v9[6] = v9 + 5;
    v9[5] = v9 + 5;
    v9[12] = v9 + 11;
    v9[11] = v9 + 11;
    v9[35] = v9 + 14;
    v9 += 10;
    *v9 = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C01A1B38)(v9, v10);
  }
  return v2;
}
