/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x1800E0A90
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1800E09E4 (RtlCalculateUserShadowStackSizes.c)
 */

__int64 __fastcall RtlCreateUserFiberShadowStack(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HIBYTE(a2);
  if ( HIBYTE(a2) > 0x40u )
    return 3221225485LL;
  memset(v7, 0, 0x20uLL);
  result = RtlCalculateUserShadowStackSizes(a1, v7);
  if ( (int)result >= 0 )
  {
    LODWORD(v7[2]) = v4;
    result = NtSetInformationProcess();
    if ( (int)result >= 0 )
    {
      *a3 = v7[3];
      return (unsigned int)result;
    }
  }
  return result;
}
