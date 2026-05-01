/*
 * XREFs of McGenEventTracingUnregister2 @ 0x1800D3574
 * Callers:
 *     AutoUnregisterMicrosoft_Windows_Deplorch @ 0x1800D3230 (AutoUnregisterMicrosoft_Windows_Deplorch.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 McGenEventTracingUnregister2()
{
  ULONG v0; // ebx

  if ( !McGenTracingSupportInit || !Microsoft_Windows_Deplorch_Context )
    return 0LL;
  if ( McGenPreVista )
  {
    v0 = UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
    dword_1805B87C0 = 0;
    byte_1805B87C8 = 0;
    qword_1805B87A8 = 0LL;
    if ( word_1805B87CA )
      memset_0(off_1805B87D0, 0, 4LL * (((unsigned __int16)word_1805B87CA - 1) / 32 + 1));
  }
  else
  {
    v0 = ((__int64 (*)(void))PfnEventUnregister)();
  }
  Microsoft_Windows_Deplorch_Context = 0LL;
  return v0;
}
