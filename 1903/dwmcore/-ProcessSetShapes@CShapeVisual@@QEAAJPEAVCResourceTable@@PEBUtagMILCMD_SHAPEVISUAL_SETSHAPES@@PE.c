/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801FA308
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D5220 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801FA204 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETSHAPES *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  bool v14; // zf
  unsigned int v15; // r9d
  unsigned int v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v13 = -2003303421;
    v15 = -2003303421;
    v17 = 41;
    goto LABEL_12;
  }
  v9 = CShapeVisual::EnsureShapeTree(this, &v19);
  v13 = v9;
  if ( v9 < 0 )
  {
    v17 = 45;
    goto LABEL_9;
  }
  v14 = *((_BYTE *)a3 + 8) == 0;
  v18[1] = a4;
  LOBYTE(v12) = !v14;
  v18[0] = (unsigned __int64)v5 >> 2;
  if ( !a4 && (unsigned __int64)v5 >> 2 )
  {
    ((void (__fastcall *)(CShapeVisual *, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      v10,
      v11,
      v12);
    __debugbreak();
  }
  v9 = CContainerVectorShape::SetShapes((struct CResource ***)v19, a2, v18, v12);
  v13 = v9;
  if ( v9 < 0 )
  {
    v17 = 51;
LABEL_9:
    v15 = v9;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v15, v17, 0LL);
  }
  return v13;
}
