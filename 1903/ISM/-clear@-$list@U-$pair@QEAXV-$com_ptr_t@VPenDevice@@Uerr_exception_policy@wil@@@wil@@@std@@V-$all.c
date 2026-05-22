/*
 * XREFs of ?clear@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXXZ @ 0x180129844
 * Callers:
 *     ??1?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1801276F0 (--1-$list@U-$pair@QEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V-$allocat.c)
 *     ??1?$unordered_map@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@U?$hash@PEAX@std@@U?$equal_to@PEAX@4@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18012775C (--1-$unordered_map@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@U-$hash@PEAX@st.c)
 *     ??1PenDeviceManager@@UEAA@XZ @ 0x1801277F8 (--1PenDeviceManager@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180129970 (-erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@w_ea_180129970.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v2 + 3);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
