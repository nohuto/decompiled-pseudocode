/*
 * XREFs of ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180096BC4
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003A6E0 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18007ACF0 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x18009623C (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x18009632C (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x18009E918 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x18009E988 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleKeystateFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r10d
  const struct tagPOINT *v4; // rbx
  int v6; // esi
  unsigned __int16 *v7; // r15
  unsigned int v8; // ebp
  __int64 *v9; // r14
  __int64 v10; // r9
  unsigned __int16 *v11; // rax
  int v12; // r9d
  int v13; // eax
  const struct tagPOINT *v14; // rcx
  unsigned __int16 *v15; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  CTrackingTooltip *v18; // rcx
  __int64 v19; // rax
  CTrackingTooltip *v20; // rcx
  CTrackingTooltip *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 60);
  v4 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v3 )
  {
    v9 = (__int64 *)((char *)this + 216);
    v10 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v10 + 40LL * v8) != a3 )
    {
      if ( ++v8 >= v3 )
        goto LABEL_38;
    }
    if ( (v8 & 0x80000000) == 0 )
    {
      if ( a2 )
      {
        if ( *(_QWORD *)(v10 + 40LL * v8 + 32) )
        {
          if ( *(_DWORD *)(v10 + 40LL * v8 + 4) != *(_DWORD *)(v10 + 40LL * v8 + 16) )
          {
            v11 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        2LL * *((int *)this + 12));
            v7 = v11;
            if ( !v11 )
            {
              v23 = 1831;
LABEL_12:
              v12 = -2147024882;
              v6 = -2147024882;
LABEL_13:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v23);
              goto LABEL_38;
            }
            *v11 = 0;
            v13 = CContactManager::BuildFeedbackString(
                    (size_t **)this,
                    *(_DWORD *)(*v9 + 40LL * v8 + 4),
                    v11,
                    *((_DWORD *)this + 12));
            v6 = v13;
            if ( v13 < 0 )
            {
              v23 = 1833;
LABEL_16:
              v12 = v13;
              goto LABEL_13;
            }
            v10 = *v9;
          }
          v14 = (const struct tagPOINT *)(v10 + 40LL * v8);
          if ( v14[1].x != v14[2].y || *(_DWORD *)(v10 + 40LL * v8 + 12) != *(_DWORD *)(v10 + 40LL * v8 + 24) )
            v4 = v14 + 1;
          CTrackingTooltip::Update(*(CTrackingTooltip **)(v10 + 40LL * v8 + 32), v4, v7);
        }
        else
        {
          v15 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      2LL * *((int *)this + 12));
          v7 = v15;
          if ( !v15 )
          {
            v23 = 1849;
            goto LABEL_12;
          }
          *v15 = 0;
          v13 = CContactManager::BuildFeedbackString(
                  (size_t **)this,
                  *(_DWORD *)(*v9 + 40LL * v8 + 4),
                  v15,
                  *((_DWORD *)this + 12));
          v6 = v13;
          if ( v13 < 0 )
          {
            v23 = 1851;
            goto LABEL_16;
          }
          v16 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           112LL);
          v17 = v16;
          if ( v16 )
            *v16 = 0;
          else
            v17 = 0LL;
          *(_QWORD *)(*v9 + 40LL * v8 + 32) = v17;
          v18 = *(CTrackingTooltip **)(*v9 + 40LL * v8 + 32);
          if ( !v18 )
          {
            v23 = 1854;
            goto LABEL_12;
          }
          v6 = CTrackingTooltip::Initialize(v18, (const struct tagPOINT *)(*v9 + 8 + 40LL * v8), v7);
          if ( v6 < 0 )
          {
            v19 = *v9;
            v20 = *(CTrackingTooltip **)(*v9 + 40LL * v8 + 32);
            if ( v20 )
            {
              CTrackingTooltip::`scalar deleting destructor'(v20);
              v19 = *v9;
            }
            *(_QWORD *)(v19 + 40LL * v8 + 32) = 0LL;
          }
        }
      }
      else
      {
        v21 = *(CTrackingTooltip **)(v10 + 40LL * v8 + 32);
        if ( v21 )
        {
          CTrackingTooltip::`scalar deleting destructor'(v21);
          v10 = *v9;
        }
        *(_QWORD *)(v10 + 40LL * v8 + 32) = 0LL;
        DynArray<CPenContact,0>::RemoveAt(v9, v8);
      }
    }
  }
LABEL_38:
  (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return (unsigned int)v6;
}
