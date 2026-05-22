/*
 * XREFs of ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x18009702C
 * Callers:
 *     ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800966F0 (-OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x180096D24 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x180096CCC (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180097234 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 *     ??A?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursorShape@@@1@AEB_K@Z @ 0x180097C58 (--A-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$sh.c)
 */

__int64 __fastcall SystemCursor::SetShape(SystemCursor *this, unsigned __int64 a2)
{
  int v2; // r14d
  __int64 *v3; // r9
  __int64 *v5; // rax
  __int64 *v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  __int64 *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  SystemCursorShape **v13; // rax
  SystemCursorShape **v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v16; // [rsp+38h] [rbp+10h]

  v16 = a2;
  *((_QWORD *)this + 7) = a2;
  v2 = (_DWORD)this + 32;
  v3 = (__int64 *)*((_QWORD *)this + 4);
  v5 = v3;
  v6 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v6[4] >= a2 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( v5 == v3 || a2 < v5[4] )
    v5 = (__int64 *)*((_QWORD *)this + 4);
  if ( v5 == v3 )
  {
    a2 = SystemCursor::GetAndValidateDefaultShapeId(this);
    v16 = a2;
  }
  if ( !a2 )
  {
    v7 = -2147418113;
    v8 = 492LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = (__int64 *)v3[1];
  v11 = *((_QWORD *)this + 6);
  v12 = v3;
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_21;
  do
  {
    if ( v10[4] >= v11 )
    {
      v12 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v12 == v3 || v11 < v12[4] )
LABEL_21:
    v12 = v3;
  if ( v12 != v3 )
  {
    if ( !*((_BYTE *)this + 16) )
      goto LABEL_31;
    v13 = (SystemCursorShape **)std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::operator[](v2);
    v7 = SystemCursorShape::SetVisible(*v13, 0);
    if ( v7 < 0 )
    {
      v8 = 496LL;
      goto LABEL_13;
    }
    a2 = v16;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v14 = (SystemCursorShape **)std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::operator[](v2);
    v7 = SystemCursorShape::SetVisible(*v14, 1);
    if ( v7 < 0 )
    {
      v8 = 501LL;
      goto LABEL_13;
    }
    a2 = v16;
  }
LABEL_31:
  *((_QWORD *)this + 6) = a2;
  return 0LL;
}
