/*
 * XREFs of sub_180005FFC @ 0x180005FFC
 * Callers:
 *     sub_180005F8C @ 0x180005F8C (sub_180005F8C.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082FC0 @ 0x180082FC0 (sub_180082FC0.c)
 */

__int64 __fastcall sub_180005FFC(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  char v4; // bl
  int v5; // esi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&unk_180166440);
  v3 = qword_180166420;
  v4 = 0;
  if ( (qword_180166428 & 1) != 0 )
  {
    if ( qword_180166420 )
      v3 = (unsigned __int64)&qword_180166420 ^ qword_180166420;
    else
      v3 = 0LL;
  }
  v5 = qword_180166428 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)sub_180082FC0(a1 + 24, v3) < 0 )
      {
        v6 = *(_QWORD *)v3;
        if ( v5 )
        {
          if ( !v6 )
            break;
          v6 ^= v3;
        }
        if ( !v6 )
          break;
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_17;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_17:
          v4 = 1;
          break;
        }
      }
      v3 = v6;
    }
  }
  LOBYTE(v2) = v4;
  RtlRbInsertNodeEx(&qword_180166420, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&unk_180166440);
}
