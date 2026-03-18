/*
 * XREFs of Win32FreePoolImpl @ 0x1C00D54D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C007E07C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02AE448 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02AEB70 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall Win32FreePoolImpl(char *P)
{
  NSInstrumentation::CPrioritizedWriterLock **v1; // rbx
  NSInstrumentation::CPointerHashTable *v3; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v4; // rcx
  char *v5; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
  v7 = P;
  v6 = 0LL;
  v3 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
  if ( v3
    && ((unsigned __int16)P & 0xFFFu) >= 0x10uLL
    && NSInstrumentation::CPointerHashTable::Remove(v3, (unsigned __int64)(P - 16), (void **)&v6) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      v1[8],
      v6);
    v5 = P - 16;
  }
  else
  {
    v4 = v1[7];
    if ( v4 && (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v4, &v7, &v6) )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        v1[8],
        v6);
    v5 = P;
  }
  ExFreePoolWithTag(v5, 0);
}
