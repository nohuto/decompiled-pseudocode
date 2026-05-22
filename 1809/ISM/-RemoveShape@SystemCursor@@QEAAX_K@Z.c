/*
 * XREFs of ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60
 * Callers:
 *     ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800927C0 (-DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800929B0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800977FC (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180093F8C (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x180096CCC (-GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x18009702C (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

void __fastcall SystemCursor::RemoveShape(SystemCursor *this, unsigned __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v5; // rax
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (__int64 *)*((_QWORD *)this + 4);
  v5 = v2;
  v6 = (__int64 *)v2[1];
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
  if ( v5 == v2 || a2 < v5[4] )
    v5 = v2;
  if ( v5 != v2 )
  {
    if ( *((_QWORD *)this + 6) == a2 )
    {
      v7 = SystemCursor::GetAndValidateDefaultShapeId(this);
      if ( v7 )
      {
        v8 = SystemCursor::SetShape(this, v7);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice.cpp",
            (const char *)(unsigned int)v8);
      }
      else
      {
        *((_QWORD *)this + 6) = 32512LL;
      }
    }
    if ( *((_QWORD *)this + 7) == a2 )
      *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
      (__int64 ***)this + 4,
      &v10);
  }
}
