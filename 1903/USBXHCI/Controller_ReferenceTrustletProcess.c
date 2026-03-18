/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1C000FDCC
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // r9
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[70] )
  {
    v2 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *a1,
           &v6);
    if ( (v2 & 0x80000000) == 0 )
    {
      v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3600))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v6);
      a1[70] = v4;
      if ( v4 )
        return v2;
      v2 = -1073741436;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v3 = 264;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v3 = 263;
    }
    WPP_RECORDER_SF_d(a1[9], 2u, 4u, v3, (__int64)&Context.Logger + 4, v2);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[9], 2u, 4u, 0x106u, (__int64)&Context.Logger + 4);
  return (unsigned int)-1073741436;
}
