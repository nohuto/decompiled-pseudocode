/*
 * XREFs of ??$GetStateFolder@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@@YAJPEAXW4tag_STATE_PERSIST_ATTRIB@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800965A0
 * Callers:
 *     ?GetEdgeFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180095230 (-GetEdgeFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIStorageF.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@wil@@YAJAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800967D4 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

__int64 __fastcall GetStateFolder<std::wstring,260>(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-39h] BYREF
  __int128 v5; // [rsp+28h] [rbp-31h]
  __int64 (__fastcall **v6)(); // [rsp+38h] [rbp-21h] BYREF
  __int128 v7; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall ***v8)(); // [rsp+A0h] [rbp+47h]
  __int64 v9; // [rsp+C0h] [rbp+67h] BYREF

  v9 = a1;
  v4 = 1;
  *(_QWORD *)&v5 = &v9;
  *((_QWORD *)&v5 + 1) = &v4;
  v6 = off_1800E1E00;
  v8 = &v6;
  v7 = v5;
  return wil::AdaptFixedSizeToAllocatedResult<std::wstring,260>(a3, &v6);
}
