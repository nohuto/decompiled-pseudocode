/*
 * XREFs of ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001170C
 * Callers:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0011174 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 */

struct _KTHREAD *__fastcall COREACCESS::AcquireExclusive(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  struct _KTHREAD *result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[5] = a1;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v4 = *(struct _KEVENT **)(a1 + 16);
  result = KeGetCurrentThread();
  if ( result != (struct _KTHREAD *)v4[6].Header.WaitListHead.Blink )
  {
    if ( !KeReadStateEvent(v4 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v6, &EventBlockThread, v7, 72LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 16) + 48LL), Executive, 0, 0, 0LL);
    }
    LOBYTE(v7) = 1;
    result = (struct _KTHREAD *)DXGADAPTER::AcquireCoreResourceExclusive(*(_QWORD *)(a1 + 16), a2, v7);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
