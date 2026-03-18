/*
 * XREFs of ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0032A30
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::CMouseQueue::Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  __int16 v3; // cx
  char v4; // di
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = *((_WORD *)this + 1281);
  if ( !v3 )
    return 0;
  v4 = 1;
  v5 = (_OWORD *)((char *)this + 160 * (((unsigned __int8)*((_WORD *)this + 1280) - (unsigned __int8)v3 + 1) & 0xF));
  *(_OWORD *)a2 = *v5;
  *((_OWORD *)a2 + 1) = v5[1];
  *((_OWORD *)a2 + 2) = v5[2];
  *((_OWORD *)a2 + 3) = v5[3];
  *((_OWORD *)a2 + 4) = v5[4];
  *((_OWORD *)a2 + 5) = v5[5];
  *((_OWORD *)a2 + 6) = v5[6];
  *((_OWORD *)a2 + 7) = v5[7];
  *((_OWORD *)a2 + 8) = v5[8];
  *((_OWORD *)a2 + 9) = v5[9];
  memset(v5, 0, 0xA0uLL);
  if ( --*((_WORD *)this + 1281) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  return v4;
}
