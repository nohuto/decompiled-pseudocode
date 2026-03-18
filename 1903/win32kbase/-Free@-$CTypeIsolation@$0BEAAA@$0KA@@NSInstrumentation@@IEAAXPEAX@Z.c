/*
 * XREFs of ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0104FE4
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0053DE0 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0082050 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Free@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008327C (-Free@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C00839B0 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C01330F0 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v4; // rbx
  _QWORD *v5; // r14
  __int64 *v6; // rbp
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rbx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
      NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v4);
      v5 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 == a1 )
      {
LABEL_18:
        GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
        NSInstrumentation::PlatformAbort(3LL, a2);
        return;
      }
      while ( 1 )
      {
        v6 = (__int64 *)v5[4];
        v7 = v6[1] ^ v6[2];
        if ( (unsigned __int64)a2 < v7 || (unsigned __int64)a2 >= v7 + 81920 )
        {
          v8 = 0;
        }
        else if ( ((unsigned __int16)a2 & 0xFFF) == 160 * (((unsigned __int16)a2 & 0xFFFu) / 0xA0uLL) )
        {
          v8 = 2
             - (RtlTestBit(
                  (PRTL_BITMAP)(v6[2] ^ v6[3]),
                  25 * (((unsigned int)a2 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12)
                + ((unsigned __int16)a2 & 0xFFFu) / 0xA0) != 0);
        }
        else
        {
          v8 = 3;
        }
        if ( !v8 )
          goto LABEL_17;
        v9 = v8 - 1;
        if ( !v9 )
        {
          NSInstrumentation::CSectionBitmapAllocator<40960,160>::Free(v6, a2);
          GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
          return;
        }
        v10 = v9 - 1;
        if ( !v10 )
          break;
        if ( v10 == 1 )
        {
          v11 = 2LL;
LABEL_16:
          NSInstrumentation::PlatformAbort(v11, a2);
        }
LABEL_17:
        v5 = (_QWORD *)*v5;
        if ( v5 == (_QWORD *)a1 )
          goto LABEL_18;
      }
      v11 = 1LL;
      goto LABEL_16;
    }
    memset(a2, 0, 0xA0uLL);
    v12 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v12 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v12) < *(_WORD *)(v12 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v12, a2);
    }
    else
    {
      ++*(_DWORD *)(v12 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v12 + 56))(a2);
    }
  }
}
