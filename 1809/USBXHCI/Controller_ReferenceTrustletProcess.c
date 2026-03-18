/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1C000D79C
 * Callers:
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned __int16 v4; // r9
  __int64 v5; // rax
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[62] )
  {
    v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *a1,
           &v8);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3600))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v8);
      a1[62] = v5;
      if ( v5 )
        return v2;
      v2 = -1073741436;
      v4 = 261;
      v7 = -1073741436;
    }
    else
    {
      v4 = 260;
      v7 = v3;
    }
    WPP_RECORDER_SF_d(a1[9], 2u, 4u, v4, (__int64)&Context.Logger + 4, v7);
    return v2;
  }
  WPP_RECORDER_SF_(a1[9], 2u, 4u, 0x103u, (__int64)&Context.Logger + 4);
  return (unsigned int)-1073741436;
}
