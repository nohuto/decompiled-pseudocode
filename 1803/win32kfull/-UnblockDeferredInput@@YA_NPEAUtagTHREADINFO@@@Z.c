/*
 * XREFs of ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01AB8F4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00051D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C00BD75C (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 */

char __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  char v1; // si
  __int64 *v3; // rbx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 300) & 0x10000000) != 0 )
  {
    v3 = *(__int64 **)(*((_QWORD *)a1 + 53) + 24LL);
    if ( !v3 )
      goto LABEL_8;
    do
    {
      if ( (*((_DWORD *)v3 + 25) & 0x10000) != 0 && (struct tagTHREADINFO *)v3[13] == a1 )
        break;
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
    if ( !v3 || (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(v3[16]) > 0x2710 )
    {
LABEL_8:
      v1 = 1;
      if ( v3 )
        HandleDeferredInput(a1, 1);
      else
        *((_DWORD *)a1 + 300) &= ~0x10000000u;
    }
  }
  return v1;
}
