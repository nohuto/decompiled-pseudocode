/*
 * XREFs of ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C000786C
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0005E54 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(
        CMouseProcessor::MouseInterceptState::MarshalSync *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
}
