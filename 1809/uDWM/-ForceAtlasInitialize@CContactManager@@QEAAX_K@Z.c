/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004551C
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800438E4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180045EA8 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004571C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180045770 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800458F4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180045A8C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800475EC (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CTransitionWindowSnapshot *v2; // rsi
  int v3; // eax
  struct CVisual *v4; // rbx
  int v5; // eax
  CContactManager *v6; // rcx
  CBaseObject *v7; // rdi
  int v8; // eax
  struct CVisual *v9; // rdx
  CContactManager *v10; // rcx
  struct CTransitionWindowSnapshot *v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v14; // [rsp+A0h] [rbp+48h] BYREF
  CBaseObject *v15; // [rsp+A8h] [rbp+50h] BYREF

  v13 = a2;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v13);
  v14 = 0LL;
  v15 = 0LL;
  v2 = 0LL;
  *(_QWORD *)&v12.left = 0LL;
  v12.right = 50;
  v12.bottom = 50;
  v11 = 0LL;
  v3 = CVisual::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
         (struct CVisual **)&v14);
  v4 = (struct CVisual *)v14;
  if ( v3 >= 0 )
  {
    v5 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v15);
    v7 = v15;
    if ( v5 >= 0 && CContactManager::AddToTouchNode(v6, v13, v4) >= 0 )
    {
      VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), v7, 0LL, 0, 1);
      v14.x = -32000;
      v14.y = -32000;
      CVisual::SetOffset((struct tagPOINT *)v7, &v14);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                  v13) >= 0 )
      {
        VisualCollection::InsertRelative((CBaseObject *)((char *)v7 + 32), 0LL, 0LL, 0, 1);
        CDirectTouchVisual::StartHold(0LL, &v14, &v12);
        v8 = CTransitionWindowSnapshot::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               &v12,
               v7,
               &v11);
        v2 = v11;
        if ( v8 >= 0 )
        {
          v9 = v11;
          *((__m128i *)v11 + 21) = _mm_load_si128((const __m128i *)&_xmm);
          VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), v9, 0LL, 0, 1);
          (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v4 + 64LL))(v4);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
        }
        VisualCollection::Remove((CBaseObject *)((char *)v7 + 32), 0LL);
      }
      VisualCollection::Remove((struct CVisual *)((char *)v4 + 32), v7);
      CContactManager::RemoveFromTouchNode(v10, v13, v4);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v4 )
    CBaseObject::Release(v4);
}
