/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1800BDC20
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDA5C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDD60 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18008D2F8 (IsPicRetrieveFileInfoPresent.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppInventoryData(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _WORD *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 v9; // r8
  _WORD *v10; // rdx
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v12 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v12) >= 0 )
    {
      v5 = (_WORD *)v12[6];
      v6 = -1LL;
      v7 = -1LL;
      do
        ++v7;
      while ( v5[v7] );
      std::wstring::assign((char *)a1, v5, v7);
      v8 = (_WORD *)v12[7];
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      std::wstring::assign((char *)(a1 + 32), v8, v9);
      v10 = (_WORD *)v12[2];
      do
        ++v6;
      while ( v10[v6] );
      std::wstring::assign((char *)(a1 + 64), v10, v6);
    }
    if ( v12 )
      PicFreeFileInfo(v12, v4);
  }
  return a1;
}
