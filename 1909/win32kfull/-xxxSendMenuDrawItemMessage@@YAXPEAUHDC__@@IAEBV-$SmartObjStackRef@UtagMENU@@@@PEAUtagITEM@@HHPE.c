/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0129B48
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C01299A4 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNInitUAHMenuItem @ 0x1C0129D14 (MNInitUAHMenuItem.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 **__fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 **a3,
        __int64 *a4,
        int a5,
        int a6,
        ULONG_PTR a7)
{
  ULONG_PTR v7; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r12d
  __int64 **result; // rax
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
  __int64 v30; // r8
  __int64 *v31; // rcx
  __int64 v32; // [rsp+40h] [rbp-B1h] BYREF
  ULONG_PTR v33; // [rsp+48h] [rbp-A9h]
  __int64 v34; // [rsp+50h] [rbp-A1h]
  _QWORD v35[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v35, 0, sizeof(v35));
  v12 = (__int64)a3[2];
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  result = (__int64 **)MNInitDrawItemStruct(a1, a2, (__int64 ***)a3, a4, a5, a6, (__int64)v35);
  v17 = 0LL;
  v18 = **a3;
  if ( *(_QWORD *)(v18 + 80) && ((*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(*a4 + 96) == -1LL) )
  {
    v25 = *(_QWORD *)(**a3 + 80);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v16);
    v32 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
    v33 = v25;
    HMLockObject(v25);
    xxxSendMessage(*(_QWORD *)(**a3 + 80));
    ThreadUnlock1(v28, v27, v29);
    v31 = a3[2];
    if ( !v31 )
      v31 = (__int64 *)**a3;
    result = (__int64 **)MNGetpItemIndex(v31, a4, v30, 0LL);
    if ( (_DWORD)result == -1 )
      v13 = v17;
  }
  if ( v14 )
  {
    if ( a7 || (result = (__int64 **)*a3, (v7 = *(_QWORD *)(**a3 + 80)) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v35[2]) &= ~0x100u;
      v19 = a3[2];
      if ( v19 || (v19 = (__int64 *)**a3) != 0LL )
        v35[8] = *v19;
      else
        v35[8] = v17;
      v35[9] = a1;
      LODWORD(v35[10]) = *(_DWORD *)(v19[5] + 40);
      if ( v13 )
      {
        v20 = a3[2];
        if ( !v20 )
          v20 = (__int64 *)**a3;
        MNInitUAHMenuItem(v20, a4, &v35[11]);
      }
      v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v16);
      v32 = *(_QWORD *)(v21 + 408);
      *(_QWORD *)(v21 + 408) = &v32;
      v33 = v7;
      HMLockObject(v7);
      xxxSendMessage(v7);
      return (__int64 **)ThreadUnlock1(v23, v22, v24);
    }
  }
  return result;
}
