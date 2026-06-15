/*
 * XREFs of ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x180119694
 * Callers:
 *     ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18011AA30 (-SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     GetRecordFromWnf @ 0x180119198 (GetRecordFromWnf.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18011AA70 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnExclusiveModeChange(
        struct _RTL_CRITICAL_SECTION *this,
        const struct ApplicationSpatialInformationWnf *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  const GUID *v5; // r8
  const char *v6; // r9
  unsigned int v7; // edi
  unsigned __int8 v8; // si
  unsigned int v9; // r14d
  __int64 LockCount; // rdx
  __int64 v11; // rdx
  int updated; // eax
  LONG v13; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v14[1] = -2LL;
  v4 = this + 2;
  EnterCriticalSection(this + 2);
  v14[2] = v4;
  v7 = 0;
  v13 = 0;
  v8 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v8 = 1;
    v9 = 0;
    if ( *(_DWORD *)a2 )
    {
      while ( (int)GetRecordFromWnf((unsigned int *)a2, v9, v14, v6) < 0 || !*(_DWORD *)(v14[0] + 16LL) )
      {
        if ( ++v9 >= *(_DWORD *)a2 )
          goto LABEL_8;
      }
      v7 = *(_DWORD *)(v14[0] + 24LL);
    }
LABEL_8:
    LockCount = (unsigned int)this[9].LockCount;
    if ( (_DWORD)LockCount && (_DWORD)LockCount != v7 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 352LL))(
        g_PolicyManager,
        LockCount,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      this[9].LockCount = 0;
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LONG *))(*(_QWORD *)g_PolicyManager + 48LL))(
        g_PolicyManager,
        v7,
        &v13);
      if ( this[9].LockCount != v7 )
      {
        this[9].LockCount = v7;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                       + 344LL))(
          g_PolicyManager,
          v7,
          (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      }
    }
  }
  else
  {
    v11 = (unsigned int)this[9].LockCount;
    if ( (_DWORD)v11 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 352LL))(
        g_PolicyManager,
        v11,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      this[9].LockCount = 0;
    }
  }
  if ( v8 == LOBYTE(this[9].OwningThread) )
  {
    if ( v13 == this[9].RecursionCount )
      goto LABEL_24;
  }
  else
  {
    LODWORD(v14[0]) = v8;
    if ( (unsigned int)dword_1801B1350 > 4 )
    {
      v16 = v14;
      v17 = 4;
      v18 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_180175A2D, v5, (LPCGUID)v6, 3u, &pData);
    }
    LOBYTE(this[9].OwningThread) = v8;
  }
  this[9].RecursionCount = v13;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
LABEL_24:
  if ( v4 )
    LeaveCriticalSection(v4);
}
