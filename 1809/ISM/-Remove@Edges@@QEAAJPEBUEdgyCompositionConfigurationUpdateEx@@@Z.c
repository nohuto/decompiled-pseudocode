/*
 * XREFs of ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB260
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1800CA2D0 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1800CBF98 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  int Edge; // eax
  __int64 v4; // r8
  bool v5; // cl
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  char v11[32]; // [rsp+28h] [rbp-30h] BYREF

  Edge = Edges::FindEdge(this, (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
    return 2147942487LL;
  v5 = 0;
  v6 = 104LL * Edge;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + v6 + 24) )
    v5 = *(_QWORD *)(v7 + v6 + 40) != 0LL;
  if ( v5 )
  {
    *(_DWORD *)(v7 + v6 + 64) = 0;
  }
  else
  {
    v8 = v6 + v7 + 8;
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      v8 = *(_QWORD *)v8;
    std::wstring::wstring(v11, (_WORD *)v8, v4);
    std::vector<Edge>::erase(this, v10, v6 + *(_QWORD *)this);
    std::wstring::~wstring((__int64)v11);
  }
  return 0LL;
}
