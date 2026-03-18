/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00AACC4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     MNInitUAHMenuItem @ 0x1C00AAE78 (MNInitUAHMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00AB7F8 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 **a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG_PTR a7)
{
  ULONG_PTR v7; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r12d
  __int64 result; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+40h] [rbp-B1h] BYREF
  ULONG_PTR v29; // [rsp+48h] [rbp-A9h]
  _QWORD v30[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v30, 0, sizeof(v30));
  v12 = (__int64)a3[2];
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  result = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, a4, a5, a6, (__int64)v30);
  v16 = 0LL;
  v17 = **a3;
  if ( *(_QWORD *)(v17 + 80) && ((**(_DWORD **)a4 & 0x100) != 0 || *(_QWORD *)(*(_QWORD *)a4 + 96LL) == -1LL) )
  {
    v23 = *(_QWORD *)(**a3 + 80);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
    v28 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v28;
    v29 = v23;
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    xxxSendMessage(*(_QWORD *)(**a3 + 80));
    ThreadUnlock1(v26, v25);
    v27 = (__int64)a3[2];
    if ( !v27 )
      v27 = **a3;
    result = MNGetpItemIndex(v27, a4);
    if ( (_DWORD)result == -1 )
      v13 = v16;
  }
  if ( v14 )
  {
    if ( a7 || (result = (__int64)*a3, (v7 = *(_QWORD *)(**a3 + 80)) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v30[2]) &= ~0x100u;
      v18 = a3[2];
      if ( v18 || (v18 = (__int64 *)**a3) != 0LL )
        v30[8] = *v18;
      else
        v30[8] = v16;
      v30[9] = a1;
      LODWORD(v30[10]) = *(_DWORD *)(v18[5] + 40);
      if ( v13 )
      {
        v19 = a3[2];
        if ( !v19 )
          v19 = (__int64 *)**a3;
        MNInitUAHMenuItem(v19, a4, &v30[11]);
      }
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v28 = *(_QWORD *)(v20 + 416);
      *(_QWORD *)(v20 + 416) = &v28;
      v29 = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      xxxSendMessage(v7);
      return ThreadUnlock1(v22, v21);
    }
  }
  return result;
}
