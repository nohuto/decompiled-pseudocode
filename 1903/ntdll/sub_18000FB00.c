/*
 * XREFs of sub_18000FB00 @ 0x18000FB00
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlFindAceByType @ 0x1800126F0 (RtlFindAceByType.c)
 *     sub_18008B9D4 @ 0x18008B9D4 (sub_18008B9D4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000FB00(PACL Acl, __int64 a2)
{
  _DWORD *AceByType; // rax
  __int64 v5; // r8
  _DWORD *v6; // rbx
  int v8; // ecx
  ULONG Index; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-1Ch] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  unsigned __int16 v12; // [rsp+2Ch] [rbp-14h]

  v10 = 0;
  v11 = 0;
  Index = 0;
  v12 = 256;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(Acl, 0x15u, &Index);
    v6 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (AceByType[1] & 0xFF000000) != 0 )
      return 3221225485LL;
    if ( (*((_BYTE *)AceByType + 1) & 0x40) == 0 )
      break;
    if ( !(unsigned __int8)sub_18008B9D4(a2, AceByType + 2, v5, &v10) )
      return 3221225506LL;
LABEL_3:
    ++Index;
    if ( !v6 )
      return v10;
  }
  v8 = *(_DWORD *)((char *)AceByType + 10) - v11;
  if ( !v8 )
    v8 = *((unsigned __int16 *)AceByType + 7) - v12;
  if ( !v8 && *((_BYTE *)AceByType + 9) == 1 && !AceByType[4] )
    goto LABEL_3;
  return 3221225485LL;
}
