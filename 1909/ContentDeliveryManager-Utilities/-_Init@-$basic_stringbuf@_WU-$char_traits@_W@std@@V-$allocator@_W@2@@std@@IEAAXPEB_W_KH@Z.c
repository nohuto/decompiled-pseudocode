/*
 * XREFs of ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180033908
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800323D0 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004807C (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800912D4 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
 */

_DWORD *__fastcall std::wstringbuf::_Init(__int64 a1, const void *a2, unsigned __int64 a3)
{
  int v3; // r14d
  _DWORD *result; // rax
  size_t v7; // rsi
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx

  v3 = a3;
  result = (_DWORD *)(*(_DWORD *)(a1 + 112) & 6);
  if ( (*(_BYTE *)(a1 + 112) & 6) != 6 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL || (v7 = 2 * a3, v8 = operator new(2 * a3), (v9 = (__int64)v8) == 0) )
      std::_Xbad_alloc();
    memcpy_0(v8, a2, v7);
    result = (_DWORD *)*(unsigned int *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = v7 + v9;
    if ( ((unsigned __int8)result & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v9;
      **(_QWORD **)(a1 + 56) = v9;
      **(_DWORD **)(a1 + 80) = v3;
      result = (_DWORD *)*(unsigned int *)(a1 + 112);
    }
    if ( ((unsigned __int8)result & 2) == 0 )
    {
      v10 = v9;
      if ( ((unsigned __int8)result & 0x10) != 0 )
        v10 = v7 + v9;
      **(_QWORD **)(a1 + 32) = v9;
      **(_QWORD **)(a1 + 64) = v10;
      **(_DWORD **)(a1 + 88) = (__int64)(v9 + v7 - v10) >> 1;
      result = *(_DWORD **)(a1 + 56);
      if ( !*(_QWORD *)result )
      {
        **(_QWORD **)(a1 + 24) = v9;
        **(_QWORD **)(a1 + 56) = 0LL;
        result = *(_DWORD **)(a1 + 80);
        *result = v9 >> 1;
      }
    }
    *(_DWORD *)(a1 + 112) |= 1u;
  }
  return result;
}
