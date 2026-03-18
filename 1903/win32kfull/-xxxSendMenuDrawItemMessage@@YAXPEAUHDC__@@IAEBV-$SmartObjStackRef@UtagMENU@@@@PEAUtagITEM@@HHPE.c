/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00F9924
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     MNInitUAHMenuItem @ 0x1C00F9AF0 (MNInitUAHMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00F9B48 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ULONG_PTR v25; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // [rsp+40h] [rbp-B1h] BYREF
  ULONG_PTR v32; // [rsp+48h] [rbp-A9h]
  __int64 v33; // [rsp+50h] [rbp-A1h]
  _QWORD v34[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v34, 0, sizeof(v34));
  v12 = (__int64)a3[2];
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  result = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, a4, a5, a6, (__int64)v34);
  v17 = 0LL;
  v18 = **a3;
  if ( *(_QWORD *)(v18 + 80) && ((**(_DWORD **)a4 & 0x100) != 0 || *(_QWORD *)(*(_QWORD *)a4 + 96LL) == -1LL) )
  {
    v25 = *(_QWORD *)(**a3 + 80);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v16, 0LL);
    v31 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v31;
    v32 = v25;
    HMLockObject(v25);
    xxxSendMessage(*(_QWORD *)(**a3 + 80));
    ThreadUnlock1(v28, v27, v29);
    v30 = (__int64)a3[2];
    if ( !v30 )
      v30 = **a3;
    result = MNGetpItemIndex(v30, a4);
    if ( (_DWORD)result == -1 )
      v13 = v17;
  }
  if ( v14 )
  {
    if ( a7 || (result = (__int64)*a3, (v7 = *(_QWORD *)(**a3 + 80)) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v34[2]) &= ~0x100u;
      v19 = a3[2];
      if ( v19 || (v19 = (__int64 *)**a3) != 0LL )
        v34[8] = *v19;
      else
        v34[8] = v17;
      v34[9] = a1;
      LODWORD(v34[10]) = *(_DWORD *)(v19[5] + 40);
      if ( v13 )
      {
        v20 = a3[2];
        if ( !v20 )
          v20 = (__int64 *)**a3;
        MNInitUAHMenuItem(v20, a4, &v34[11]);
      }
      v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v16, v17);
      v31 = *(_QWORD *)(v21 + 408);
      *(_QWORD *)(v21 + 408) = &v31;
      v32 = v7;
      HMLockObject(v7);
      xxxSendMessage(v7);
      return ThreadUnlock1(v23, v22, v24);
    }
  }
  return result;
}
