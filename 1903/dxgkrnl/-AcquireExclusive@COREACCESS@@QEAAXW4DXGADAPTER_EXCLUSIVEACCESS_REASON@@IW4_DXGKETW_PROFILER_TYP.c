/*
 * XREFs of ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CEC0
 * Callers:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000D570 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0124280 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 */

struct _KTHREAD *__fastcall COREACCESS::AcquireExclusive(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  struct _KEVENT *v6; // rcx
  struct _KTHREAD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v4 = a2;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[5] = a1;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v6 = *(struct _KEVENT **)(a1 + 16);
  result = KeGetCurrentThread();
  if ( result != (struct _KTHREAD *)v6[6].Header.WaitListHead.Blink )
  {
    if ( !KeReadStateEvent(v6 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v8, &EventBlockThread);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 16) + 48LL), Executive, 0, 0, 0LL);
    }
    result = (struct _KTHREAD *)DXGADAPTER::AcquireCoreResourceExclusive(*(_QWORD *)(a1 + 16), v4, a3, 0xFFFFFFFFLL);
  }
  *(_DWORD *)(a1 + 28) = -1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
