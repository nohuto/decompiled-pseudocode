/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C013BFCC
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C01342A8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C013FE74 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  __int64 PointerInfoSize; // r15
  unsigned int v11; // ebx
  PERESOURCE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r12d
  unsigned __int64 v17; // rdi
  unsigned int v18; // esi
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v24; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  if ( !CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v16 = *((_DWORD *)a3 + 2);
  v24 = *((_QWORD *)a3 + 32);
  if ( v16 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v17 = *((_QWORD *)a2 + 13);
  v18 = 0;
  v19 = 0;
  do
  {
    v20 = *((unsigned int *)a2 + 12);
    if ( v19 >= (unsigned int)v20 )
      break;
    v21 = *((_QWORD *)a2 + 13) + 576 * v20;
    if ( v17 >= v21 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v13, v15);
    if ( *(_QWORD *)(v17 + 256) == v24 && *(_DWORD *)(v17 + 8) == v16 )
    {
      ++v18;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v17,
                *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 15),
                a4,
                PointerInfoSize,
                a7);
        if ( v11 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v19;
    v17 += 576LL;
  }
  while ( v11 );
  if ( v11 )
    *a6 = v18;
  return v11;
}
