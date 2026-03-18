/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C025C810
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C025ACD8 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int16 *v7; // rsi
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[4]; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v15[512]; // [rsp+50h] [rbp-248h] BYREF

  v6 = a3;
  v7 = (__int16 *)a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  memset(v14, 0, 24);
  if ( v6 < 0xFF )
  {
    v10 = (__int16 *)v15;
  }
  else
  {
    result = Win32AllocPool(2LL * (int)(v6 + 1), 1953657685LL);
    v10 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, v14, (__int64)Win32FreePool);
  }
  if ( (unsigned int)GetPrefixCount(v7, v6, (__int64)v10, v6) >> 16 )
    v7 = v10;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)v7, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)v7, v11, (struct tagSIZE *)a4, 1);
  if ( v10 != (__int16 *)v15 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v14, v12, v13);
  return 1LL;
}
