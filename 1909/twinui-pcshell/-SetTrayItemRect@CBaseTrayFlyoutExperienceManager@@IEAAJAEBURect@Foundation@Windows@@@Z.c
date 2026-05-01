/*
 * XREFs of ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A3DC
 * Callers:
 *     ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x180099B20 (-PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A5A8 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180099DCC (-RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180195250 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::SetTrayItemRect(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdx
  int *v7; // rsi
  int v8; // edi
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-58h] BYREF
  RECT v13; // [rsp+28h] [rbp-50h] BYREF
  _AppBarData pData; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((float *)a2 + 2) >= 1.0 && *((float *)a2 + 3) >= 1.0 )
  {
    *((_DWORD *)this + 95) = (int)*((float *)a2 + 1);
    *((_DWORD *)this + 94) = (int)*(float *)a2;
    *((_DWORD *)this + 96) = (int)(float)(*(float *)a2 + *((float *)a2 + 2));
    v3 = (int)(float)(*((float *)a2 + 3) + *((float *)a2 + 1));
    goto LABEL_15;
  }
  pData.cbSize = 48;
  memset_0(&pData.hWnd, 0, 0x28uLL);
  if ( !(unsigned int)SHAppBarMessage(5u, &pData) )
  {
    v4 = -2147418113;
    v5 = 707LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (int *)((char *)this + 376);
  if ( !CopyRect((LPRECT)((char *)this + 376), &pData.rc) )
  {
    v4 = -2147467259;
    v5 = 708LL;
    goto LABEL_6;
  }
  v8 = *((_DWORD *)this + 97) - *((_DWORD *)this + 95);
  if ( v8 >= *((_DWORD *)this + 96) - *v7 )
    v8 = *((_DWORD *)this + 96) - *v7;
  if ( (unsigned int)Mirror_IsThreadRTL() )
    v9 = *v7;
  else
    v9 = *((_DWORD *)this + 96) - v8;
  v3 = *((_DWORD *)this + 97);
  *v7 = v9;
  *((_DWORD *)this + 95) = v3 - v8;
  *((_DWORD *)this + 96) = v8 + v9;
LABEL_15:
  *((_DWORD *)this + 97) = v3;
  v12 = 0;
  v10 = *((_QWORD *)this + 8);
  *(_QWORD *)&v13.left = 0LL;
  *(_QWORD *)&v13.right = 0LL;
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, RECT *, int *))(*(_QWORD *)v10 + 40LL))(v10, &v13, &v12);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DA,
        (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
        (const char *)(unsigned int)v11);
  }
  v4 = CBaseTrayFlyoutExperienceManager::RecalculateClipRect((__int64)this, &v13, v12);
  if ( v4 < 0 )
  {
    v5 = 732LL;
    goto LABEL_6;
  }
  return 0LL;
}
