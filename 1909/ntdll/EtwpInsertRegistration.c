/*
 * XREFs of EtwpInsertRegistration @ 0x18000AC1C
 * Callers:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x18006C748 (EtwpRegistrationCompare.c)
 */

__int64 __fastcall EtwpInsertRegistration(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  char v4; // bl
  int v5; // esi
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1 + 32;
  v9 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v3 = EtwpRegistrationTable;
  v4 = 0;
  if ( (qword_180166448 & 1) != 0 )
  {
    if ( EtwpRegistrationTable )
      v3 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
    else
      v3 = 0LL;
  }
  v5 = qword_180166448 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v8, v3) < 0 )
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
  RtlRbInsertNodeEx(&EtwpRegistrationTable, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
