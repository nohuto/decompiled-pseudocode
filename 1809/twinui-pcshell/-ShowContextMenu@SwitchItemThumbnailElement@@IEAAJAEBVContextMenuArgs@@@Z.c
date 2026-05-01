/*
 * XREFs of ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180317880
 * Callers:
 *     ?v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x180317D30 (-v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetThreadUILanguage_0 @ 0x18008578E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x1800E6F0C (--1-$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHel.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180316EF4 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x180317C54 (-_SHPrettyMenu@@YAXPEAUHMENU__@@@Z.c)
 *     ?GetScreenLocation@ContextMenuArgs@@QEBA?AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x180322BE4 (-GetScreenLocation@ContextMenuArgs@@QEBA-AUCPoint@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B65F4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::ShowContextMenu(
        SwitchItemThumbnailElement *this,
        const struct ContextMenuArgs *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  HMENU v7; // rcx
  _QWORD *v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  HWND hWnd; // rdi
  LANGID ThreadUILanguage_0; // ax
  int v14; // eax
  unsigned int v15; // ebx
  HWND v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 i; // rbx
  ContextMenuRenderingData *v19; // rcx
  HMENU v20; // rcx
  int hData[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v22[2]; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HMENU hMenu; // [rsp+80h] [rbp+20h] BYREF
  __int64 x; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 40LL))(
          *((_QWORD *)this + 73),
          *((_QWORD *)this + 72)) )
    return 0LL;
  v4 = *((_QWORD *)this + 73);
  hMenu = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, HMENU *))(*(_QWORD *)v4 + 48LL))(v4, *((_QWORD *)this + 72), &hMenu);
  v6 = v5;
  if ( v5 >= 0 )
  {
    _SHPrettyMenu(hMenu);
    ContextMenuArgs::GetScreenLocation(a2, &x, this);
    v9 = *(_QWORD **)this;
    v10 = x;
    v28 = x;
    v11 = ((__int64 (__fastcall *)(SwitchItemThumbnailElement *))v9[41])(this);
    *(_QWORD *)hData = 0LL;
    hWnd = (HWND)v11;
    *(_QWORD *)v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)hMenu, v11, (int)&v28, 8, hData);
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v14 = IsBiDiLocale(ThreadUILanguage_0);
    v15 = TrackPopupMenu(hMenu, v14 != 0 ? 33034 : 258, v10, SHIDWORD(x), 0, hWnd, 0LL);
    ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(hMenu, (HMENU)hWnd, v16);
    if ( v15 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 73) + 88LL))(
        *((_QWORD *)this + 73),
        *((_QWORD *)this + 72),
        v15);
    v17 = *(_QWORD *)v22;
    for ( i = 0LL; i < v17; ++i )
    {
      v19 = *(ContextMenuRenderingData **)(*(_QWORD *)hData + 8 * i);
      if ( v19 )
      {
        ContextMenuRenderingData::`scalar deleting destructor'(v19);
        v17 = *(_QWORD *)v22;
      }
    }
    CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)hData);
    CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)hData);
    v20 = hMenu;
    hMenu = 0LL;
    if ( v20 )
      DestroyMenu(v20);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
    (const char *)(unsigned int)v5);
  v7 = hMenu;
  hMenu = 0LL;
  if ( v7 )
    DestroyMenu(v7);
  return v6;
}
