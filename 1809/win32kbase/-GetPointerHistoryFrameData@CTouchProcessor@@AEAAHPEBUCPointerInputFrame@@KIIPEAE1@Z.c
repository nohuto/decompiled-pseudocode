/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C013C518
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C01342A8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C0138788 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C013FE74 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 PointerInfoSize; // r14
  unsigned int v17; // r12d
  unsigned int v18; // edi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int i; // r13d
  int *v22; // rdx
  int v23; // esi
  unsigned __int16 *v24; // rdx
  struct tagPOINTER_INFO *v25; // rsi

  v7 = a4;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v17 = a5;
  v18 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v19 = v7 * (unsigned int)PointerInfoSize;
  if ( (_DWORD)v19 != v17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v13, v15);
  v20 = 0;
  for ( i = 0; v18 && i < v7; ++i )
  {
    a5 = v20 < *((_DWORD *)a2 + 12) ? v20 : 0;
    v22 = (int *)(a6 + 4);
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v22 = (int *)MmUserProbeAddress;
    v23 = *v22;
    if ( !*v22 || HIWORD(v23) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v22, 0LL);
    v20 = a5;
    v24 = (unsigned __int16 *)(*((_QWORD *)a2 + 13) + 576LL * a5);
    if ( v24[118] != v23 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v23, &a5) )
        return 0;
      v20 = a5;
      v24 = (unsigned __int16 *)(*((_QWORD *)a2 + 13) + 576LL * a5);
    }
    if ( v17 >= (unsigned int)PointerInfoSize )
    {
      v25 = a7;
      v18 = CTouchProcessor::PointerInfoCopyOutHelper(
              (CTouchProcessor *)this,
              (struct CPointerInfoNode *)v24,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 15),
              a3,
              PointerInfoSize,
              a7);
      if ( v18 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)v25 + PointerInfoSize);
        v17 -= PointerInfoSize;
        ++v20;
      }
    }
    v7 = a4;
  }
  return v18;
}
