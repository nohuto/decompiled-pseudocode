/*
 * XREFs of CmpTransMgrCommitUoW @ 0x14063367C
 * Callers:
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpCommitSetValueKeyUoW @ 0x140632124 (CmpCommitSetValueKeyUoW.c)
 *     CmpReportNotify @ 0x1406338C0 (CmpReportNotify.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F7DE0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x140715E20 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14072D780 (CmpCommitSetSecurityUoW.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2)
{
  int v2; // edi
  int v5; // eax
  int v6; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // r15d
  __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // rcx
  _QWORD *v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v18[2]; // [rsp+48h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-28h] BYREF

  v2 = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038BF12, 0LL, 0LL, 2u, &pData);
  v18[1] = v18;
  v18[0] = v18;
  CmpInitializeDelayDerefContext(v16);
  v5 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    CmpLockRegistryExclusive();
    v2 = CmpCommitAddKeyUoW(a1, a2);
    if ( v2 < 0 )
      goto LABEL_13;
    v8 = 1LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 240LL) = 0LL;
    goto LABEL_22;
  }
  if ( v5 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, 1LL, v18);
    v9 = CmpCommitDeleteKeyUoW(a1, a2, v16);
LABEL_30:
    v2 = v9;
LABEL_12:
    CmpDrainDelayDerefContext(v16);
LABEL_13:
    CmpUnlockRegistry();
    goto LABEL_14;
  }
  if ( v5 > 3 )
  {
    if ( v5 <= 5 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      v6 = CmpCommitSetValueKeyUoW(a1, a2);
LABEL_9:
      v2 = v6;
      if ( v6 >= 0 )
        CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, 4LL, v18);
      HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      CmpUnlockKcb(*(_QWORD *)(a1 + 48));
      goto LABEL_12;
    }
    if ( v5 == 6 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      v6 = CmpCommitDeleteValueKeyUoW(a1, a2, v16);
      goto LABEL_9;
    }
    if ( v5 != 9 )
    {
      if ( v5 == 7 )
      {
        v17[0] = -1;
        v17[1] = 0;
        CmpLockRegistry();
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        v10 = *(_QWORD *)(a1 + 48);
        v11 = *(_QWORD *)(v10 + 32);
        v12 = *(_DWORD *)(v10 + 40);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v11 + 8))(v11, v12, v17);
        if ( v13 )
        {
          if ( !(unsigned __int8)HvMarkCellDirty(v11, v12, 0LL) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v17);
            HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
            CmpUnlockKcb(*(_QWORD *)(a1 + 48));
            CmpUnlockRegistry();
            v2 = -1073741443;
            goto LABEL_14;
          }
          v14 = *(_DWORD *)(v13 + 52) ^ (*(_DWORD *)(v13 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
          *(_DWORD *)(v13 + 52) = v14;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(v14)) & 0xF;
          v15 = *a2;
          *(_QWORD *)(v13 + 4) = *a2;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v15;
          (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v17);
        }
        else
        {
          v2 = -1073741670;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        CmpUnlockKcb(*(_QWORD *)(a1 + 48));
        goto LABEL_13;
      }
      if ( v5 != 12 )
        goto LABEL_14;
      CmpLockRegistryExclusive();
      v9 = CmpCommitRenameKeyUoW(a1, a2, v16);
      goto LABEL_30;
    }
    CmpLockRegistryExclusive();
    v2 = CmpCommitSetSecurityUoW(a1, a2);
    if ( v2 < 0 )
      goto LABEL_13;
    v8 = 10LL;
LABEL_22:
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0LL, v8, v18);
    goto LABEL_13;
  }
LABEL_14:
  CmpSignalDeferredPosts(v18);
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038BEED, 0LL, 0LL, 2u, &pData);
  return (unsigned int)v2;
}
