/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C013C738
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F26F0 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2758 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C013C524 (-ContainsAllocation@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Free(__int64 a1, void *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(NSInstrumentation::CPlatformReaderWriterLock **)a1;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
    NSInstrumentation::CSectionBitmapAllocator<233472,912>::ContainsAllocation((_QWORD *)a1, (unsigned __int64)a2);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x390
       + 4 * ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset(a2, 0, 0x390uLL);
    *(_DWORD *)(a1 + 32) = v5;
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v2);
  }
}
