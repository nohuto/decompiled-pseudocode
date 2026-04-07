/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180034960
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180034BE4 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180034DA8 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2)
{
  __int64 v2; // rdx
  double v4; // xmm6_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v8; // rdi
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v13; // rdi
  char v14; // bp
  CTimelineBase *v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rdi
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Start);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v13 = &CDesktopManager::s_listTimeline;
    v14 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        v15 = (CTimelineBase *)&Next[-2];
        if ( LODWORD(Next[-1].Next) )
        {
          if ( v14 )
          {
            if ( *((_BYTE *)v15 + 73) )
            {
              v16 = CTimelineBase::UpdateBeforeTickWorker(v15, (CDesktopManager *)((char *)this + 328));
              Next = v13->Next;
            }
            else
            {
              v16 = 0;
            }
            if ( v16 < 0 )
              v14 = 0;
          }
          v13 = Next;
        }
        else
        {
          if ( Next )
            v13->Next = Next->Next;
          (**(void (__fastcall ***)(CTimelineBase *, __int64))v15)(v15, 1LL);
        }
        Next = v13->Next;
      }
      while ( v13->Next );
    }
    v17 = *((_QWORD *)this + 43);
    if ( v17 && v14 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 88LL))(v17, v2, 0LL) < 0 )
      v14 = 0;
    v18 = *((_QWORD *)this + 43);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      *((_QWORD *)this + 43) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v14 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8)
                                                          + 64LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v4 = a2 / 20.0;
  }
  v6 = *((_QWORD *)this + 41);
  *((double *)this + 40) = v4 + *((double *)this + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v8 = j - 2;
    if ( !LOBYTE(j[7].Next) )
    {
      v9 = v8[8].Next;
      v20 = 0LL;
      if ( !v9 || ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v9->Next[9].Next)(v9, &v20) < 0 )
      {
        LOBYTE(v8[9].Next) = 1;
LABEL_18:
        CTimelineBase::JumpToFinalValue((CTimelineBase *)&j[-2]);
        continue;
      }
      v10 = v20;
      v11 = v20 == 0;
      LOBYTE(v8[9].Next) = v20 == 0;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v11 = (char)v8[9].Next;
        v20 = 0LL;
      }
      if ( v11 )
        goto LABEL_18;
      ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v8[8].Next->Next[3].Next)(
        v8[8].Next,
        &v8[6]);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Stop);
}
