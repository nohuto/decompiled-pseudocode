/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00430D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0032DD8 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C00431DC (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // r14d
  _BOOL8 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-60h]
  _BYTE v15[88]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v6 = *(_WORD *)(v3 + 28) & 0xF3FF;
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)a2 + 1);
  }
  v7 = *(unsigned __int16 *)(v3 + 30);
  v8 = 1;
  if ( v6 )
  {
    do
    {
      v9 = v6;
      if ( (v6 & 3) != 0 )
      {
        if ( (v6 & 1) != 0 )
        {
          v10 = gbClientDoubleClickSupport && (v7 & 1) != 0;
          CMouseProcessor::CButtonEvent::CButtonEvent(v15, v8, 1LL, v10, a2);
          CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
        }
        if ( (v6 & 2) != 0 )
        {
          CMouseProcessor::CButtonEvent::CButtonEvent(v15, v8, 2LL, 0LL, a2);
          CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
        }
        v11 = *((_QWORD *)a2 + 1);
        if ( (*(_BYTE *)(v11 + 104) & 1) == 0 && *(_DWORD *)(v11 + 100) != 1 )
        {
          v12 = *(_DWORD *)(v11 + 132);
          v13 = *(_QWORD *)(v11 + 124);
          v14 = v12;
          if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((PDEVICE_OBJECT)&v13, (__int64)a2, 0LL) )
            break;
        }
      }
      v8 *= 2;
      v6 >>= 2;
      v7 >>= 2;
    }
    while ( v9 >= 4 );
  }
}
