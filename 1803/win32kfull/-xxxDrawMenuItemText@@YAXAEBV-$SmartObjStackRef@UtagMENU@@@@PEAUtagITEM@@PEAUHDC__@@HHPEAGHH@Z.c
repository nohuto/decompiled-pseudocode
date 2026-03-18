/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0207DFC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C022C6B0 (GetPrefixCount.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(__int64 **a1, __int64 a2, HDC a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  WCHAR *result; // rax
  WCHAR *SourceString; // rbx
  int PrefixCount; // r12d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // [rsp+50h] [rbp-288h]
  __int64 v18; // [rsp+58h] [rbp-280h]
  _QWORD v19[3]; // [rsp+68h] [rbp-270h] BYREF
  _BYTE v20[512]; // [rsp+80h] [rbp-258h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v18 = *(_QWORD *)(a2 + 88);
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v20;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, v19, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount));
    v15 = (__int64)a1[2];
    if ( !v15 )
      v15 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v15, a2) == -1 || v18 != *(_QWORD *)(a2 + 88) )
      goto LABEL_19;
  }
  else
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, a7 - HIWORD(PrefixCount), 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
    || (GetAppCompatFlags2(0x400u, v16) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
      xxxPSMTextOut(a3, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, (unsigned __int16)PrefixCount);
  }
LABEL_19:
  result = (WCHAR *)v20;
  if ( SourceString != (WCHAR *)v20 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)v19);
  return result;
}
