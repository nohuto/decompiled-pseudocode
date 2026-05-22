/*
 * XREFs of ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1800CD9AC
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800C9C90 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C9F70 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CBE00 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CA928 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CB03C (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x1800CD1AC (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1800CDB20 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

void __fastcall SystemCursor::RemoveShape(SystemCursor *this, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( SystemCursor::ShapeExists(this, a2) )
  {
    if ( *((_QWORD *)this + 6) == a2 )
    {
      v4 = SystemCursor::GetAndValidateDefaultShapeId(this);
      if ( v4 )
      {
        v5 = SystemCursor::SetShape(this, v4);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            459LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice.cpp",
            (const char *)(unsigned int)v5);
      }
      else
      {
        *((_QWORD *)this + 6) = 32512LL;
      }
    }
    if ( *((_QWORD *)this + 7) == a2 )
      *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
      (__int64 *)this + 4,
      (unsigned __int64 *)&v7);
  }
}
