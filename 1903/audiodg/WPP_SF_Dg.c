/*
 * XREFs of WPP_SF_Dg @ 0x140039278
 * Callers:
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x140037B40 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Dg(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, 15LL, &v5);
}
