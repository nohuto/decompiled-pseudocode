/*
 * XREFs of MiFreeWsleList @ 0x1400B29F0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiAgePteWorker @ 0x14006B2B0 (MiAgePteWorker.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiAgeWorkingSetTail @ 0x140075A40 (MiAgeWorkingSetTail.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEC60 (MiConvertAndFlushWsleVas.c)
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 *     MiEmptyWorkingSetHelper @ 0x1401400E8 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyWorkingSetTail @ 0x140141A50 (MiEmptyWorkingSetTail.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402B4320 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v20; // [rsp+24h] [rbp-1A4h]
  __int64 v21; // [rsp+28h] [rbp-1A0h]
  __int64 v22; // [rsp+30h] [rbp-198h]
  __int64 v23; // [rsp+38h] [rbp-190h]
  _QWORD v24[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v3 = *(unsigned int *)(a2 + 12);
  v21 = 20LL;
  v7 = 0LL;
  v19 = MiTbFlushType(a1);
  v12 = (*(_BYTE *)(v11 + 184) & 7) == 0;
  v20 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( v12 && *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 312LL) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v3; ++j )
    {
      v15 = (char *)&v24[j] + 1;
      v8 = *(_QWORD *)&v15[a2 - ((_QWORD)v24 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        v10 = v24[j];
        if ( v10 )
          LOWORD(v24[j]) = MiWsleFree(a1, v8, a3);
        else
          *v15 &= ~1u;
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))MiWsleFlush)(a1, v8, a3, &v19);
        v24[j] = v16;
        if ( !v16 )
          ++v7;
      }
    }
    if ( !i )
      MiFlushTbList(&v19, v8, v9, v10);
  }
  if ( v7 != v3 )
  {
    v17 = MiRemoveWsleList(a1, a2, (char *)v24, v3);
    if ( v17 )
      MiRebuildPageTableLeafAges(0LL, v17 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v7;
}
