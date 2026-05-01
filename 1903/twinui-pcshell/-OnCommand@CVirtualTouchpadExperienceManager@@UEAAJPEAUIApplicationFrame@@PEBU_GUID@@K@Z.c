/*
 * XREFs of ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1801A9290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A897C (-HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A8AEC (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnCommand(
        CVirtualTouchpadExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  HWND v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v4 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( !v4 && (v7 = *((_QWORD *)this + 39)) != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
  {
    v10 = CVirtualTouchpadExperienceManager::HideInternal(
            (CVirtualTouchpadExperienceManager *)((char *)this - 16),
            v8,
            v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    v13 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v13 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( !v13
      && (v14 = *((_QWORD *)this + 39)) != 0
      && (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v14 + 24LL))(v14, a2) )
    {
      *((_BYTE *)this + 285) = 1;
    }
    else
    {
      v15 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
        v15 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
      if ( !v15 )
      {
        v16 = *((_QWORD *)this + 39);
        if ( v16 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v16 + 24LL))(v16, a2) )
          {
            v17 = (HWND)*((_QWORD *)this + 40);
            *((_BYTE *)this + 285) = 0;
            if ( MonitorFromWindow(v17, 2u) != *((HMONITOR *)this + 41) )
              CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange((CVirtualTouchpadExperienceManager *)((char *)this - 16));
          }
        }
      }
    }
  }
  return 0LL;
}
