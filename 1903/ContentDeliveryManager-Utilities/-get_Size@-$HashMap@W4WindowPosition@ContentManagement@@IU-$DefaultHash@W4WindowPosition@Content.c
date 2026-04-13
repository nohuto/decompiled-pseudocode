/*
 * XREFs of ?get_Size@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18008BBF0
 * Callers:
 *     ?GetPositionParameters@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008ADDC (-GetPositionParameters@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IMapView@W4WindowPosition@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v5; // rdi
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v8; // rcx

  v2 = 0;
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = (RTL_SRWLOCK *)(a1 + 160);
    v6 = *(_DWORD *)(a1 + 160) == 1;
    v7 = (RTL_SRWLOCK *)(a1 + 168);
    if ( v6 )
    {
      if ( SLODWORD(v7->Ptr) >= 0 )
        ++LODWORD(v7->Ptr);
    }
    else
    {
      AcquireSRWLockShared(v7);
    }
    *a2 = *(_DWORD *)(a1 + 88);
    if ( v5 )
    {
      v8 = v5 + 1;
      if ( LODWORD(v5->Ptr) == 1 )
        --LODWORD(v8->Ptr);
      else
        ReleaseSRWLockShared(v8);
    }
  }
  else
  {
    v2 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v2;
}
