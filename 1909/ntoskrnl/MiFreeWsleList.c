/*
 * XREFs of MiFreeWsleList @ 0x140025040
 * Callers:
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiTrimWorkingSetBuildup @ 0x140089DE8 (MiTrimWorkingSetBuildup.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x1400CAD14 (MiConvertAndFlushWsleVas.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiEmptyWorkingSetHelper @ 0x140157348 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyWorkingSetTail @ 0x140159AB0 (MiEmptyWorkingSetTail.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402C9330 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiRemoveWsleList @ 0x140023B20 (MiRemoveWsleList.c)
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiRebuildPageTableLeafAges @ 0x14002E050 (MiRebuildPageTableLeafAges.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v20; // [rsp+24h] [rbp-1A4h]
  __int16 v21; // [rsp+26h] [rbp-1A2h]
  __int64 v22; // [rsp+28h] [rbp-1A0h]
  __int64 v23; // [rsp+30h] [rbp-198h]
  __int64 v24; // [rsp+38h] [rbp-190h]
  _BYTE v25[152]; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v26[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v21 = 0;
  memset(v25, 0, sizeof(v25));
  v6 = *(unsigned int *)(a2 + 12);
  v22 = 20LL;
  v7 = MiTbFlushType(a1);
  v11 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v12 = 0LL;
  v19 = v7;
  v20 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( v11 && *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 360LL) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v15 = (char *)&v26[j] + 1;
      v8 = *(_QWORD *)&v15[a2 - ((_QWORD)v26 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        v10 = v26[j];
        if ( v10 )
          LOWORD(v26[j]) = MiWsleFree(a1, v8, a3);
        else
          *v15 &= ~1u;
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))MiWsleFlush)(a1, v8, a3, &v19);
        v26[j] = v16;
        if ( !v16 )
          ++v12;
      }
    }
    if ( !i )
      MiFlushTbList(&v19, v8, v9, v10);
  }
  if ( v12 != v6 )
  {
    v17 = MiRemoveWsleList(a1, a2, (char *)v26, v6);
    if ( v17 )
      MiRebuildPageTableLeafAges(0LL, v17 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v12;
}
