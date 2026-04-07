/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003A990
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  int v1; // eax
  CBaseObject *v2; // rsi
  struct CResource **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int RectangleGeometry; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CDrawGeometryInstruction *v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0LL;
  v18 = 0LL;
  if ( (v1 & 0x1000) == 0 )
  {
LABEL_12:
    v16 = CRenderDataVisual::ValidateVisual(this);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xABu);
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_11:
    *((_DWORD *)this + 20) = v1 & 0xFFFFEFFF;
    goto LABEL_12;
  }
  v4 = (struct CResource **)((char *)this + 304);
  v5 = *((unsigned int *)this + 85);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 86);
  v8 = *((_DWORD *)this + 87) - v5;
  v9 = *((unsigned int *)this + 84);
  if ( v8 >= 0 )
    v6 = (unsigned int)v8;
  v10 = 0LL;
  v11 = v7 - v9;
  if ( v11 >= 0 )
    v10 = (unsigned int)v11;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v5, v10, v6, v4);
  v13 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xA3u);
    return v13;
  }
  v14 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 37), *v4, &v18);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA4u);
    v2 = v18;
  }
  else
  {
    v2 = v18;
    v15 = CRenderDataVisual::AddInstruction(this, v18);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v1 = *((_DWORD *)this + 20);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xA5u);
  }
LABEL_13:
  if ( v2 )
    CBaseObject::Release(v2);
  return v13;
}
