/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180349848
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180059ED4 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18005A090 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ??A?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAAAEAURelativePositionOnScreen@KeyboardHosting@@AEBI@Z @ 0x18034A27C (--A-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x18034A738 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18034C7C0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1800A62FC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEAU?$pair@$$CBIPEBG@1@1@Z @ 0x180246F4C (--$_Insert_at@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tree@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x180247980 (--$_Insert_nohint@AEAU-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Insert_hint<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen> &,std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v7; // r11
  __int64 v8; // r10
  _QWORD *result; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  bool v12; // cf
  __int64 v13; // rax
  __int64 i; // r9
  __int64 j; // rax
  _QWORD *v16; // rcx
  _QWORD *k; // rax
  int v18; // [rsp+20h] [rbp-38h]
  char v19[32]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v8 = *a1;
    if ( a3 == *(_QWORD *)*a1 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 28) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v18,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    if ( a3 == v8 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_DWORD *)(v10 + 28) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v10,
          v18,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    v11 = *a4;
    v12 = *(_DWORD *)(a3 + 28) < *a4;
    if ( *(_DWORD *)(a3 + 28) > *a4 )
    {
      v13 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        i = *(_QWORD *)(a3 + 16);
      }
      else
      {
        i = *(_QWORD *)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v13 = i;
          if ( *(_BYTE *)(v13 + 25) )
            i = v13;
        }
        else
        {
          for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            i = j;
        }
      }
      if ( *(_DWORD *)(i + 28) < v11 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 25LL) )
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            a1,
            a2,
            0,
            (_QWORD *)i,
            v18,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            a1,
            a2,
            1,
            (_QWORD *)a3,
            v18,
            a5);
        return a2;
      }
      v12 = *(_DWORD *)(a3 + 28) < v11;
    }
    if ( !v12 )
      goto LABEL_42;
    v16 = (_QWORD *)a3;
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
    {
      for ( k = *(_QWORD **)(a3 + 8); !*((_BYTE *)k + 25) && v16 == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
        v16 = k;
    }
    else
    {
      k = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min(*(_QWORD **)(a3 + 16));
    }
    if ( k != (_QWORD *)v8 && v11 >= *((_DWORD *)k + 7) )
    {
LABEL_42:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_nohint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
                         v7,
                         (__int64)v19,
                         a3,
                         a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        v7,
        a2,
        0,
        (_QWORD *)a3,
        v18,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        v7,
        a2,
        1,
        k,
        v18,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v18,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x30);
      throw;
    }
  }
  return result;
}
