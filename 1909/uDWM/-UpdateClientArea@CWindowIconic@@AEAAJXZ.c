/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F310
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F0B8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FA7C (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FC54 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180028E54 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180038464 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039AE4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003F4D4 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // r8
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  bool v11; // dl
  const struct _D3DCOLORVALUE *v12; // r8
  const struct _D3DCOLORVALUE *v13; // r9
  CBaseObject *v14; // rsi
  int v15; // eax
  int v16; // eax
  CVisual *v17; // rcx
  CBaseObject *v18; // rax
  __int64 v19; // rdx
  void *v21; // [rsp+28h] [rbp-38h]
  int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch]
  CBaseObject *v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v24 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( v1[47] - v1[45] >= 0 )
    v3 = v1[47] - v1[45];
  v5 = v3 - v1[62] - v1[61];
  if ( v5 < 0 )
    v5 = 0;
  v22 = v5;
  if ( v1[48] - v1[46] >= 0 )
    v4 = v1[48] - v1[46];
  v6 = v4 - v1[64] - v1[63];
  if ( v6 < 0 )
    v6 = 0;
  v23 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 96LL))(*((_QWORD *)this + 13), &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x100u, v21);
  }
  else
  {
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 13));
    v9 = *((_DWORD *)this + 4);
    if ( v9 >= 0 )
    {
      if ( v9 > 1 )
      {
        if ( v9 == 2 )
        {
          CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
          CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
        }
      }
      else
      {
        *(_QWORD *)&v25 = 0LL;
        *((float *)&v25 + 2) = (float)v22;
        *((float *)&v25 + 3) = (float)v23;
        v10 = CRectangleInstruction::Create(&v24);
        v14 = v24;
        v8 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x10Eu, v21);
        }
        else
        {
          v15 = CRectangleInstruction::SetLinearGradientFill(v24, v11, v12, v13, 1.0);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x10Fu, v21);
          }
          else
          {
            *((_OWORD *)v14 + 2) = v25;
            v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v14);
            v8 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x112u, v21);
            }
            else
            {
              v17 = (CVisual *)*((_QWORD *)this + 12);
              LODWORD(v18) = 0;
              v24 = 0LL;
              v19 = *((_QWORD *)v17 + 35);
              if ( v19 )
              {
                v18 = *(CBaseObject **)(v19 + 24);
                v24 = v18;
              }
              CVisual::SetInsetFromParentLeft(v17, (v22 - (int)v18) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v23 - HIDWORD(v24)) / 2);
            }
          }
        }
        if ( v14 )
          CBaseObject::Release(v14);
      }
    }
  }
  return v8;
}
