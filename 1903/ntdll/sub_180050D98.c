/*
 * XREFs of sub_180050D98 @ 0x180050D98
 * Callers:
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180050E08 @ 0x180050E08 (sub_180050E08.c)
 *     sub_180071D04 @ 0x180071D04 (sub_180071D04.c)
 *     sub_18007BDBC @ 0x18007BDBC (sub_18007BDBC.c)
 */

signed __int64 __fastcall sub_180050D98(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  signed __int64 result; // rax
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
    sub_18007BDBC(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = sub_180071D04(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
    return sub_180050E08(a1, v6, a2, a4 & 1);
  return result;
}
