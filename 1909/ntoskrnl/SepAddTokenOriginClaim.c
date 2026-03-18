/*
 * XREFs of SepAddTokenOriginClaim @ 0x1408DFF80
 * Callers:
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408DFBFC (SeDuplicateTokenAndAddOriginClaim.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084C80 (AuthzBasepSetSecurityAttributesToken.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v4; // rcx
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  __int64 *v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+88h] [rbp+18h] BYREF

  v8 = a1;
  v9 = a2;
  v10 = 0;
  p_DestinationString = &DestinationString;
  v6[0] = 1;
  v6[1] = 1;
  RtlInitUnicodeString(&DestinationString, L"SMARTLOCKER://SMARTSCREENORIGINCLAIM");
  v4 = *(_DWORD **)(a3 + 776);
  v15 = &v8;
  v12 = 16;
  v14 = 1;
  v13 = 65;
  v16 = 4;
  return AuthzBasepSetSecurityAttributesToken(v4, &v16, (__int64)v6);
}
