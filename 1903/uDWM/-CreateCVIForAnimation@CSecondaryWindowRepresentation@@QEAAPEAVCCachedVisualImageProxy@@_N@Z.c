/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18000F85C
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18001F5D0 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000CF44 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18000FA08 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@IIPEAVCVisualProxy@@W4Enum@Mil.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180011A28 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180037F18 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

struct CCachedVisualImageProxy *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CCachedVisualImageProxy *v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  int v15; // eax
  void *v17; // [rsp+28h] [rbp-58h]
  void *v18; // [rsp+28h] [rbp-58h]
  _DWORD v19[4]; // [rsp+40h] [rbp-40h]
  CCachedVisualImageProxy *v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+68h] [rbp-18h] BYREF

  v2 = *((_DWORD *)this + 22);
  v20 = 0LL;
  v19[0] = v2;
  v19[1] = *((_DWORD *)this + 24);
  v19[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v19[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v20);
  v6 = v20;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x33Bu, v17);
    goto LABEL_16;
  }
  v8 = 0LL;
  v21 = 0LL;
  do
  {
    *(float *)&v22[v8] = (float)(int)v19[v8];
    ++v8;
  }
  while ( v8 < 4 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_18;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_8;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v11 + 440) + 80LL);
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(v11 + 432);
  if ( !v12 )
  {
LABEL_18:
    v9 = v11;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v12 + 32);
LABEL_8:
  v13 = *(_QWORD *)(v9 + 400);
  if ( v13 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v10 = *(_QWORD *)(v13 + 528);
    else
      v10 = *(_QWORD *)(v13 + 256);
  }
  if ( v10 )
    v14 = *(void **)(v10 + 16);
  else
    v14 = 0LL;
  v18 = v14;
  v15 = CCachedVisualImageProxy::Update(v6, v22, &v21, 0LL, 0);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x356u, v18);
  }
  else if ( a2 )
  {
    CCachedVisualImageProxy::Freeze(v6);
  }
LABEL_16:
  if ( v7 < 0 && v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
