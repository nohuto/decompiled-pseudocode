/*
 * XREFs of CmQueryValueKey @ 0x1405FD190
 * Callers:
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F8390 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405FD450 (CmpGetEffectiveKcbSemantics.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14064DFB0 (CmpQueryKeyValueData.c)
 *     CmpIsValueTombstone @ 0x1406BF030 (CmpIsValueTombstone.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, int a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  int started; // ebx
  __int16 v13; // si
  __int64 KcbAtLayerHeight; // rdi
  __int64 v15; // rcx
  int v16; // eax
  int NameInListWithStatus; // eax
  int v18; // ebx
  __int64 v19; // rsi
  int v20; // edx
  int v22; // [rsp+40h] [rbp-69h] BYREF
  __int64 v23; // [rsp+48h] [rbp-61h] BYREF
  __int64 v24; // [rsp+50h] [rbp-59h] BYREF
  _WORD v25[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v26; // [rsp+78h] [rbp-31h]
  size_t Size; // [rsp+80h] [rbp-29h]
  _BYTE v28[48]; // [rsp+88h] [rbp-21h] BYREF

  Size = a4;
  v26 = a6;
  memset(v28, 0, sizeof(v28));
  v24 = 0LL;
  v9 = 0LL;
  memset(v25, 0, sizeof(v25));
  v22 = -1;
  v25[1] = -1;
  v10 = 0LL;
  v23 = 0xFFFFFFFFLL;
  CmpAttachToRegistryProcess((__int64)v28);
  CmpLockRegistry();
  v11 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v25, v11);
  if ( started >= 0 )
  {
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      CmpLockKcbStackShared((__int64)v25);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
        goto LABEL_30;
      CmpUnlockKcbStack((__int64)v25);
      started = CmpTransSearchAddTransFromKeyBody(a1, &v24);
      if ( started < 0 )
        goto LABEL_19;
      v9 = v24;
    }
    CmpLockKcbStackShared((__int64)v25);
    if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v9) )
    {
      v13 = *(_WORD *)(v11 + 66);
      if ( v13 < 0 )
        goto LABEL_24;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v25);
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
          break;
        if ( *(_DWORD *)(v15 + 40) != -1 )
        {
          if ( v9 && *(_QWORD *)(KcbAtLayerHeight + 288) == v9 )
            v16 = 280;
          else
            v16 = 96;
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(KcbAtLayerHeight + 32),
                                   v16 + (int)KcbAtLayerHeight,
                                   a2,
                                   0,
                                   0LL,
                                   (__int64)&v22);
          started = NameInListWithStatus;
          if ( NameInListWithStatus >= 0 )
          {
            v10 = *(_QWORD *)(KcbAtLayerHeight + 32);
            break;
          }
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_18;
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
            break;
        }
      }
      while ( --v13 >= 0 );
      v18 = v22;
      if ( v22 == -1 )
      {
LABEL_24:
        started = -1073741772;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v10 + 8))(v10, (unsigned int)v22, &v23);
        if ( (unsigned __int8)CmpIsValueTombstone(v10, v19) )
        {
          started = -1073741772;
        }
        else
        {
          started = CmpQueryKeyValueData(KcbAtLayerHeight, v18, v20, a3, Size, a5, v26);
          if ( started >= 0 )
            started = 0;
        }
        if ( v19 )
          (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v23);
      }
      goto LABEL_18;
    }
LABEL_30:
    started = -1073740763;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      started = -1073741444;
LABEL_18:
    CmpUnlockKcbStack((__int64)v25);
  }
LABEL_19:
  CmpUnlockRegistry();
  CmpDetachFromRegistryProcess(v28);
  CmpCleanupKcbStack((__int64)v25);
  return (unsigned int)started;
}
