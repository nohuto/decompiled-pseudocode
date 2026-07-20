/*
 * XREFs of SmpEventWriteULONG @ 0x1400021B0
 * Callers:
 *     SmscpLoadSubSystem @ 0x1400016A8 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140001F14 (SmpExecuteImage.c)
 *     SmpInitializeKnownDlls @ 0x1400082A0 (SmpInitializeKnownDlls.c)
 *     SmpNtSerializeBoot @ 0x140008D24 (SmpNtSerializeBoot.c)
 * Callees:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONG(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  int *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
    {
      v5 = 0;
      v3 = &v6;
      v4 = 4;
      ((void (__fastcall *)(REGHANDLE, PCEVENT_DESCRIPTOR, __int64, int **))EtwEventWrite)(
        SmpTraceHandle,
        EventDescriptor,
        1LL,
        &v3);
    }
  }
}
