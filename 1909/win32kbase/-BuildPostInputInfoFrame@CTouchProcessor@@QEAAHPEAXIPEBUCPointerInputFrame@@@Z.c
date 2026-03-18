/*
 * XREFs of ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F2C0
 * Callers:
 *     BuildPostInputInfoFrame @ 0x1C0174A50 (BuildPostInputInfoFrame.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     GetPointerInfoSize @ 0x1C0110C7C (GetPointerInfoSize.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C015F438 (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::BuildPostInputInfoFrame(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // r15
  unsigned int PointerInfoSize; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebp
  __int64 v18; // rbx
  CInpLockGuard *v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v20,
    (CTouchProcessor *)((char *)this + 48));
  i = 0;
  if ( a3 < CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a3 >= CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
  {
    v12 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 16) + 176LL));
      v12 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
    *a2 = 0;
    v17 = 0;
    for ( i = 1; v17 < *((_DWORD *)a4 + 12); ++v17 )
    {
      v18 = *((_QWORD *)a4 + 16) + 496LL * v17;
      memmove(&a2[36 * *a2 + 2], (const void *)(v18 + 176), v12);
      ++*a2;
      if ( *(_DWORD *)(v18 + 320) )
        a2[1] = 1;
    }
  }
  if ( !v21 )
    CInpLockGuard::UnLock(v20);
  return i;
}
