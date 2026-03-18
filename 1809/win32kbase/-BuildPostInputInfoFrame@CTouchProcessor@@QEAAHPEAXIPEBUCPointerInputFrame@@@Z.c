/*
 * XREFs of ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C01341A8
 * Callers:
 *     BuildPostInputInfoFrame @ 0x1C0147C40 (BuildPostInputInfoFrame.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C0134358 (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::BuildPostInputInfoFrame(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // r15
  unsigned int PointerInfoSize; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int i; // ebp
  __int64 v18; // rbx
  CInpLockGuard *v20[8]; // [rsp+20h] [rbp-58h] BYREF

  v8 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v20,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  if ( a3 < CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a3 >= CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
  {
    v12 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 13) + 232LL));
      v12 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
    *a2 = 0;
    for ( i = 0; i < *((_DWORD *)a4 + 12); ++i )
    {
      v18 = *((_QWORD *)a4 + 13) + 576LL * i;
      memmove(&a2[36 * *a2 + 2], (const void *)(v18 + 232), v12);
      ++*a2;
      if ( *(_DWORD *)(v18 + 376) )
        a2[1] = 1;
    }
    v8 = 1;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v20);
  return v8;
}
