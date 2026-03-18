/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015E308
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    if ( *(int *)(v1 + 1484) <= 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      v1 = *((_QWORD *)this + 1);
    }
    --*(_DWORD *)(v1 + 1484);
    if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1484LL) )
      KeSetKernelStackSwapEnable(*(_BYTE *)this);
    *((_QWORD *)this + 1) = 0LL;
  }
}
