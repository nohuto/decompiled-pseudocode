/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010AC8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // edi
  struct CWindowData *v6; // rbp
  CWindowData *v7; // rax
  CWindowData *v8; // rax
  int v9; // eax
  int v10; // edx
  CWindowList *v11; // rcx
  __int128 v12; // xmm0
  void *v14; // [rsp+28h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-38h] BYREF
  CWindowList *v16[2]; // [rsp+38h] [rbp-30h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_8;
  v7 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        752LL);
  if ( !v7 || (v8 = CWindowData::CWindowData(v7), (v6 = v8) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v14);
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xBECu, v14);
    goto LABEL_17;
  }
  *((_QWORD *)v8 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v8);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v9 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v9;
  if ( v9 >= 0 )
LABEL_8:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x895u, v14);
  if ( v5 < 0 )
    goto LABEL_10;
  if ( v4 )
  {
    v16[0] = 0LL;
    v16[1] = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, CWindowList **))(*(_QWORD *)a2 + 120LL))(a2, v16);
    v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    if ( *((_DWORD *)v4 + 69) != v10
      || (v11 = (CWindowList *)LODWORD(v16[0]), *((_DWORD *)v4 + 61) != LODWORD(v16[0]))
      || (v11 = (CWindowList *)HIDWORD(v16[0]), *((_DWORD *)v4 + 62) != HIDWORD(v16[0]))
      || (v11 = (CWindowList *)LODWORD(v16[1]), *(CWindowList **)((char *)v4 + 252) != v16[1]) )
    {
      v12 = *(_OWORD *)v16;
      *((_DWORD *)v4 + 69) = v10;
      *(_OWORD *)((char *)v4 + 244) = v12;
      CWindowList::OnClientMarginsChange(v11, v4);
    }
  }
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return (unsigned int)v5;
}
