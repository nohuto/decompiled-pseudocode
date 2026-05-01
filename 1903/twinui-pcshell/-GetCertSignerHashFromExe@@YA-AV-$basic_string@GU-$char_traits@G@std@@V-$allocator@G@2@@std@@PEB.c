/*
 * XREFs of ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B0444
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800AF15C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1800AFC88 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B04DC (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B067C (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCertSignerHashFromExe(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF

  TryGetCertSubjectName(v4);
  if ( v4[2] )
  {
    v2 = v4;
    if ( v4[3] >= 8uLL )
      v2 = (_QWORD *)v4[0];
    HashAndBase32Encode(a1, v2);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  std::wstring::_Tidy_deallocate(v4);
  return a1;
}
