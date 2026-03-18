/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800AD240
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x1800AE398 (-BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, struct CShapePtr *a2, char a3)
{
  unsigned int v3; // ebx
  CShape *v4; // rbp
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct CShape *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CGdiSpriteBitmap *)((char *)this + 224);
  if ( *((char *)this + 60) < 0 )
  {
    v8 = CRegionShape::BuildFromCRegion(
           (CGdiSpriteBitmap *)((char *)this + 224),
           (CGdiSpriteBitmap *)((char *)this + 152));
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2C8u, 0LL);
      return v3;
    }
    *((_BYTE *)this + 60) &= ~0x80u;
  }
  if ( a3 )
  {
    v11 = CShape::CopyShape(v4, 0LL, &v14);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2D4u, 0LL);
    }
    else
    {
      CShapePtr::Release(a2);
      *(_QWORD *)a2 = v14;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 19) = 0;
      **((_DWORD **)this + 30) = 0;
      v13 = *((_QWORD *)this + 39);
      *((_QWORD *)this + 39) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = v4;
    *((_BYTE *)a2 + 8) = 0;
  }
  return v3;
}
