/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0010A38
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0010894 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNInitUAHMenuItem @ 0x1C0010BE4 (MNInitUAHMenuItem.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 **__fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 ***a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  int v16; // r14d
  int v17; // r12d
  __int64 **result; // rax
  __int64 v19; // r9
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-D1h]
  __int64 v33; // [rsp+28h] [rbp-C9h]
  int v34; // [rsp+30h] [rbp-C1h]
  __int64 v35; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A9h]
  _QWORD v37[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v37, 0, sizeof(v37));
  v15 = (__int64 *)a3[2];
  v16 = 1;
  if ( !v15 )
    v15 = **a3;
  v17 = MNIsUAHMenu(v15, v12, v13, v14);
  result = (__int64 **)MNInitDrawItemStruct(a1, a2, a3, a4, a5, a6, (__int64)v37);
  v19 = 0LL;
  if ( (**a3)[10] && ((*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(*a4 + 96) == -1LL) )
  {
    v26 = (**a3)[10];
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v35 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
    v36 = v26;
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
    xxxSendMessage((**a3)[10], 43LL, 0LL, v37, v32, v33, v34);
    ThreadUnlock1(v29, v28, v30);
    v31 = (__int64 *)a3[2];
    if ( !v31 )
      v31 = **a3;
    result = (__int64 **)MNGetpItemIndex(v31, a4);
    if ( (_DWORD)result == -1 )
      v16 = v19;
  }
  if ( v17 )
  {
    if ( a7 || (result = *a3, (v7 = (**a3)[10]) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v37[2]) &= ~0x100u;
      v20 = (__int64 *)a3[2];
      if ( v20 || (v20 = **a3) != 0LL )
        v37[8] = *v20;
      else
        v37[8] = v19;
      v37[9] = a1;
      LODWORD(v37[10]) = *(_DWORD *)(v20[5] + 40);
      if ( v16 )
      {
        v21 = (__int64 *)a3[2];
        if ( !v21 )
          v21 = **a3;
        MNInitUAHMenuItem(v21, a4, &v37[11]);
      }
      v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v35 = *(_QWORD *)(v22 + 408);
      *(_QWORD *)(v22 + 408) = &v35;
      v36 = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      xxxSendMessage(v7, 146LL, 0LL, v37, v32, v33, v34);
      return (__int64 **)ThreadUnlock1(v24, v23, v25);
    }
  }
  return result;
}
