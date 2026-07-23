/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x14063D020
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpFindPathByNameEx @ 0x140581574 (CmpFindPathByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
 *     CmpBlockHiveWrites @ 0x1407F18A0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1407F1AE8 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v17 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(BugCheckParameter2 + 58) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 176) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess((__int64)(a2 + 42));
            a2[40] |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(BugCheckParameter2, P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v18);
            if ( v10 < 0 )
            {
              if ( v18 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, (__m128i *)P, 0LL, 16, &v16, &v19);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v13 = *(void **)(a4 + 8);
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !(unsigned __int8)CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(BugCheckParameter2 + 24) + 72LL, 0LL);
                v14 = *(_QWORD *)(BugCheckParameter2 + 24);
                v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v14 + 8))(
                        v14,
                        *(unsigned int *)(BugCheckParameter2 + 32),
                        &v17);
                if ( v15 )
                {
                  if ( HvpMarkCellDirty(
                         *(_QWORD *)(BugCheckParameter2 + 24),
                         *(unsigned int *)(BugCheckParameter2 + 32),
                         1) )
                  {
                    *(_WORD *)(v15 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 178) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  else
                  {
                    v10 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter2 + 24) + 16LL))(
                    *(_QWORD *)(BugCheckParameter2 + 24),
                    &v17);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v14 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
                  KeAbPostRelease(v14 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v10;
}
