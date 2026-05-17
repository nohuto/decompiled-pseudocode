/*
 * XREFs of RtlpHpHeapWalk @ 0x18005B76C
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18005B71C (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeWalkHeap @ 0x18005B604 (RtlpHpLargeWalkHeap.c)
 *     RtlpHpSegWalk @ 0x18005B85C (RtlpHpSegWalk.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rdx
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = a3;
  v5 = *a2;
  if ( v5 )
  {
    if ( v5 == a1 )
    {
      *a2 = 0LL;
      v7 = 0;
      goto LABEL_6;
    }
    if ( (_WORD)v5 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v9 = RtlCSparseBitmapBitmaskRead((__int64)&unk_180166908, 2 * ((unsigned __int64)(v5 - qword_180166948) >> 20));
    if ( v9 )
    {
      v7 = v9 - 1;
LABEL_5:
      while ( v7 < 2 )
      {
LABEL_6:
        LOBYTE(a3) = v4;
        result = RtlpHpSegWalk(a1 + 192LL * v7 + 256, a2, a3);
        if ( (_DWORD)result != -2147483622 )
          return result;
        *a2 = 0LL;
        ++v7;
      }
    }
    return RtlpHpLargeWalkHeap(a1, a2);
  }
  else
  {
    *((_DWORD *)a2 + 7) = 0;
    *((_WORD *)a2 + 9) = -32766;
    result = 0LL;
    *a2 = a1;
    a2[1] = 4096LL;
    *((_BYTE *)a2 + 17) = 0;
    *((_DWORD *)a2 + 6) = 4096;
    a2[4] = a1;
    a2[5] = a1;
  }
  return result;
}
