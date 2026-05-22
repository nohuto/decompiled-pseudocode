/*
 * XREFs of ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800B2DD0
 * Callers:
 *     ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2CC0 (-OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180049E2C (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800B388C (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800B6894 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800B6894.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice(
        RTL_SRWLOCK *this,
        wchar_t *a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // r14
  __int64 v6; // rcx
  _QWORD *Ptr; // rdi
  __int64 *v8; // rsi
  _QWORD *v9; // r15
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  __m128i si128; // [rsp+48h] [rbp-38h]
  _QWORD *v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v16 = -2LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = this + 78;
  AcquireSRWLockExclusive(this + 78);
  v14 = v5;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v17[0]) = 0;
  std::wstring::assign(v17, a2);
  Ptr = this[76].Ptr;
  v8 = (__int64 *)Ptr[1];
  v9 = Ptr;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(v6, (char *)v8 + 32, (__int64)v17) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      Ptr = v8;
      v8 = (__int64 *)*v8;
    }
  }
  if ( Ptr == v9 || (unsigned __int8)std::less<std::wstring>::operator()(v6, (char *)v17, (__int64)(Ptr + 4)) )
    Ptr = v9;
  std::wstring::~wstring((__int64)v17);
  if ( Ptr != this[76].Ptr )
  {
    if ( Ptr[8] )
    {
      v4 = Ptr[8];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v15 = v4;
    }
    std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,0>>::erase(
      &this[76],
      &v14,
      Ptr);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    v10 = v11;
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v17[0] = off_18013E3B0;
      v17[1] = v4;
      v19 = v17;
      v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
              this,
              v17);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v10 = 0;
        goto LABEL_22;
      }
      v12 = 1380LL;
    }
    else
    {
      v12 = 1376LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_22;
  }
  v10 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55B,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)0x80070490LL);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
LABEL_22:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
