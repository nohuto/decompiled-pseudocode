/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x1407603EC
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x1407602B8 (CmpRegisterCallbackInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlCompareAltitudes @ 0x140128B20 (RtlCompareAltitudes.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  LONG v10; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v6 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v10 = RtlCompareAltitudes((PCUNICODE_STRING)(v6 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v10 )
      {
        if ( v10 < 0 )
          break;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( (__int64 *)v6 != &CallbackListHead );
    if ( !v10 && !a2 )
    {
LABEL_12:
      v3 = -1071906799;
      goto LABEL_4;
    }
  }
  v7 = *(__int64 **)(v6 + 8);
  v8 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(v8 + 8) = a1;
  *v7 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_4:
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
