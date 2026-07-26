/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00EA8F4
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00EE2A8 (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C01179F0 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &SourceString->Length);
  v3 = ndisReferenceProtocolByName(SourceString);
  if ( v3 >= 0 )
  {
    ndisDereferenceProtocol(0LL, v2, 5u);
    if ( MEMORY[0x88] )
    {
      MEMORY[0x88]();
    }
    else if ( MEMORY[0x90] )
    {
      ndisInvokeUninstall(0LL);
    }
    else
    {
      v3 = -1073741823;
    }
  }
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_q(0x20u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, 0LL);
  return (unsigned int)v3;
}
