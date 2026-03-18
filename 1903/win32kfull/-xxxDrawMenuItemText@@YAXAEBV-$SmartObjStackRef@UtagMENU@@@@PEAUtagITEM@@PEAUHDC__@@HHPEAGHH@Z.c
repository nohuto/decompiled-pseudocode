/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025B410 (GetPrefixCount.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        __int64 a4,
        int a5,
        const WCHAR *a6,
        int a7,
        int a8)
{
  unsigned int v9; // ebp
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  WCHAR *result; // rax
  __int64 v15; // r9
  WCHAR *SourceString; // rbx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 PrefixCount; // [rsp+50h] [rbp-288h]
  __int64 v23; // [rsp+58h] [rbp-280h]
  _QWORD v24[3]; // [rsp+68h] [rbp-270h] BYREF
  _BYTE v25[512]; // [rsp+80h] [rbp-258h] BYREF

  v9 = a4;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  v13 = *(_QWORD *)(a2 + 88);
  v23 = ThreadWin32Thread;
  memset(v24, 0, sizeof(v24));
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v25;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, v24, (__int64)Win32FreePool, v15);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v23) )
  {
    xxxClientExtTextOutW(a3, v9, a5, 0, 0LL, SourceString, v17);
    v18 = (__int64)a1[2];
    if ( !v18 )
      v18 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v18, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_19;
  }
  else
  {
    GreExtTextOutWInternal(a3, v9, a5, 0, 0LL, SourceString, v17, 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
    || (GetAppCompatFlags2(1024LL, v19, v20, v21) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v23) )
      xxxPSMTextOut(a3, v9, a5, a6, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, v9, a5, SourceString, PrefixCount);
  }
LABEL_19:
  result = (WCHAR *)v25;
  if ( SourceString != (WCHAR *)v25 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)v24, v19, v20, v21);
  return result;
}
