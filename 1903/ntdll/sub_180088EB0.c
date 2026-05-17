/*
 * XREFs of sub_180088EB0 @ 0x180088EB0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180088D60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 *     sub_180088FFC @ 0x180088FFC (sub_180088FFC.c)
 */

__int64 __fastcall sub_180088EB0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&qword_1801664C8);
  v7 = qword_1801660A8;
  if ( qword_1801660A8 )
  {
    while ( 1 )
    {
      v8 = v7 - 96;
      v13 = v7 - 96;
      if ( *(_QWORD *)(v7 - 96) == a2 )
        break;
      if ( *(_QWORD *)(v7 - 96) <= a2 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        if ( !v10 )
        {
          v9 = sub_180088FFC(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_16;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v7 + 16) = v13 + 96;
          goto LABEL_14;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 8);
        if ( !v10 )
        {
          v9 = sub_180088FFC(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_16;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v7 + 8) = v13 + 96;
LABEL_14:
          *v11 = v7;
          goto LABEL_16;
        }
      }
      v7 = v10;
    }
    v9 = sub_180062AF0(a3, v8 + 8, *(struct _PEB_LDR_DATA **)(v8 + 80), v6);
    if ( v9 >= 0 )
      ++*(_DWORD *)(v8 + 88);
  }
  else
  {
    v9 = sub_180088FFC(&v13, a2, a3);
    v8 = v13;
  }
LABEL_16:
  if ( v8 && qword_1801660A8 != v8 + 96 )
    qword_1801660A8 = (__int64)RtlSplay((_QWORD *)(v8 + 96));
  RtlReleaseSRWLockExclusive(&qword_1801664C8);
  *a1 = v8;
  return (unsigned int)v9;
}
