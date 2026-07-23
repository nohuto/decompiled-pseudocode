/*
 * XREFs of RtlSidDominates @ 0x180066F30
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_1800E65E8 @ 0x1800E65E8 (sub_1800E65E8.c)
 * Callees:
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v6; // edx
  int v7; // ecx
  BOOLEAN v8; // al
  BOOLEAN v9; // cl
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  unsigned __int8 v13; // al

  *Dominates = 0;
  v6 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v6 )
    v6 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v6 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v8 = RtlEqualSid(Sid1, Sid2);
  v9 = 1;
  if ( !v8 )
  {
    v11 = *((_BYTE *)Sid1 + 1);
    if ( v11 )
      v12 = *((_DWORD *)Sid1 + (unsigned int)v11 + 1);
    else
      v12 = 0;
    v13 = *((_BYTE *)Sid2 + 1);
    if ( v13 )
    {
      if ( v12 < *((_DWORD *)Sid2 + (unsigned int)v13 + 1) )
        v9 = 0;
    }
  }
  *Dominates = v9;
  return 0;
}
