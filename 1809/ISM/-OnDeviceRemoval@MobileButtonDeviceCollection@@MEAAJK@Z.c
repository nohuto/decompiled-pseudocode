/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800653E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18001EB60 (-terminate@details@gsl@@YAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180065E7C (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x180066388 (-erase@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdH.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800696C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(MobileButtonDeviceCollection *this, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  char *v5; // r12
  char *v6; // r15
  unsigned __int64 v7; // rax
  gsl::details *v8; // rcx
  gsl::details *v9; // rsi
  __int64 v10; // r14
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v13; // rdx
  const struct std::nothrow_t *v14; // rdx
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  gsl::details *v19; // [rsp+60h] [rbp-A0h]
  char *v20; // [rsp+68h] [rbp-98h]
  _BYTE v21[24]; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+88h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+6F8h] [rbp+5F8h]

  v17 = a2;
  memset_0(v21, 0, 0x640uLL);
  v22 = 1600;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 345,
    (__int64 **)&v16,
    &v17);
  v3 = v16;
  if ( v16 == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v5 = *(char **)(v16 + 24);
    v6 = v5;
    LODWORD(v7) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v16 + 24), 8));
    v20 = v5;
    v8 = (gsl::details *)(unsigned int)v7;
    v19 = (gsl::details *)(unsigned int)v7;
    if ( !v5 && (_DWORD)v7 )
LABEL_21:
      gsl::details::terminate(v8);
    v9 = 0LL;
    v16 = (unsigned int)v7;
    v7 = (unsigned int)v7;
    v10 = 0LL;
    while ( v9 != (gsl::details *)v7 )
    {
      if ( v9 == v8 )
        goto LABEL_21;
      if ( *(_WORD *)&v6[v10] )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)*(unsigned __int16 *)&v6[v10],
                       a2,
                       TickCount,
                       PerformanceCount,
                       *(_WORD *)&v6[v10],
                       0,
                       (struct InputInfo *)v21);
        if ( ButtonInfo < 0 )
        {
          v13 = 173LL;
          goto LABEL_17;
        }
        ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v21);
        if ( ButtonInfo < 0 )
        {
          v13 = 179LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
            (const char *)(unsigned int)ButtonInfo);
          return (unsigned int)ButtonInfo;
        }
        v6 = v20;
        v8 = v19;
        v7 = v16;
      }
      if ( v10 < 0 || v9 == v8 )
        goto LABEL_21;
      v9 = (gsl::details *)((char *)v9 + 1);
      v10 += 2LL;
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v13 = 183LL;
      goto LABEL_17;
    }
    std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::erase(
      (char *)this + 2760,
      &v16,
      v3);
    operator delete(v5, v14);
    return 0LL;
  }
}
