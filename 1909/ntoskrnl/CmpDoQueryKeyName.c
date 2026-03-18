/*
 * XREFs of CmpDoQueryKeyName @ 0x1400CFEE0
 * Callers:
 *     CmpQueryKeyName @ 0x140669CA0 (CmpQueryKeyName.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FBB40 (CmpLockKcbShared.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpConstructName @ 0x140668820 (CmpConstructName.c)
 *     CmVirtualKCBToRealPath @ 0x14082B9DC (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  ULONG_PTR v8; // r15
  UNICODE_STRING *p_UnicodeString; // r14
  char v10; // r12
  char v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r8d
  int v14; // eax
  int v15; // esi
  __int64 v16; // rdx
  wchar_t *Buffer; // r10
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  _WORD *v20; // rax
  char v22; // [rsp+32h] [rbp-106h]
  _WORD *v24; // [rsp+38h] [rbp-100h]
  _QWORD v25[2]; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-D0h] BYREF
  _WORD *v27; // [rsp+78h] [rbp-C0h]
  __int64 v28; // [rsp+80h] [rbp-B8h]
  _QWORD v29[7]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v30[48]; // [rsp+C0h] [rbp-78h] BYREF

  v27 = a3;
  v28 = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v29, 0, sizeof(v29));
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v22 = 0;
  v11 = 0;
  memset(v30, 0, sizeof(v30));
  v25[1] = v25;
  v25[0] = v25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v29[0] = a1;
    v29[1] = a3;
    LODWORD(v29[2]) = a4;
    v29[3] = a5;
    v14 = CmpCallCallBacks(47, (unsigned int)v29, v13, 48, a1, (__int64)v25);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
        v15 = 0;
      goto LABEL_19;
    }
    v22 = 1;
  }
  CmpAttachToRegistryProcess(v30);
  v11 = 1;
  CmpLockRegistry();
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 1) != 0 )
  {
    v8 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v8);
    v10 = 1;
  }
  v15 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v15 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v8 + 184) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v8, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v8);
    }
    if ( p_UnicodeString )
    {
      if ( v10 )
      {
        CmpUnlockKcb(v8);
        v10 = 0;
      }
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(v30);
      v11 = 0;
      v16 = a4;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v15 = -1073741820;
      }
      else
      {
        v24 = a3 + 8;
        Buffer = p_UnicodeString->Buffer;
        v18 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v18 <= (unsigned __int64)(v16 - 16) )
        {
          v15 = 0;
LABEL_18:
          v19 = v18 - 2;
          memmove(a3 + 8, Buffer, v19);
          v24[(unsigned __int64)v19 >> 1] = 0;
          v20 = v27;
          *v27 = v19;
          v20[1] = v19;
          *((_QWORD *)v20 + 1) = v24;
          v11 = 0;
          goto LABEL_19;
        }
        v18 = v16 - 16;
        v15 = -1073741820;
        if ( (unsigned int)(v16 - 16) >= 2 )
          goto LABEL_18;
        v11 = 0;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_19:
  if ( v10 )
    CmpUnlockKcb(v8);
  if ( v11 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v30);
  }
  if ( v22 )
    CmPostCallbackNotification(48, a1, v15, (unsigned int)v29, (__int64)v25);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  return (unsigned int)v15;
}
