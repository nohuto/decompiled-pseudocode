/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005D92C
 * Callers:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005D8F4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18008E7EC (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@W4AppIdKind@Activities@Data@56@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800982F4 (-SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplication.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1800AF320 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800AF460 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800AF9C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801B5220 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x1801D3A54 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E1558 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801E23C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18020C7B0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x18020E9FC (-CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180218418 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x18039B4B0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x18005DA1C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___(
                     a1,
                     a3,
                     a3,
                     a2);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v5 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v6 = 2 * a3;
  memmove_0(v5, a2, 2 * a3);
  *(_WORD *)&v5[v6] = 0;
  return a1;
}
