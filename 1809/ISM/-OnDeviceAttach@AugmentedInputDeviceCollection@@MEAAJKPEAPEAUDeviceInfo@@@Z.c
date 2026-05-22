/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEAKAEAUAugmentedInputCacheState@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x18005D8DC (--$_Buynode@AEAKAEAUAugmentedInputCacheState@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAugmentedInp.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAugmentedInputCacheState@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@@Z @ 0x18005D934 (--$_Insert_nohint@AEAU-$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        __int64 **this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  __int16 v4; // r12
  __int16 v5; // r13
  int v8; // ebx
  __int64 v9; // rdx
  struct DeviceInfo *v10; // rsi
  unsigned int *v11; // r9
  int DeviceId; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int16 v15; // r8
  int v16; // ebx
  __int64 *v17; // rdx
  __int64 *v18; // rax
  __int64 *v19; // rcx
  void *v20; // rax
  int v21; // r8d
  __int64 *v22; // rdx
  __int64 *v23; // rax
  __int64 *v24; // rcx
  int v25; // ecx
  __int64 result; // rax
  unsigned int v27[4]; // [rsp+38h] [rbp-29h] BYREF
  struct RIMDevice *v28; // [rsp+48h] [rbp-19h] BYREF
  int v29; // [rsp+50h] [rbp-11h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Dh]
  __int16 v31; // [rsp+56h] [rbp-Bh]
  __int16 v32; // [rsp+58h] [rbp-9h]
  __int16 v33; // [rsp+5Ah] [rbp-7h]
  int v34; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v36; // [rsp+78h] [rbp+17h]
  __int16 v37; // [rsp+7Ah] [rbp+19h]
  __int16 v38; // [rsp+7Ch] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v40; // [rsp+E0h] [rbp+7Fh]

  v4 = 0;
  v40 = 0;
  v5 = 0;
  v8 = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( v8 < 0 )
  {
    v9 = 87LL;
    goto LABEL_37;
  }
  v10 = *a3;
  v28 = 0LL;
  memset_0(v35, 0, 0x28uLL);
  DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, a2, &v28, v11);
  v8 = DeviceId;
  if ( DeviceId < 0 )
  {
    v13 = (unsigned int)DeviceId;
    v14 = 115LL;
    goto LABEL_5;
  }
  v16 = RIMGetDeviceProperties(this[10], *((_QWORD *)v28 + 2), v35);
  if ( (v16 & 0xC0000000) == 0xC0000000 )
  {
    v8 = v16 | 0x10000000;
    if ( v8 >= 0 )
      goto LABEL_6;
    v13 = (unsigned int)v8;
    v14 = 117LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)v13);
LABEL_6:
    v15 = 0;
    goto LABEL_11;
  }
  v15 = v38;
  v8 = 0;
  v4 = v36;
  v5 = v37;
  v40 = v38;
LABEL_11:
  if ( v8 >= 0 )
  {
    v27[0] = a2;
    _InterlockedExchange(
      &MPCInputInfoHelper::m_nextSpectrumId,
      (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
    v17 = this[345];
    v18 = v17;
    v19 = (__int64 *)v17[1];
    if ( *((_BYTE *)v19 + 25) )
      goto LABEL_20;
    do
    {
      if ( *((_DWORD *)v19 + 7) >= a2 )
      {
        v18 = v19;
        v19 = (__int64 *)*v19;
      }
      else
      {
        v19 = (__int64 *)v19[2];
      }
    }
    while ( !*((_BYTE *)v19 + 25) );
    if ( v18 == v17 || a2 < *((_DWORD *)v18 + 7) )
LABEL_20:
      v18 = this[345];
    if ( v18 == v17 )
    {
      v33 = v15;
      v29 = MPCInputInfoHelper::m_nextSpectrumId;
      v30 = 0;
      v31 = v4;
      v32 = v5;
      v20 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buynode<unsigned long &,AugmentedInputCacheState &>(
                      this + 345,
                      v27,
                      &v29);
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Insert_nohint<std::pair<unsigned long const,AugmentedInputCacheState> &,std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *> *>(
        (_DWORD)this + 2760,
        (int)&v34,
        v21,
        (_DWORD)v20 + 28,
        v20);
      v22 = this[345];
      v23 = v22;
      v24 = (__int64 *)v22[1];
      if ( *((_BYTE *)v24 + 25) )
        goto LABEL_29;
      do
      {
        if ( *((_DWORD *)v24 + 7) >= a2 )
        {
          v23 = v24;
          v24 = (__int64 *)*v24;
        }
        else
        {
          v24 = (__int64 *)v24[2];
        }
      }
      while ( !*((_BYTE *)v24 + 25) );
      if ( v23 == v22 || a2 < *((_DWORD *)v23 + 7) )
LABEL_29:
        v23 = this[345];
      if ( v23 == v22 )
        v25 = 0;
      else
        v25 = *((_DWORD *)v23 + 8);
      if ( v23 != v22 )
      {
        *((_WORD *)v10 + 30) = v40;
        result = 0LL;
        *((_DWORD *)v10 + 13) = v25;
        *((_WORD *)v10 + 28) = v4;
        *((_WORD *)v10 + 29) = v5;
        *((_WORD *)v10 + 31) = 0;
        return result;
      }
      v8 = -2147467259;
      v9 = 93LL;
    }
    else
    {
      v8 = -2147467259;
      v9 = 92LL;
    }
  }
  else
  {
    v9 = 91LL;
  }
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
