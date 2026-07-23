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

void __fastcall sub_180050D98(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    sub_18007BDBC(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = sub_180071D04(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    sub_180050E08(a1, v5, a2, a4 & 1);
}
