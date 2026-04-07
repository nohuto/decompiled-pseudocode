/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z @ 0x1800982D4
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180098C70 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180079F64 (-Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CResource **a3,
        struct CResource **a4)
{
  CBaseObject *v4; // r14
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  CBaseObject *v13; // rax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+60h] [rbp-38h] BYREF
  CBaseObject *v18; // [rsp+68h] [rbp-30h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v8 = CResource::Create(0x17u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD))(**((_QWORD **)*a4 + 2) + 1072LL))(
            *((_QWORD *)*a4 + 2),
            *((unsigned int *)*a4 + 6),
            *(_QWORD *)a2,
            *((unsigned int *)a2 + 6),
            *((_QWORD *)a2 + 4),
            *((_DWORD *)a2 + 14),
            *((_QWORD *)a2 + 12),
            *((_DWORD *)a2 + 30),
            *((_QWORD *)a2 + 8),
            *((_DWORD *)a2 + 22));
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)*a4 + 2) + 976LL))(
              *((_QWORD *)*a4 + 2),
              *((unsigned int *)*a4 + 6),
              0xFFFFFFFFLL);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v12 = CResource::Create(0xEu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), a3);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v13 = *a3;
          v17 = *((_DWORD *)*a4 + 6);
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)v13 + 2) + 1080LL))(
                  *((_QWORD *)v13 + 2),
                  *((unsigned int *)v13 + 6),
                  &v17,
                  1LL);
          v9 = v14;
          if ( v14 >= 0 )
          {
            v15 = CDrawMesh2DInstruction::Create(*a3, *(struct CResource **)(*((_QWORD *)this + 48) + 16LL), &v18);
            v9 = v15;
            if ( v15 >= 0 )
            {
              v4 = v18;
              CRenderDataVisual::AddInstruction(this, v18);
              if ( v4 )
                CBaseObject::Release(v4);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x10Du);
              v4 = v18;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x10Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x10Au);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x108u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x104u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xFAu);
  }
  if ( v9 < 0 )
  {
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  return (unsigned int)v9;
}
