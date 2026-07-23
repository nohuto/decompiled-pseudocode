/*
 * XREFs of sub_180077EA8 @ 0x180077EA8
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180079198 @ 0x180079198 (sub_180079198.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180077EA8(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rtt

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( !*(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
      {
        do
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          v4[2] = v5;
          v6 = v4[1];
        }
        while ( !v6 );
        if ( v4 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
      }
      v7 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 - 4, v2);
      if ( v7 == v2 )
        break;
      if ( (v2 & 1) == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v2) = sub_180035E30(a1, v2, 0);
  }
  return v2;
}
