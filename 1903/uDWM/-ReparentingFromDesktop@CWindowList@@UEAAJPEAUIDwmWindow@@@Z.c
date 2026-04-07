/*
 * XREFs of ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800375E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x18001367C (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180015A00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026654 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ReparentingFromDesktop(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  int v5; // ebx
  CWindowData *v6; // rdi
  CBaseObject *v8; // rcx
  CWindowData *v9; // rax
  int v10; // eax
  CWindowList *v11; // rcx
  void *v12; // [rsp+28h] [rbp-10h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v9 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        752LL);
  if ( v9 )
    v6 = CWindowData::CWindowData(v9);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v12);
    goto LABEL_14;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v10 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v10;
  if ( v10 >= 0 )
LABEL_3:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x895u, v12);
  if ( v5 < 0 )
  {
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xE1Cu, v12);
    goto LABEL_6;
  }
  if ( v4 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v4 + 48);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)v4 + 48) = 0LL;
      CWindowList::OnGDISurfaceChange(v11, v4);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
