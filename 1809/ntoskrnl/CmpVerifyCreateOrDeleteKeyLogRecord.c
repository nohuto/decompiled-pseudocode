/*
 * XREFs of CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140581DC4
 * Callers:
 *     CmpVerifyLogRecord @ 0x140581E30 (CmpVerifyLogRecord.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x1405AE180 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall CmpVerifyCreateOrDeleteKeyLogRecord(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return 3222863920LL;
  if ( *(_DWORD *)(a1 + 48) > 1u )
    return 3222863920LL;
  v3 = *(_WORD *)(a1 + 32);
  if ( (v3 & 1) != 0 )
    return 3222863920LL;
  v4 = v3 + 64;
  if ( v1 < v4 )
    return 3222863920LL;
  else
    return RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v3 + a1 + 64), v1 - v4, 0) != 0 ? 0 : 0xC0190030;
}
