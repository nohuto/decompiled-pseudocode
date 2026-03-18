/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00BA264
 * Callers:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00BA31C (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C001F6A0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0020060 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Free(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(_QWORD *)a1;
    GreEnterCriticalRegionAndAcquirePushLockExclusive(*(_QWORD *)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x70
       + 36 * ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset(a2, 0, 0x70uLL);
    *(_DWORD *)(a1 + 32) = v5;
    GreLeaveCriticalRegionAndReleasePushLockExclusive(v2);
  }
}
