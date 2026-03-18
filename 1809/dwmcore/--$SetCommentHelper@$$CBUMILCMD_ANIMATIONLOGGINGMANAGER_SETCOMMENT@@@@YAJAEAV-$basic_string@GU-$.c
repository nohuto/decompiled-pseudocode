/*
 * XREFs of ??$SetCommentHelper@$$CBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x1800C36C8
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x1800C363C (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C3764 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800C37B4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1800C3B88 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall SetCommentHelper<MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  bool v4; // cf
  _WORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 24) < 8uLL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (_WORD *)a1;
  if ( !v4 )
    v6 = *(_WORD **)a1;
  *v6 = 0;
  if ( !a3 )
    return 0LL;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v7 - 1;
  if ( v7 && v7 <= a4 >> 1 && !*(_WORD *)(a3 + 2 * v8) )
  {
    std::wstring::wstring(v10, a3, (unsigned int)v8);
    std::wstring::operator=(a1, v10);
    std::wstring::_Tidy_deallocate(v10);
    return 0LL;
  }
  return 2147942487LL;
}
