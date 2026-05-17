/*
 * XREFs of sub_1800E02E0 @ 0x1800E02E0
 * Callers:
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_1800E046C @ 0x1800E046C (sub_1800E046C.c)
 */

__int64 __fastcall sub_1800E02E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  bool v11; // sf
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  RtlAcquireSRWLockShared(&qword_1801664B0, a2, a3, (unsigned __int64)a4);
  *a4 = 0LL;
  v7 = dword_180164340;
  LODWORD(v14) = dword_180164340;
  for ( i = dword_180164340 - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + qword_180164338 + 8) == a1 )
    {
      if ( v16[0] )
      {
        v10 = v7;
        for ( HIDWORD(v14) = v7; ; HIDWORD(v14) = v10 )
        {
          v11 = v10 < 0;
          if ( v10 < 0 )
            break;
          if ( *(_QWORD *)(((__int64)v10 << 6) + qword_180164338 + 8) == a1
            && (unsigned __int8)sub_1800E046C((unsigned int)v10, a3, v16, &v15, v14) )
          {
            v7 = v10;
            v11 = v10 < 0;
            break;
          }
          --v10;
        }
        if ( v11 )
          v7 = dword_180164340;
        break;
      }
      v16[0] = *(_QWORD *)(v9 + qword_180164338 + 32);
      v15 = *(_QWORD *)(v9 + qword_180164338 + 48);
      v7 = i;
      LODWORD(v14) = i;
    }
  }
  if ( v7 == dword_180164340 )
  {
    v16[0] = 0LL;
  }
  else
  {
    if ( !v15 )
    {
      v12 = RtlImageNtHeader(v16[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v12 )
      {
        if ( *(_WORD *)(v12 + 24) == 267 || *(_WORD *)(v12 + 24) == 523 )
          v15 = *(unsigned int *)(v12 + 80);
        else
          v15 = 0LL;
      }
    }
    *a4 = v15;
  }
  RtlReleaseSRWLockShared(&qword_1801664B0);
  return v16[0];
}
