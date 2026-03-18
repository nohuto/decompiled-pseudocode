/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02311D0
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C0242610 (GetPrefixCount.c)
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
  unsigned __int16 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 PrefixCount; // [rsp+50h] [rbp-288h]
  __int64 v20; // [rsp+58h] [rbp-280h]
  _QWORD v21[3]; // [rsp+68h] [rbp-270h] BYREF
  _BYTE v22[512]; // [rsp+80h] [rbp-258h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = *(_QWORD *)(a2 + 88);
  v20 = ThreadWin32Thread;
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v22;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, v21, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v20) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, a7 - v16);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_19;
  }
  else
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, a7 - v16, 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
    || (GetAppCompatFlags2(1024LL, v18) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v20) )
      xxxPSMTextOut(a3, a4, a5, a6, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, PrefixCount);
  }
LABEL_19:
  result = (WCHAR *)v22;
  if ( SourceString != (WCHAR *)v22 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)v21, v18);
  return result;
}
