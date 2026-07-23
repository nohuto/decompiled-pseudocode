/*
 * XREFs of CmpDoQueryKeyName @ 0x140016840
 * Callers:
 *     CmpQueryKeyName @ 0x1405D2AC0 (CmpQueryKeyName.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCallCallBacks @ 0x1405D2A60 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x1405D2A94 (CmPostCallbackNotification.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpConstructName @ 0x1405D9B94 (CmpConstructName.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpLockKcbShared @ 0x140645190 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  ULONG_PTR v7; // rsi
  UNICODE_STRING *p_UnicodeString; // r14
  char v9; // bl
  char v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // edi
  wchar_t *Buffer; // r10
  unsigned int v16; // r15d
  unsigned int v17; // r15d
  char v19; // [rsp+31h] [rbp-107h]
  _QWORD v22[2]; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-C0h]
  __int64 v25; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+88h] [rbp-B0h]
  __int64 v27; // [rsp+90h] [rbp-A8h]
  _DWORD *v28; // [rsp+98h] [rbp-A0h]
  __int64 v29; // [rsp+A0h] [rbp-98h]
  __int64 v30; // [rsp+A8h] [rbp-90h]
  __int64 v31; // [rsp+B0h] [rbp-88h]
  _BYTE v32[16]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v33[48]; // [rsp+C8h] [rbp-70h] BYREF

  v24 = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  p_UnicodeString = 0LL;
  v9 = 0;
  v19 = 0;
  v10 = 0;
  memset(v33, 0, sizeof(v33));
  CmpInitializeThreadInfo(v32);
  v22[1] = v22;
  v22[0] = v22;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    v25 = a1;
    v26 = a3;
    LODWORD(v27) = a4;
    v28 = a5;
    v13 = CmpCallCallBacks(47, (unsigned int)&v25, v12, 48, a1, (__int64)v22);
    v14 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073740541 )
        v14 = 0;
      goto LABEL_28;
    }
    v19 = 1;
  }
  CmpAttachToRegistryProcess(v33);
  v10 = 1;
  CmpLockRegistry();
  v7 = *(_QWORD *)(a1 + 8);
  if ( (v7 & 1) != 0 )
  {
    v7 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v7);
    v9 = 1;
  }
  v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v14 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v7 + 176) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v7, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v7);
    }
    if ( !p_UnicodeString )
    {
      v14 = -1073741670;
      goto LABEL_28;
    }
    if ( v9 )
      CmpUnlockKcb(v7);
    v9 = 0;
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v33);
    v10 = 0;
    if ( a4 <= 0x10 )
    {
      *a5 = p_UnicodeString->Length + 18;
      v14 = -1073741820;
      goto LABEL_28;
    }
    Buffer = p_UnicodeString->Buffer;
    v16 = p_UnicodeString->Length + 2;
    *a5 = p_UnicodeString->Length + 18;
    if ( v16 <= (unsigned __int64)a4 - 16 )
    {
      v14 = 0;
    }
    else
    {
      v16 = a4 - 16;
      v14 = -1073741820;
      if ( a4 - 16 < 2 )
        goto LABEL_28;
    }
    v17 = v16 - 2;
    memmove((void *)(a3 + 16), Buffer, v17);
    *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
    *(_WORD *)a3 = v17;
    *(_WORD *)(a3 + 2) = v17;
    *(_QWORD *)(a3 + 8) = a3 + 16;
    v9 = 0;
  }
LABEL_28:
  if ( v9 )
    CmpUnlockKcb(v7);
  if ( v10 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v33);
  }
  if ( v19 )
    CmPostCallbackNotification(48, a1, v14, (unsigned int)&v25, (__int64)v22);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  CmCleanupThreadInfo(v32);
  return (unsigned int)v14;
}
