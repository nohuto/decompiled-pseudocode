/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C022E17C
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C022C6B0 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int16 *v7; // rsi
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  _QWORD v12[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v13[512]; // [rsp+50h] [rbp-248h] BYREF

  v7 = (__int16 *)a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( a3 < 0xFF )
  {
    v10 = (__int16 *)v13;
  }
  else
  {
    result = Win32AllocPool(2LL * (int)(a3 + 1), 1953657685LL);
    v10 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, v12, (__int64)Win32FreePool);
  }
  if ( (unsigned int)GetPrefixCount(v7, a3, (__int64)v10, a3) >> 16 )
    v7 = v10;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (const WCHAR *)v7, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)v7, v11, (struct tagSIZE *)a4, 1);
  if ( v10 != (__int16 *)v13 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
