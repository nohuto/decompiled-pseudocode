/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1406BA460
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeleted @ 0x140633410 (CmpIsKeyDeleted.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpIsSystemEntity @ 0x1406AD9C4 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x1406F49FC (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1406F4A7C (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1406F4D08 (CmpBlockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x14082C2DC (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbx
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  P[0] = 0LL;
  v18 = 0LL;
  P[1] = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v17 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( CmpIsSystemEntity(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
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
          v10 = CmVirtualKCBToRealPath(a1, P);
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
              PathByName = CmpFindPathByName(0LL, P, 0LL, v16, v19);
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
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v14 = *(_QWORD *)(a1 + 32);
                v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v14 + 8))(
                        v14,
                        *(unsigned int *)(a1 + 40),
                        &v17);
                if ( v15 )
                {
                  if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 1) )
                  {
                    *(_WORD *)(v15 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  else
                  {
                    v10 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v17);
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
