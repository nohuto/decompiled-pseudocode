/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0168534
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0168670 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C0110C7C (GetPointerInfoSize.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C016C6C0 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 PointerInfoSize; // r15
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdi
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v23; // [rsp+78h] [rbp+10h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  if ( *(_QWORD *)(v11 + 80) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v15 = *((_DWORD *)a3 + 2);
  v23 = *((_QWORD *)a3 + 25);
  if ( v15 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v16 = *((_QWORD *)a2 + 16);
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = *((unsigned int *)a2 + 12);
    if ( v18 >= (unsigned int)v19 )
      break;
    v20 = *((_QWORD *)a2 + 16) + 496 * v19;
    if ( v16 >= v20 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v11, v13);
    if ( *(_QWORD *)(v16 + 200) == v23 && *(_DWORD *)(v16 + 8) == v15 )
    {
      ++v17;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v9 = CTouchProcessor::PointerInfoCopyOutHelper(
               this,
               (struct CPointerInfoNode *)v16,
               *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 18),
               a4,
               PointerInfoSize,
               a7);
        if ( v9 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v18;
    v16 += 496LL;
  }
  while ( v9 );
  if ( v9 )
    *a6 = v17;
  return v9;
}
