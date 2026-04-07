/*
 * XREFs of ?CaptureDesktop@CWindowList@@UEAAJHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18003B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CaptureDesktop(CWindowList *this, unsigned int a2, unsigned int a3, int a4, void *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  if ( v9 )
  {
    LODWORD(v12) = (_DWORD)a5;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(v9 + 16) + 16LL)
                                                                         + 704LL))(
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v9 + 16) + 24LL),
            a2,
            a3,
            a4);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1528u, v12);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v8;
}
