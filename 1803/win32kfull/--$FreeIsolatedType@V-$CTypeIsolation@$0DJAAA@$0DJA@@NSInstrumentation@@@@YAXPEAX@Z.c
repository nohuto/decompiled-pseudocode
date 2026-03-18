/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02785F0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2710 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2730 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C013C524 (-ContainsAllocation@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C013C738 (-Free@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(__int64 a1)
{
  unsigned __int8 *v2; // rdi
  NSInstrumentation::CPlatformReaderWriterLock *v3; // rbx
  unsigned __int8 *i; // rsi
  __int64 v5; // r14

  v2 = gpTypeIsolation[5];
  if ( v2 && a1 )
  {
    v3 = (NSInstrumentation::CPlatformReaderWriterLock *)*((_QWORD *)v2 + 2);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v3);
    for ( i = *(unsigned __int8 **)v2; i != v2; i = *(unsigned __int8 **)i )
    {
      v5 = *((_QWORD *)i + 4);
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<233472,912>::ContainsAllocation(v5, a1) )
      {
        NSInstrumentation::CSectionBitmapAllocator<233472,912>::Free(v5, a1);
        break;
      }
    }
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v3);
  }
}
