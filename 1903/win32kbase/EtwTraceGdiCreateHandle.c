/*
 * XREFs of EtwTraceGdiCreateHandle @ 0x1C007CB5C
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C0110924 (McTemplateK0pqqq.c)
 */

ULONG __fastcall EtwTraceGdiCreateHandle(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg3)
{
  ULONG result; // eax
  unsigned int v4; // [rsp+28h] [rbp-20h]

  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    return McTemplateK0pqqq(Arg0, &GdiCreateHandle, Arg3, Arg0, Arg1, v4, (const unsigned int)Arg3);
  return result;
}
