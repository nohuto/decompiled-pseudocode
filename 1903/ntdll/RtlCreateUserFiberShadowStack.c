/*
 * XREFs of RtlCreateUserFiberShadowStack @ 0x1800E09A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800E08F4 @ 0x1800E08F4 (sub_1800E08F4.c)
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
  result = sub_1800E08F4(a1, v7);
  if ( (int)result >= 0 )
  {
    LODWORD(v7[2]) = v4;
    result = ZwSetInformationProcess();
    if ( (int)result >= 0 )
    {
      *a3 = v7[3];
      return (unsigned int)result;
    }
  }
  return result;
}
