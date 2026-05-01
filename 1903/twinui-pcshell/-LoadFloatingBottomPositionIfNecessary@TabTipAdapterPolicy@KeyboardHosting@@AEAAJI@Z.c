/*
 * XREFs of ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18005B080
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005AEC4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020AC0C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x18031C39C (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180329BC0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180329FC8 (--$_Insert_hint@AEAU-$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU-$_Tree_nod.c)
 */

LSTATUS __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2)
{
  char *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rax
  LSTATUS result; // eax
  __int64 v9; // rdx
  bool v10; // cc
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rax
  DWORD v28; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-10h] BYREF
  int pvData; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+40h] BYREF
  int v32; // [rsp+A0h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+50h] BYREF

  v31 = a2;
  v2 = (char *)this + 448;
  v3 = (__int64 *)*((_QWORD *)this + 56);
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_20;
  do
  {
    if ( *((_DWORD *)v5 + 7) < (unsigned int)a2 )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v3 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v3 == *(__int64 **)v2 || (unsigned int)a2 < *((_DWORD *)v3 + 7) )
  {
LABEL_20:
    v29[0] = &v31;
    v11 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (char *)this + 448,
            a2,
            v29);
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
      (_DWORD)v2,
      (unsigned int)v29,
      (_DWORD)v3,
      v11 + 28,
      v11);
    a2 = v31;
    v3 = (__int64 *)v29[0];
  }
  if ( *((_BYTE *)v3 + 40) )
    return 0;
  pcbData = 4;
  v6 = (__int64 *)*((_QWORD *)this + 9);
  v7 = (__int64 *)v6[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_22;
  do
  {
    if ( *((_DWORD *)v7 + 8) < (unsigned int)a2 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == *((__int64 **)this + 9) || (unsigned int)a2 < *((_DWORD *)v6 + 8) )
  {
LABEL_22:
    v29[0] = &v31;
    v12 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (char *)this + 72,
            a2,
            v29);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (_DWORD)this + 72,
      (unsigned int)v29,
      (_DWORD)v6,
      v12 + 32,
      v12);
    v6 = (__int64 *)v29[0];
  }
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             (LPCWSTR)v6[5],
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v10 = result <= 0;
  if ( !result )
  {
    v13 = pvData;
    v14 = (__int64 *)*((_QWORD *)this + 11);
    if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
      v13 = *((_DWORD *)this + 27);
    pvData = v13;
    v28 = 4;
    v15 = (__int64 *)v14[1];
    if ( *((_BYTE *)v15 + 25) )
      goto LABEL_32;
    do
    {
      if ( *((_DWORD *)v15 + 8) >= v31 )
      {
        v14 = v15;
        v15 = (__int64 *)*v15;
      }
      else
      {
        v15 = (__int64 *)v15[2];
      }
    }
    while ( !*((_BYTE *)v15 + 25) );
    if ( v14 == *((__int64 **)this + 11) || v31 < *((_DWORD *)v14 + 8) )
    {
LABEL_32:
      v29[0] = &v31;
      v16 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              (char *)this + 88,
              v9,
              v29);
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        (_DWORD)this + 88,
        (unsigned int)v29,
        (_DWORD)v14,
        v16 + 32,
        v16);
      v14 = (__int64 *)v29[0];
    }
    result = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
               (LPCWSTR)v14[5],
               0x10u,
               0LL,
               &v32,
               &v28);
    v10 = result <= 0;
    if ( !result )
    {
      v18 = v32;
      v19 = *(__int64 **)v2;
      if ( (unsigned int)v32 > *((_DWORD *)this + 27) )
        v18 = *((_DWORD *)this + 27);
      v32 = v18;
      v20 = (__int64 *)v19[1];
      if ( *((_BYTE *)v20 + 25) )
        goto LABEL_43;
      do
      {
        if ( *((_DWORD *)v20 + 7) >= v31 )
        {
          v19 = v20;
          v20 = (__int64 *)*v20;
        }
        else
        {
          v20 = (__int64 *)v20[2];
        }
      }
      while ( !*((_BYTE *)v20 + 25) );
      if ( v19 == *(__int64 **)v2 || v31 < *((_DWORD *)v19 + 7) )
      {
LABEL_43:
        v29[0] = &v31;
        v21 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                v2,
                v17,
                v29);
        std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
          (_DWORD)v2,
          (unsigned int)v29,
          (_DWORD)v19,
          v21 + 28,
          v21);
        v19 = (__int64 *)v29[0];
      }
      *((float *)v19 + 8) = (float)pvData / (float)*((int *)this + 27);
      v22 = *(__int64 **)v2;
      v23 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
      if ( *((_BYTE *)v23 + 25) )
        goto LABEL_51;
      do
      {
        if ( *((_DWORD *)v23 + 7) >= v31 )
        {
          v22 = v23;
          v23 = (__int64 *)*v23;
        }
        else
        {
          v23 = (__int64 *)v23[2];
        }
      }
      while ( !*((_BYTE *)v23 + 25) );
      if ( v22 == *(__int64 **)v2 || v31 < *((_DWORD *)v22 + 7) )
      {
LABEL_51:
        v29[0] = &v31;
        v24 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                v2,
                v17,
                v29);
        std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
          (_DWORD)v2,
          (unsigned int)v29,
          (_DWORD)v22,
          v24 + 28,
          v24);
        v22 = (__int64 *)v29[0];
      }
      *((float *)v22 + 9) = (float)v32 / (float)*((int *)this + 27);
      v25 = *(__int64 **)v2;
      v26 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
      if ( *((_BYTE *)v26 + 25) )
        goto LABEL_59;
      do
      {
        if ( *((_DWORD *)v26 + 7) >= v31 )
        {
          v25 = v26;
          v26 = (__int64 *)*v26;
        }
        else
        {
          v26 = (__int64 *)v26[2];
        }
      }
      while ( !*((_BYTE *)v26 + 25) );
      if ( v25 == *(__int64 **)v2 || v31 < *((_DWORD *)v25 + 7) )
      {
LABEL_59:
        v29[0] = &v31;
        v27 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                v2,
                v17,
                v29);
        std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
          (_DWORD)v2,
          (unsigned int)v29,
          (_DWORD)v25,
          v27 + 28,
          v27);
        v25 = (__int64 *)v29[0];
      }
      *((_BYTE *)v25 + 40) = 1;
      return 0;
    }
  }
  if ( !v10 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
