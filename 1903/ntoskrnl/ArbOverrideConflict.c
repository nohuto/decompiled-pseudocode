/*
 * XREFs of ArbOverrideConflict @ 0x14075B9D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGetNextRange @ 0x14075C030 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14075C0E0 (RtlGetFirstRange.c)
 */

char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v4; // si
  PRTL_RANGE v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 Start; // rax
  bool v8; // cf
  _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+58h] [rbp+10h] BYREF

  memset(&Iterator, 0, sizeof(Iterator));
  v4 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
    return 0;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  v5 = Range;
  if ( Range )
  {
    v6 = *(_QWORD *)(a2 + 16);
    do
    {
      Start = v5->Start;
      v8 = v6 < v5->Start;
      if ( v6 > v5->Start )
      {
        if ( v5->End < v6 )
          goto LABEL_6;
        v8 = v6 < Start;
      }
      if ( (!v8 || *(_QWORD *)(a2 + 24) >= Start) && (v5->Attributes & *(_BYTE *)(a2 + 67)) == 0 )
      {
        if ( v5->Owner != *(void **)(*(_QWORD *)(a2 + 32) + 32LL) || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
          return 0;
        v4 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v6;
      }
LABEL_6:
      RtlGetNextRange(&Iterator, &Range, 1u);
      v5 = Range;
    }
    while ( Range );
  }
  return v4;
}
