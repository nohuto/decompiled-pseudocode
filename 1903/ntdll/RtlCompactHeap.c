/*
 * XREFs of RtlCompactHeap @ 0x180089480
 * Callers:
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    sub_18004F130((__int64)Src, a2 & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return sub_18010496C(Src);
    }
    else
    {
      v5 = 0LL;
      v10 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v9 = 1;
      }
      v6 = sub_1800EFD8C(Src);
      if ( v6 )
      {
        v5 = 16LL * *(unsigned __int16 *)(v6 + 8);
        v10 = v5;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v7 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v7 + 40) > v5 )
          v5 = *(_QWORD *)(v7 + 40);
        v10 = v5;
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v8 = NtCurrentTeb();
        v8->LastErrorValue = RtlNtStatusToDosError(0);
        v5 = v10;
      }
      if ( v9 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v5;
    }
  }
}
