/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801B252C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180193B0C (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801B2434 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SHAPEVISUAL_SETSHAPES *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v9; // eax
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v16; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v10 = -2003303421;
    v14 = 43;
    v12 = -2003303421;
    goto LABEL_12;
  }
  v9 = CShapeVisual::EnsureShapeTree(this, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 47;
    goto LABEL_9;
  }
  v11 = *((_DWORD *)a3 + 2) == 0;
  v15[1] = a4;
  v15[0] = (unsigned __int64)v5 >> 2;
  if ( !a4 && (unsigned __int64)v5 >> 2 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  v9 = CContainerVectorShape::SetShapes((struct CResource ***)v16, a2, v15, !v11);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 53;
LABEL_9:
    v12 = v9;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v12, v14);
  }
  return v10;
}
