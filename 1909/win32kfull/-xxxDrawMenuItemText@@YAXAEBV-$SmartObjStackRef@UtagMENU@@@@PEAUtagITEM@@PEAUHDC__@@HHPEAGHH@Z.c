/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249504 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252628 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025ACD8 (GetPrefixCount.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        const WCHAR *a6,
        int a7,
        int a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  WCHAR *result; // rax
  WCHAR *SourceString; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int16 PrefixCount; // [rsp+50h] [rbp-288h]
  __int64 v21; // [rsp+58h] [rbp-280h]
  _QWORD v22[3]; // [rsp+68h] [rbp-270h] BYREF
  _BYTE v23[512]; // [rsp+80h] [rbp-258h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
  v13 = *(_QWORD *)(a2 + 88);
  v21 = ThreadWin32Thread;
  memset(v22, 0, sizeof(v22));
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v23;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, v22, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v21) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, v16);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_19;
  }
  else
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, v16, 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
    || (GetAppCompatFlags2(1024LL, v18) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v21) )
      xxxPSMTextOut(a3, a4, a5, a6, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, PrefixCount);
  }
LABEL_19:
  result = (WCHAR *)v23;
  if ( SourceString != (WCHAR *)v23 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)v22, v18, v19);
  return result;
}
