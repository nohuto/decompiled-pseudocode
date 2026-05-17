/*
 * XREFs of RtlCreateAcl @ 0x180011A50
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18001167C @ 0x18001167C (sub_18001167C.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x1800686E0 (RtlCreateAndSetSD.c)
 *     sub_1800868A8 @ 0x1800868A8 (sub_1800868A8.c)
 *     sub_1800888A8 @ 0x1800888A8 (sub_1800888A8.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 *     sub_1800E6098 @ 0x1800E6098 (sub_1800E6098.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
