/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0168BE0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0168670 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C0110C7C (GetPointerInfoSize.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C01648FC (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C016C6C0 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 PointerInfoSize; // r15
  unsigned int v14; // r12d
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int i; // r13d
  unsigned __int8 *v19; // rdx
  unsigned int v20; // esi
  unsigned __int16 *v21; // rdx
  __int64 v22; // r8
  CTouchProcessor *v23; // rsi
  unsigned int v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v7 = a4;
  v8 = a3;
  if ( *((_QWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(v8);
  v14 = a5;
  v15 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v16 = v7 * (unsigned int)PointerInfoSize;
  if ( (_DWORD)v16 != v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v10, v12);
  v17 = 0;
  for ( i = 0; v15 && i < v7; ++i )
  {
    a5 = v17 < *((_DWORD *)a2 + 12) ? v17 : 0;
    v19 = a6 + 4;
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v19 = (unsigned __int8 *)MmUserProbeAddress;
    v20 = *(_DWORD *)v19;
    if ( !*(_DWORD *)v19 || HIWORD(v20) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v19, 0LL);
    v17 = a5;
    v21 = (unsigned __int16 *)(*((_QWORD *)a2 + 16) + 496LL * a5);
    if ( v21[90] == v20 )
    {
      v23 = this;
    }
    else
    {
      v22 = v20;
      v23 = this;
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v22, &a5) )
        return 0;
      v17 = a5;
      v21 = (unsigned __int16 *)(*((_QWORD *)a2 + 16) + 496LL * a5);
    }
    if ( v14 >= (unsigned int)PointerInfoSize )
    {
      v15 = CTouchProcessor::PointerInfoCopyOutHelper(
              v23,
              (struct CPointerInfoNode *)v21,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 18),
              v26,
              PointerInfoSize,
              a7);
      if ( v15 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
        v14 -= PointerInfoSize;
        ++v17;
      }
    }
    v7 = a4;
  }
  return v15;
}
