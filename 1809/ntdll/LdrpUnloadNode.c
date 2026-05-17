/*
 * XREFs of LdrpUnloadNode @ 0x180055870
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     LdrpSendDllNotifications @ 0x18002795C (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800279F0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180042704 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 *     LdrpUnmapModule @ 0x180076B98 (LdrpUnmapModule.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800DAC24 (AVrfDllUnloadNotification.c)
 */

void __fastcall LdrpUnloadNode(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *v4; // r14
  void (__fastcall *v5)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 *v9; // rdx
  _QWORD **v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  _QWORD **v14; // rcx
  _QWORD *v15; // r8
  _QWORD **v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = NtCurrentPeb();
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v5 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v8 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications((__int64)(i - 20), 2u);
      if ( v5 )
        v5(i - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(i - 20), v9, 1);
      if ( (v4->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3283,
        (unsigned int)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v8 + 9);
    LdrUnloadAlternateResourceModuleEx(v8[6], 0LL);
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
LABEL_18:
  while ( 1 )
  {
    v10 = *(_QWORD ***)(a1 + 40);
    if ( !v10 )
      break;
    v11 = *v10;
    if ( *v10 == v10 )
      *(_QWORD *)(a1 + 40) = 0LL;
    else
      *v10 = (_QWORD *)*v11;
    if ( !v11 )
      break;
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    v12 = v11[1];
    v13 = v11 + 2;
    v14 = *(_QWORD ***)(v12 + 48);
    v15 = *v14;
    if ( *v14 != v11 + 2 )
    {
      do
      {
        v14 = (_QWORD **)v15;
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v13 );
    }
    *v14 = (_QWORD *)*v13;
    if ( *(_QWORD **)(v12 + 48) == v13 )
    {
      v16 = 0LL;
      if ( v14 != v13 )
        v16 = v14;
      *(_QWORD *)(v12 + 48) = v16;
    }
    LdrpDecrementNodeLoadCountLockHeld(v12, 0, &v27);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v27 )
      LdrpUnloadNode(v12);
    RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v11);
  }
  v17 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v17 != (_QWORD *)a1 )
  {
    do
    {
      v18 = (_QWORD *)*v17;
      *((_DWORD *)v17 - 14) |= 2u;
      v19 = (__int64)(v17 - 20);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
      v20 = *(_DWORD *)(v19 + 104);
      if ( (v20 & 0x40) != 0 )
      {
        v21 = *(_QWORD *)(v19 + 112);
        if ( *(_QWORD *)(v21 + 8) != v19 + 112 )
          goto LABEL_47;
        v22 = *(_QWORD **)(v19 + 120);
        if ( *v22 != v19 + 112 )
          goto LABEL_47;
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = *(_QWORD *)v19;
        if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19
          || (v24 = *(_QWORD **)(v19 + 8), *v24 != v19)
          || (*v24 = v23, *(_QWORD *)(v23 + 8) = v24, v25 = *(_QWORD *)(v19 + 16), *(_QWORD *)(v25 + 8) != v19 + 16)
          || (v26 = *(_QWORD **)(v19 + 24), *v26 != v19 + 16) )
        {
LABEL_47:
          __fastfail(3u);
        }
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        *(_DWORD *)(v19 + 104) &= ~0x40u;
        v20 = *(_DWORD *)(v19 + 104);
      }
      if ( (v20 & 0x80u) != 0 )
      {
        RtlRbRemoveNode((__int64)&LdrpMappingInfoIndex, v19 + 224);
        RtlRbRemoveNode((__int64)&LdrpModuleBaseAddressIndex, v19 + 200);
        *(_DWORD *)(v19 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v19);
      LdrpDereferenceModule(v19);
      v17 = v18;
    }
    while ( v18 != (_QWORD *)a1 );
  }
}
