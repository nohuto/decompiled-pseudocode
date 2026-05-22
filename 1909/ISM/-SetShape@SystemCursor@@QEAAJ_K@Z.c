/*
 * XREFs of ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1800CDB20
 * Callers:
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBBE8 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800CD670 (-OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1800CD9AC (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x1800C88DC (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CA928 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800CB320 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@@Z @ 0x1800CB51C (--$_Insert_hint@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x1800CD1AC (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x1800CDD78 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 */

__int64 __fastcall SystemCursor::SetShape(SystemCursor *this, __int64 a2)
{
  unsigned __int64 v2; // rdi
  int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rbx
  _QWORD *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  _QWORD *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned __int64 *v19; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v20 = a2;
  v2 = a2;
  *((_QWORD *)this + 7) = a2;
  if ( !SystemCursor::ShapeExists(this, a2) )
  {
    v2 = SystemCursor::GetAndValidateDefaultShapeId(this);
    v20 = v2;
  }
  if ( !v2 )
  {
    v4 = -2147418113;
    v5 = 487LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (unsigned __int64 *)((char *)this + 48);
  v8 = *((_QWORD *)this + 6);
  if ( SystemCursor::ShapeExists(this, v8) )
  {
    if ( !*((_BYTE *)this + 16) )
      goto LABEL_21;
    v9 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
           (__int64 *)this + 4,
           (_QWORD *)this + 6);
    v11 = v9;
    if ( v9 == *((__int64 **)this + 4) || v8 < v9[4] )
    {
      v19 = (unsigned __int64 *)((char *)this + 48);
      v12 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
              (_QWORD *)this + 4,
              v10,
              &v19);
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        (__int64 *)this + 4,
        (__int64 *)&v19,
        v11,
        v12 + 4,
        v12);
      v11 = (__int64 *)v19;
    }
    v4 = SystemCursorShape::SetVisible((SystemCursorShape *)v11[5], 0);
    if ( v4 < 0 )
    {
      v5 = 491LL;
      goto LABEL_5;
    }
    v2 = v20;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v13 = (__int64 *)((char *)this + 32);
    v14 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
            v13,
            &v20);
    v16 = v14;
    if ( v14 == (__int64 *)*v13 || v2 < v14[4] )
    {
      v19 = &v20;
      v17 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
              v13,
              v15,
              &v19);
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        v13,
        (__int64 *)&v19,
        v16,
        v17 + 4,
        v17);
      v16 = (__int64 *)v19;
    }
    v4 = SystemCursorShape::SetVisible((SystemCursorShape *)v16[5], 1);
    if ( v4 < 0 )
    {
      v5 = 496LL;
      goto LABEL_5;
    }
    v2 = v20;
  }
LABEL_21:
  *v7 = v2;
  return 0LL;
}
