/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C006EA90
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00313C0 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C006FD24 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // r14d
  _BOOL8 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[72]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_QWORD *)a2;
  v5 = *(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xF3FF;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here if there are not true button transitions");
    v2 = *(_QWORD *)a2;
  }
  v6 = *(unsigned __int16 *)(v2 + 18);
  v7 = 1;
  if ( v5 )
  {
    do
    {
      v8 = v5;
      if ( (v5 & 3) != 0 )
      {
        if ( (v5 & 1) != 0 )
        {
          v9 = gbClientDoubleClickSupport && (v6 & 1) != 0;
          CMouseProcessor::CButtonEvent::CButtonEvent(v14, v7, 1LL, v9, a2);
          CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v14);
        }
        if ( (v5 & 2) != 0 )
        {
          CMouseProcessor::CButtonEvent::CButtonEvent(v14, v7, 2LL, 0LL, a2);
          CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v14);
        }
        v10 = *(_QWORD *)a2;
        if ( (*(_BYTE *)(*(_QWORD *)a2 + 88LL) & 1) == 0 && *(_DWORD *)(v10 + 84) != 1 )
        {
          v11 = *(_DWORD *)(v10 + 116);
          v12 = *(_QWORD *)(v10 + 108);
          v13 = v11;
          if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v12, (__int64)a2, 0) )
            break;
        }
      }
      v7 *= 2;
      v5 >>= 2;
      v6 >>= 2;
    }
    while ( v8 >= 4 );
  }
}
