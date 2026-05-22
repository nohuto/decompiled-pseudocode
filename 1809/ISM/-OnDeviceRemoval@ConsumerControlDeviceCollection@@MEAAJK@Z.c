/*
 * XREFs of ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x180066FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x180066388 (-erase@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdH.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180067514 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800696C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceRemoval(
        ConsumerControlDeviceCollection *this,
        unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v6; // rsi
  _WORD *QuadPart; // r13
  unsigned int v8; // r15d
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+78h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+6E8h] [rbp+5E8h]

  v13 = a2;
  memset_0(v16, 0, 0x640uLL);
  v17 = 1600;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 345,
    &v14,
    &v13);
  v4 = v14;
  if ( v14 == *((__int64 **)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v6 = 0LL;
  *(_OWORD *)&PerformanceCount[0].LowPart = *(_OWORD *)(v14 + 3);
  QuadPart = (_WORD *)PerformanceCount[0].QuadPart;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&PerformanceCount[0].LowPart, 8));
  if ( v8 )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(PerformanceCount);
      ButtonInfo = ConsumerControlDeviceCollection::CreateButtonInfo(
                     (ConsumerControlDeviceCollection *)(unsigned __int16)QuadPart[v6],
                     a2,
                     TickCount,
                     PerformanceCount[0],
                     QuadPart[v6],
                     0,
                     (struct InputInfo *)v16);
      if ( ButtonInfo < 0 )
        break;
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v16);
      if ( ButtonInfo < 0 )
      {
        v11 = 161LL;
        goto LABEL_11;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v8 )
        goto LABEL_7;
    }
    v11 = 155LL;
    goto LABEL_11;
  }
LABEL_7:
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( ButtonInfo < 0 )
  {
    v11 = 165LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)ButtonInfo);
    return (unsigned int)ButtonInfo;
  }
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::erase(
    (_QWORD *)this + 345,
    &v14,
    v4);
  operator delete(QuadPart, v12);
  return 0LL;
}
