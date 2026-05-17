/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18008B1DC
 * Callers:
 *     RtlAddAccessDeniedObjectAce @ 0x18008B0E0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008B130 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008B190 (RtlAddAccessAllowedObjectAce.c)
 * Callees:
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180040E30 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 */

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // dx
  int v15; // r9d
  __int64 v16; // r8
  _OWORD *v17; // rdx
  __int64 result; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v12 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v12 = a3 & 0xFFFFFF20;
    if ( v12 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v13 = a7[1];
  v14 = 4 * v13 + 20;
  if ( a5 )
    v14 = 4 * v13 + 36;
  v15 = a5 != 0LL;
  if ( a6 )
  {
    v15 |= 2u;
    v14 += 16;
  }
  v16 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v14 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v19[0] + 2LL) = v14;
  v17 = (_OWORD *)(v16 + 12);
  *(_BYTE *)(v16 + 1) = a3;
  *(_BYTE *)v16 = a8;
  *(_DWORD *)(v16 + 4) = a4;
  *(_DWORD *)(v16 + 8) = v15;
  if ( a5 )
  {
    *v17 = *a5;
    v17 = (_OWORD *)(v16 + 28);
  }
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(4 * v13 + 8, v17, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
