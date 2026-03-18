/*
 * XREFs of ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2710
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013C3D8 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(
        NSInstrumentation::CPlatformReaderWriterLock *this)
{
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
}
