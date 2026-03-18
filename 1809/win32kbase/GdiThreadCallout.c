/*
 * XREFs of GdiThreadCallout @ 0x1C00711D0
 * Callers:
 *     <none>
 * Callees:
 *     HmgFreeDcAttr @ 0x1C0023B9C (HmgFreeDcAttr.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0071358 (-vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // rcx
  _QWORD **v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi
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
      v7 = *(_QWORD *)(ThreadWin32Thread + 24);
      if ( v7 )
        HmgFreeDcAttr(v7);
      vUMPDThreadCleanup((struct _W32THREAD *)ThreadWin32Thread);
      v8 = (_QWORD **)(ThreadWin32Thread + 88);
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 == v8 )
          break;
        if ( v9 )
        {
          KeEnterCriticalRegion();
          v11 = v9[2];
          v12 = (void (__fastcall *)(__int64))v9[3];
          PopThreadGuardedObject(v9);
          if ( v12 )
            v12(v11);
          KeLeaveCriticalRegion();
        }
      }
      v10 = *(_QWORD **)(ThreadWin32Thread + 288);
      if ( v10 )
      {
        *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
        bDeletePalette(*v10, 0LL, 0LL);
        if ( (int)IsHT_DestroyDeviceHalftoneInfoSupported() >= 0 )
          HT_DestroyDeviceHalftoneInfoWrap(v10);
      }
      if ( *(_QWORD *)(ThreadWin32Thread + 80) )
        ((void (__fastcall *)(__int64, _QWORD))qword_1C01CD9D8)(ThreadWin32Thread + 80, 0LL);
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
    v3 = (_QWORD *)W32GetThreadWin32Thread(a1);
    LOBYTE(v4) = 1;
    v3[6] = v3 + 5;
    v3[5] = v3 + 5;
    v3[12] = v3 + 11;
    v3[11] = v3 + 11;
    v3[35] = v3 + 14;
    v3 += 10;
    *v3 = 0LL;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))qword_1C01CD9D8)(v3, v4);
  }
  return v2;
}
