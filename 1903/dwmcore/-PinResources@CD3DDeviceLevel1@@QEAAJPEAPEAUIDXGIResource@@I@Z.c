/*
 * XREFs of ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015DE5C
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18025D740 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ??9?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z @ 0x18002AE70 (--9-$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EA134 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?IsSameResource@CUnpinResource@CD3DDeviceLevel1@@QEBA_NPEBUIDXGIResource@@@Z @ 0x1800EA170 (-IsSameResource@CUnpinResource@CD3DDeviceLevel1@@QEBA_NPEBUIDXGIResource@@@Z.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDeviceLevel1@@@2@@Z @ 0x1800EA630 (-erase@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@CD3DDevi.c)
 *     ?push_back@?$vector@PEAUIDXGIResource@@V?$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAXAEBQEAUIDXGIResource@@@Z @ 0x1800EA680 (-push_back@-$vector@PEAUIDXGIResource@@V-$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAXAEBQEAUI.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$min@I@@YAIII@Z @ 0x18015B8E8 (--$min@I@@YAIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v4; // esi
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r8
  CD3DDeviceLevel1::CUnpinResource *v12; // r8
  const struct IDXGIResource *v13; // r9
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r8
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v21; // ebx
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  v26 = 0LL;
  v3 = 0;
  v4 = *((_DWORD *)this + 220);
  v25 = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C0168, 1u, v4, 0xF89u, 0LL);
    v14 = v25;
  }
  else
  {
    if ( a3 )
    {
      v7 = (__int64 *)((char *)this + 992);
      v8 = a3;
      do
      {
        v9 = *v7;
        v10 = *((_QWORD *)this + 125);
        v23 = (__int64)*a2;
        while ( 1 )
        {
          v28 = v9;
          v27 = v10;
          if ( !detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>::operator!=(&v28, &v27) )
          {
            std::vector<IDXGIResource *>::push_back((__int64 *)&v25, &v23);
            goto LABEL_9;
          }
          if ( CD3DDeviceLevel1::CUnpinResource::IsSameResource(v12, v13) )
            break;
          v9 = v11 + 16;
        }
        v27 = v11;
        detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
          v7,
          &v24,
          &v27);
LABEL_9:
        ++a2;
        --v8;
      }
      while ( v8 );
    }
    v3 = 0;
    v14 = v25;
    v15 = (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3;
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = (unsigned int)min<unsigned int>(0x10u, (unsigned int)v15 - v3);
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 74) + 24LL))(
                *((_QWORD *)this + 74),
                v14 + 8 * v17,
                v16);
        v4 = v18;
        if ( v18 < 0 )
          break;
        v3 += v16;
        if ( v3 >= v15 )
          goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802C0168, 1u, v18, 0xFB4u, 0LL);
    }
  }
LABEL_17:
  if ( v4 < 0 && v3 )
  {
    v20 = v3;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 74) + 32LL))(
        *((_QWORD *)this + 74),
        v14,
        1LL);
      v14 += 8LL;
      --v20;
    }
    while ( v20 );
  }
  v21 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v4, 0xFu);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)&v25);
  return v21;
}
