/*
 * XREFs of CmpVerifySetSecurityDescriptorLogRecord @ 0x140581FFC
 * Callers:
 *     CmpVerifyLogRecord @ 0x140581E30 (CmpVerifyLogRecord.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x1405AE180 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall CmpVerifySetSecurityDescriptorLogRecord(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int16 v3; // r8
  unsigned int v4; // r10d
  ULONG v5; // r11d

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return 3222863920LL;
  v3 = *(_WORD *)(a1 + 32);
  if ( (v3 & 1) != 0 )
    return 3222863920LL;
  v4 = v3 + 64;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 + v4 < v4 || v1 < v5 + v4 )
    return 3222863920LL;
  else
    return RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v3 + a1 + 64), v5, 0) != 0 ? 0 : 0xC0190030;
}
