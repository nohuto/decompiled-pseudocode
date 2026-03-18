/*
 * XREFs of ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180084224
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKernelTransport::DiscardFrame(CKernelTransport *this, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = 0;
  v3 = NtDCompositionDiscardFrame(*(_QWORD *)this, &v6);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0xA5u);
  }
  return v2;
}
