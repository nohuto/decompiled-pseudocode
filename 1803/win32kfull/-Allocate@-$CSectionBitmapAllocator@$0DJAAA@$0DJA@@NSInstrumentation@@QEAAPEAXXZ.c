/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C013C308
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013C3D8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F26F0 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2758 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C013C4BC (-CommitSlot@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(__int64 a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v1; // rbx
  ULONG ClearBits; // eax
  unsigned __int64 v4; // rsi
  ULONG v5; // ebp

  v1 = *(NSInstrumentation::CPlatformReaderWriterLock **)a1;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
  ClearBits = RtlFindClearBits(
                (PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)),
                1u,
                *(_DWORD *)(a1 + 32) < 0xE4u ? *(_DWORD *)(a1 + 32) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<233472,912>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xE4u )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 912 * (v5 & 3) + (unsigned __int64)(v5 >> 2 << 12);
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v1);
  return v4;
}
