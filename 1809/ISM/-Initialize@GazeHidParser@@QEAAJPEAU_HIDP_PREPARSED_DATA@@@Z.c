/*
 * XREFs of ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C0870
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180069F34 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800C1320 (--$_Buynode@W4GazeProperty@@G@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4Gaze.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4GazeProperty@@G@std@@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4GazeProperty@@G@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@@Z @ 0x1800C1368 (--$_Insert_nohint@AEAU-$pair@$$CBW4GazeProperty@@G@std@@PEAU-$_Tree_node@U-$pair@$$CBW4GazePrope.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::Initialize(PHIDP_CAPS Capabilities, PHIDP_PREPARSED_DATA PreparsedData)
{
  NTSTATUS Caps; // eax
  unsigned int i; // edi
  __int16 v6; // r15
  __int16 v7; // bx
  unsigned __int64 NumberLinkCollectionNodes; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  const struct std::nothrow_t *v11; // rdx
  struct std::nothrow_t *v12; // rax
  NTSTATUS LinkCollectionNodes; // eax
  const struct std::nothrow_t *v14; // rdx
  int v15; // ebx
  __int64 v16; // rcx
  bool v17; // zf
  void *v18; // rax
  int v19; // r8d
  int v20; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG LinkCollectionNodesLength; // [rsp+80h] [rbp+8h] BYREF
  struct std::nothrow_t *v23; // [rsp+88h] [rbp+10h]

  *(_QWORD *)&Capabilities[1].Usage = PreparsedData;
  Caps = HidP_GetCaps(PreparsedData, Capabilities);
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x18,
             (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)Caps);
  for ( i = 0; i < 0xB; ++i )
  {
    v23 = 0LL;
    v6 = 0;
    switch ( i )
    {
      case 6u:
        v7 = 36;
        break;
      case 7u:
        v7 = 37;
        break;
      case 8u:
        v7 = 38;
        break;
      case 9u:
        v7 = 39;
        break;
      case 0xAu:
        v7 = 40;
        break;
      default:
        goto LABEL_38;
    }
    NumberLinkCollectionNodes = Capabilities->NumberLinkCollectionNodes;
    LinkCollectionNodesLength = NumberLinkCollectionNodes;
    if ( !(_DWORD)NumberLinkCollectionNodes )
    {
      v9 = 2205548546LL;
      v10 = 91LL;
      goto LABEL_17;
    }
    v12 = (struct std::nothrow_t *)operator new[](saturated_mul(NumberLinkCollectionNodes, 0x18uLL));
    v23 = v12;
    if ( !v12 )
    {
      v9 = 2147942414LL;
      v10 = 95LL;
      goto LABEL_17;
    }
    LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                            (PHIDP_LINK_COLLECTION_NODE)v12,
                            &LinkCollectionNodesLength,
                            *(PHIDP_PREPARSED_DATA *)&Capabilities[1].Usage);
    if ( LinkCollectionNodes >= 0 )
    {
      v16 = 0LL;
      if ( LinkCollectionNodesLength )
      {
        while ( *((_WORD *)v23 + 12 * v16 + 1) != 18 || *((_WORD *)v23 + 12 * v16) != v7 )
        {
          v16 = (unsigned int)(v16 + 1);
          v17 = (_DWORD)v16 == LinkCollectionNodesLength;
          if ( (unsigned int)v16 >= LinkCollectionNodesLength )
            goto LABEL_32;
        }
        v6 = v16;
      }
      v17 = (_DWORD)v16 == LinkCollectionNodesLength;
LABEL_32:
      if ( v17 )
      {
        v9 = 2147500037LL;
        v10 = 113LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)v9);
        if ( v23 )
          operator delete(v23, v11);
        continue;
      }
      if ( v23 )
        operator delete(v23, v23);
      v15 = 0;
    }
    else
    {
      v15 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x64,
              (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
              (const char *)(unsigned int)LinkCollectionNodes);
      if ( v23 )
        operator delete(v23, v14);
    }
    if ( v15 < 0 )
      continue;
LABEL_38:
    LOWORD(LinkCollectionNodesLength) = v6;
    LODWORD(v23) = i;
    try
    {
      v18 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>();
      std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Insert_nohint<std::pair<enum GazeProperty const,unsigned short> &,std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *> *>(
        (_DWORD)Capabilities + 72,
        (int)&v20,
        v19,
        (_DWORD)v18 + 28,
        v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  return 0LL;
}
