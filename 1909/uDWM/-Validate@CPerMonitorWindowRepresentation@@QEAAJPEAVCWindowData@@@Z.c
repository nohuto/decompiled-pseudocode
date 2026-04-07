/*
 * XREFs of ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800B6DEC
 * Callers:
 *     ?UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ @ 0x18001ABF0 (-UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800101B0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001F3C8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023740 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AF20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ @ 0x1800B6868 (-EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ.c)
 *     ?EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindowData@@PEAPEAUSecondaryRepresentation@1@@Z @ 0x1800B6938 (-EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindow.c)
 *     ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B6CD0 (-RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::Validate(CPerMonitorWindowRepresentation *this, RECT *a2)
{
  unsigned int v2; // r15d
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  LONG left; // r14d
  LONG right; // r12d
  int AllDisplaysNoRef; // eax
  __int64 v11; // rcx
  HMONITOR v12; // rdi
  bool v13; // r14
  RECT *v14; // r12
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int RectangleGeometry; // eax
  CBaseObject *v19; // rcx
  int v20; // eax
  CBaseObject *v21; // r14
  int updated; // eax
  __int64 v23; // rcx
  struct tagPOINT *v24; // rcx
  CBaseObject *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  CBaseObject *v33[2]; // [rsp+30h] [rbp-49h] BYREF
  RECT v34; // [rsp+40h] [rbp-39h]
  __int128 v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+60h] [rbp-19h]
  unsigned int v37; // [rsp+68h] [rbp-11h]
  struct tagPOINT v38; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-1h] BYREF
  RECT rcSrc1; // [rsp+90h] [rbp+17h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (a2[21].bottom & 2) != 0 )
  {
    v6 = CPerMonitorWindowRepresentation::EnsureRootVisuals(this);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x53u);
      return v5;
    }
    v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
    if ( !v7 )
      return v5;
    left = 0;
    v36 = 0LL;
    v34 = (RECT)0LL;
    right = 0;
    v37 = 0;
    v35 = 0LL;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v7, (__int64)&v35);
    v5 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x5Bu);
      goto LABEL_41;
    }
    if ( v37 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v35 + 8LL * v2);
        v12 = *(HMONITOR *)(v11 + 16);
        if ( !v12 )
          goto LABEL_16;
        rcSrc1 = *(RECT *)(v11 + 56);
        v13 = rcSrc1.left == a2[21].left && rcSrc1.top == a2[21].top;
        v14 = a2 + 3;
        *(_QWORD *)&rcDst.left = 0LL;
        *(_QWORD *)&rcDst.right = 0LL;
        IntersectRect(&rcDst, &rcSrc1, a2 + 3);
        if ( v13 )
        {
          v34 = rcSrc1;
        }
        else if ( !IsRectEmpty(&rcDst) )
        {
          v33[0] = 0LL;
          v20 = CPerMonitorWindowRepresentation::EnsureSecondaryRepresentation(this, v12, (struct CWindowData *)a2, v33);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x7Du);
            goto LABEL_41;
          }
          v21 = v33[0];
          *(_DWORD *)(*((_QWORD *)v33[0] + 1) + 64LL) = rcDst.left - v14->left;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 68LL) = rcDst.top - a2[3].top;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 72LL) = rcDst.right - v14->left;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 76LL) = rcDst.bottom - a2[3].top;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 48LL) = 0;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 52LL) = 0;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 56LL) = rcDst.right - rcDst.left;
          *(_DWORD *)(*((_QWORD *)v21 + 1) + 60LL) = rcDst.bottom - rcDst.top;
          updated = CThumbnailVisual::UpdateProperties(
                      *(CSecondaryWindowRepresentation ***)(*((_QWORD *)v21 + 1) + 96LL),
                      *(_DWORD *)(*((_QWORD *)v21 + 1) + 44LL));
          v5 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x89u);
            goto LABEL_41;
          }
          v23 = *((_QWORD *)v21 + 1);
          v38.x = rcDst.left - v14->left;
          v24 = *(struct tagPOINT **)(v23 + 96);
          v38.y = rcDst.top - a2[3].top;
          CVisual::SetOffset(v24, &v38);
          goto LABEL_16;
        }
        v15 = CPerMonitorWindowRepresentation::RemoveSecondaryRepresentation(this, v12);
        v5 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x91u);
          goto LABEL_41;
        }
LABEL_16:
        if ( ++v2 >= v37 )
        {
          right = v34.right;
          left = v34.left;
          break;
        }
      }
    }
    if ( *((_DWORD *)this + 14) )
    {
      v16 = left - a2[3].left;
      v17 = v34.top - a2[3].top;
      v33[0] = 0LL;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v16, v17, right - left, v34.bottom - v34.top, v33);
      v5 = RectangleGeometry;
      if ( RectangleGeometry >= 0 )
      {
        v25 = v33[0];
        v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( v26 )
          v27 = *(unsigned int *)(*(_QWORD *)(v26 + 16) + 24LL);
        else
          v27 = 0LL;
        v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 5)
                                                                               + 16LL)
                                                                 + 416LL))(
                *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                v27,
                *(unsigned int *)(*((_QWORD *)v33[0] + 2) + 24LL));
        v5 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xA9u);
        v19 = v25;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xA6u);
        v19 = v33[0];
        if ( !v33[0] )
          goto LABEL_41;
      }
      CBaseObject::Release(v19);
    }
    else
    {
      v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( v29 )
        v30 = *(unsigned int *)(*(_QWORD *)(v29 + 16) + 24LL);
      else
        v30 = 0LL;
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 5)
                                                                             + 16LL)
                                                               + 416LL))(
              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
              v30,
              0LL);
      v5 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xAEu);
    }
LABEL_41:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v35);
  }
  return v5;
}
