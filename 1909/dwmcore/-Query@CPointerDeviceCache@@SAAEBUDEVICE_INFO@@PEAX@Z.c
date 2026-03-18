/*
 * XREFs of ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180235818
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180233BCC (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180233CAC (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180233E10 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1802359B8 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18023575C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tm.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Query(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  __int64 *v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-9h] BYREF
  void **v13; // [rsp+38h] [rbp-1h] BYREF
  __int64 v14; // [rsp+40h] [rbp+7h] BYREF
  __int128 v15; // [rsp+48h] [rbp+Fh] BYREF
  __int128 v16; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v17; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+3Fh]

  v4 = CPointerDeviceCache::s_deviceCache;
  v12 = a1;
  v5 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  v6 = *(__int64 **)(CPointerDeviceCache::s_deviceCache + 8);
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_8;
  do
  {
    if ( v6[4] >= a1 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == (__int64 *)CPointerDeviceCache::s_deviceCache || a1 < v5[4] )
LABEL_8:
    v5 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  if ( v5 == (__int64 *)CPointerDeviceCache::s_deviceCache )
  {
    LOBYTE(v18) = 1;
    *((_QWORD *)&v17 + 1) = a1;
    if ( a1 )
    {
      if ( (unsigned int)GetPointerDeviceRects(a1, &v16, &v15) && (unsigned int)GetPointerDeviceOrientation(v12, &v17) )
      {
        a1 = v12;
        v4 = CPointerDeviceCache::s_deviceCache;
        goto LABEL_16;
      }
      a1 = v12;
      v4 = CPointerDeviceCache::s_deviceCache;
    }
    LOBYTE(v18) = 0;
LABEL_16:
    v7 = *(_QWORD *)(v4 + 8);
    v8 = v4;
    if ( *(_BYTE *)(v7 + 25) )
      goto LABEL_23;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= a1 )
      {
        v8 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
    if ( v8 == v4 || a1 < *(_QWORD *)(v8 + 32) )
    {
LABEL_23:
      v13 = (void **)&v12;
      v8 = *std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
              (__int64)&v13,
              &v14,
              v8,
              a4,
              &v13);
    }
    *(_OWORD *)(v8 + 40) = v15;
    *(_OWORD *)(v8 + 56) = v16;
    *(_OWORD *)(v8 + 72) = v17;
    *(_QWORD *)(v8 + 88) = v18;
    a1 = v12;
    v4 = CPointerDeviceCache::s_deviceCache;
  }
  v9 = *(_QWORD *)(v4 + 8);
  v10 = v4;
  if ( *(_BYTE *)(v9 + 25) )
    goto LABEL_32;
  do
  {
    if ( *(_QWORD *)(v9 + 32) >= a1 )
    {
      v10 = v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  while ( !*(_BYTE *)(v9 + 25) );
  if ( v10 == v4 || a1 < *(_QWORD *)(v10 + 32) )
  {
LABEL_32:
    v13 = (void **)&v12;
    v10 = *std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
             (__int64)&v13,
             &v14,
             v10,
             a4,
             &v13);
  }
  return (const struct DEVICE_INFO *)(v10 + 40);
}
