/*
 * XREFs of ?_Tidy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXXZ @ 0x18010082C
 * Callers:
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1800FFFC0 (--1EdgyConnection@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<Edge>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v1 + 5);
        std::wstring::_Tidy_deallocate((__int64)(v1 + 1));
        v1 += 13;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 104LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
