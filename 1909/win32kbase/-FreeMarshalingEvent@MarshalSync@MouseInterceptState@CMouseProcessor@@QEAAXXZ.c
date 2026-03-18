/*
 * XREFs of ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C00B58E4
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C00B56F4 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
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
