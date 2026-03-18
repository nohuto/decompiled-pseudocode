/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C025CF40
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C025B410 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int16 *v7; // rsi
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int64 v10; // r9
  __int16 *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-248h] BYREF

  v6 = a3;
  v7 = (__int16 *)a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  memset(v16, 0, 24);
  if ( v6 < 0xFF )
  {
    v11 = (__int16 *)v17;
  }
  else
  {
    result = Win32AllocPool(2LL * (int)(v6 + 1), 1953657685LL);
    v11 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, v16, (__int64)Win32FreePool, v10);
  }
  if ( (unsigned int)GetPrefixCount(v7, v6, (__int64)v11, v6) >> 16 )
    v7 = v11;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)v7, v12, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)v7, v12, (struct tagSIZE *)a4, 1);
  if ( v11 != (__int16 *)v17 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v16, v13, v14, v15);
  return 1LL;
}
