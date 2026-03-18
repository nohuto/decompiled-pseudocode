/*
 * XREFs of ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180045900
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180045874 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004599C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800459EC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180045A30 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall SetCommentHelper<tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  _WORD *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (_WORD *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v5 = *(_WORD **)a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *v5 = 0;
  if ( !a3 )
    return 0LL;
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v6 - 1;
  if ( v6 && v6 <= a4 >> 1 && !*(_WORD *)(a3 + 2 * v7) )
  {
    v8 = std::wstring::wstring(v10, a3, (unsigned int)v7);
    std::wstring::operator=(a1, v8);
    std::wstring::_Tidy_deallocate(v10);
    return 0LL;
  }
  return 2147942487LL;
}
