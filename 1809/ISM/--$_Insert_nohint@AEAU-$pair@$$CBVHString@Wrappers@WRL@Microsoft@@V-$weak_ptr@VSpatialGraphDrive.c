/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x18011D958
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180117C70 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@1@Z @ 0x18011E390 (--$_Insert_at@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverHan.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_nohint<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
        __int64 **a1,
        __int64 a2,
        char a3,
        HSTRING *a4,
        HSTRING *a5)
{
  __int64 *v8; // rsi
  __int64 *v9; // rdi
  bool v10; // r12
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v12; // rax
  int v13; // eax
  int v14; // r8d
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rcx
  const WCHAR *v21; // rdi
  const WCHAR *v22; // rax
  int v23; // r8d
  HSTRING *v24; // rdi
  volatile signed __int32 *v25; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  UINT32 v28; // [rsp+30h] [rbp-58h] BYREF
  UINT32 v29; // [rsp+34h] [rbp-54h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  char v32; // [rsp+48h] [rbp-40h] BYREF
  char v33; // [rsp+50h] [rbp-38h] BYREF
  UINT32 length; // [rsp+90h] [rbp+8h] BYREF
  UINT32 v35; // [rsp+A0h] [rbp+18h] BYREF

  LOBYTE(v35) = a3;
  v31 = -2LL;
  v8 = *a1;
  v9 = (__int64 *)(*a1)[1];
  v10 = 1;
  while ( 1 )
  {
    v14 = 0;
    if ( *((_BYTE *)v9 + 25) )
      break;
    v8 = v9;
    StringRawBuffer = WindowsGetStringRawBuffer(*a4, &length);
    v12 = WindowsGetStringRawBuffer((HSTRING)v9[4], &v35);
    v13 = CompareStringOrdinal(StringRawBuffer, length, v12, v35, 1);
    v10 = v13 == 1;
    if ( v13 == 1 )
      v9 = (__int64 *)*v9;
    else
      v9 = (__int64 *)v9[2];
  }
  try
  {
    v15 = v8;
    v30 = v8;
    if ( v10 )
    {
      if ( v8 == (__int64 *)**a1 )
      {
        LOBYTE(v14) = 1;
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v32,
                                     v14,
                                     (_DWORD)v8,
                                     bIgnoreCase,
                                     (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v15 = (__int64 *)v8[2];
      }
      else
      {
        v18 = (__int64 *)*v8;
        if ( *(_BYTE *)(*v8 + 25) )
        {
          v19 = (__int64 *)v8[1];
          if ( !*((_BYTE *)v19 + 25) )
          {
            v20 = v8;
            do
            {
              if ( v20 != (__int64 *)*v19 )
                break;
              v15 = v19;
              v19 = (__int64 *)v19[1];
              v20 = v15;
            }
            while ( !*((_BYTE *)v19 + 25) );
          }
          if ( !*((_BYTE *)v15 + 25) )
            v15 = v19;
        }
        else
        {
          do
          {
            v15 = v18;
            v18 = (__int64 *)v18[2];
          }
          while ( !*((_BYTE *)v18 + 25) );
        }
      }
      v30 = v15;
    }
    v21 = WindowsGetStringRawBuffer((HSTRING)v15[4], &v29);
    v22 = WindowsGetStringRawBuffer(*a4, &v28);
    if ( CompareStringOrdinal(v21, v29, v22, v28, 1) == 1 )
    {
      LOBYTE(v23) = v10;
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                                   (_DWORD)a1,
                                   (unsigned int)&v33,
                                   v23,
                                   (_DWORD)v8,
                                   bIgnoreCasea,
                                   (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v24 = a5;
      v25 = (volatile signed __int32 *)a5[6];
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        v15 = v30;
      }
      WindowsDeleteString(v24[4]);
      v24[4] = 0LL;
      operator delete(v24, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Destroy_if_node(
      v16,
      a5);
    throw;
  }
  return result;
}
