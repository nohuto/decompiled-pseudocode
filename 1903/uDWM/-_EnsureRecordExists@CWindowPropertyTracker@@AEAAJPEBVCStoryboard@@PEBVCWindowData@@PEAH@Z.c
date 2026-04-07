/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18002B820
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18002B768 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003BEA4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x18004032C (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18002BAF8 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18003AA74 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        int *a4)
{
  HWND v7; // rdx
  int v8; // ebx
  int Record; // eax
  int v10; // esi
  __int64 v11; // rax
  CWindowPropertyTracker::CPropertyChangeRecord *v12; // rcx
  CWindowPropertyTracker::CPropertyChangeRecord *v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  void *v30; // [rsp+28h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-10h] BYREF
  const struct CStoryboard *v32; // [rsp+78h] [rbp+38h] BYREF
  CWindowPropertyTracker::CPropertyChangeRecord *v33; // [rsp+80h] [rbp+40h] BYREF

  v32 = a2;
  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = (HWND)*((_QWORD *)a3 + 5);
  v8 = 0;
  v33 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, v7);
  v10 = Record;
  if ( Record >= 0 )
  {
    v23 = 0LL;
    v24 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( (unsigned int)v23 < *(_DWORD *)(v24 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v24 + 8) + 8 * v23) == v32 )
        goto LABEL_18;
      v23 = (unsigned int)(v23 + 1);
    }
    _mm_lfence();
    v26 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v27 = *(_DWORD *)(v26 + 32);
    v28 = v27 + 1;
    if ( v27 + 1 >= v27 )
    {
      if ( v28 > *(_DWORD *)(v26 + 28) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(v26 + 8, 8, 1, &v32);
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u, v30);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v26 + 8) + 8LL * *(unsigned int *)(v26 + 32)) = v32;
        *(_DWORD *)(v26 + 32) = v28;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v30);
    }
    goto LABEL_18;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v12 = (CWindowPropertyTracker::CPropertyChangeRecord *)v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v33 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Du, v30);
    goto LABEL_30;
  }
  *(_QWORD *)v12 = *((_QWORD *)a3 + 5);
  v13 = v33;
  v14 = *((_DWORD *)v33 + 8);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v30);
  }
  else if ( v15 <= *((_DWORD *)v33 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v33 + 1) + 8LL * *((unsigned int *)v33 + 8)) = v32;
    *((_DWORD *)v13 + 8) = v15;
  }
  else
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v33 + 8, 8, 1, &v32);
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u, v30);
  }
  *((_BYTE *)v33 + 44) = *((_BYTE *)a3 + 607) >> 7;
  *((_DWORD *)v33 + 12) = *((_DWORD *)a3 + 45);
  *((_DWORD *)v33 + 13) = *((_DWORD *)a3 + 46);
  v17 = 0;
  if ( *((_DWORD *)a3 + 47) - *((_DWORD *)a3 + 45) >= 0 )
    v17 = *((_DWORD *)a3 + 47) - *((_DWORD *)a3 + 45);
  *((_DWORD *)v33 + 14) = v17;
  v18 = 0;
  if ( *((_DWORD *)a3 + 48) - *((_DWORD *)a3 + 46) >= 0 )
    v18 = *((_DWORD *)a3 + 48) - *((_DWORD *)a3 + 46);
  *((_DWORD *)v33 + 15) = v18;
  *((_OWORD *)v33 + 4) = *(_OWORD *)((char *)a3 + 196);
  *((_OWORD *)v33 + 5) = *(_OWORD *)((char *)a3 + 212);
  *((_DWORD *)v33 + 24) = *((_DWORD *)a3 + 25);
  v19 = v33;
  *(_OWORD *)((char *)v33 + 100) = *(_OWORD *)((char *)v33 + 44);
  *(_OWORD *)((char *)v19 + 116) = *(_OWORD *)((char *)v19 + 60);
  *(_OWORD *)((char *)v19 + 132) = *(_OWORD *)((char *)v19 + 76);
  *(_QWORD *)((char *)v19 + 148) = *(_QWORD *)((char *)v19 + 92);
  v20 = *((_DWORD *)this + 6);
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v30);
    v8 = -2147024362;
  }
  else
  {
    if ( v21 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v20) = v33;
      *((_DWORD *)this + 6) = v21;
LABEL_16:
      v10 = *((_DWORD *)this + 6) - 1;
      goto LABEL_17;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, 1, &v33);
    v8 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u, v30);
    if ( v8 >= 0 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8Eu, v30);
LABEL_17:
  if ( v8 >= 0 )
  {
LABEL_18:
    *a4 = v10;
    goto LABEL_19;
  }
LABEL_30:
  if ( v33 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v33, v21);
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return (unsigned int)v8;
}
