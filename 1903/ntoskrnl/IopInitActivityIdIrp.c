/*
 * XREFs of IopInitActivityIdIrp @ 0x1402939B8
 * Callers:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400B54F8 (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140292EB0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140293190 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140099F60 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoSetActivityIdIrp @ 0x1400A7F10 (IoSetActivityIdIrp.c)
 *     EtwActivityIdControl @ 0x14010AB90 (EtwActivityIdControl.c)
 *     IopIsActivityTracingEventEnabled @ 0x1401754F8 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  char v2; // si
  const GUID *RelatedActivityId; // rdi
  const EVENT_DESCRIPTOR *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  GUID *SparePtr; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rax
  char v10; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v12; // [rsp+70h] [rbp-38h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v12 = 0uLL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    SparePtr = (GUID *)CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      if ( IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp) )
      {
        RelatedActivityId = SparePtr;
        v4 = &IoTrace_KernelIo_AllocateIrp;
        goto LABEL_18;
      }
      ActivityId = *SparePtr;
LABEL_17:
      v2 = 1;
      goto LABEL_18;
    }
    if ( PnpIsSafeToExamineUserModeTeb() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = *(_QWORD *)&NullGuid.Data1 - v12.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v12.m128i_i64[0] )
          v7 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v12, 8).m128i_u64[0];
        if ( v7 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = (const GUID *)&v12;
            v4 = &IoTrace_UserInitiatedIo;
            goto LABEL_18;
          }
          ActivityId = (GUID)v12;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_18:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v8) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v8;
}
