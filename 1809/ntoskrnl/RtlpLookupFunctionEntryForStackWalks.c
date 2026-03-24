/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x1400A0410
 * Callers:
 *     RtlpWalkFrameChain @ 0x14009EB90 (RtlpWalkFrameChain.c)
 *     RtlpSameFunction @ 0x140184F84 (RtlpSameFunction.c)
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A18B0 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x140133C98 (RtlpLookupUserFunctionTable.c)
 *     HvlQueryConnection @ 0x14017D060 (HvlQueryConnection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65C0 (ExRaiseDatatypeMisalignment.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v4; // rcx
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  ULONG_PTR v16; // rax

  v4 = *(_QWORD *)(a2 + 8);
  if ( a1 < v4 || a1 >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
    {
      v5 = RtlpLookupUserFunctionTable(a1);
    }
    else if ( a1 >= *(&xmmword_140558020 + 1) && a1 < *(&xmmword_140558020 + 1) + (unsigned int)qword_140558030 )
    {
      *(_OWORD *)a2 = *(_OWORD *)&xmmword_140558020;
      *(_QWORD *)(a2 + 16) = qword_140558030;
      v5 = *(_QWORD *)a2;
    }
    else
    {
      v5 = RtlpxLookupFunctionTable(a1, a2);
    }
  }
  else
  {
    v5 = *(_QWORD *)a2;
  }
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 20) / 0xCu;
    v7 = 0LL;
    if ( v6 )
    {
      v8 = a1 - *(_QWORD *)(a2 + 8);
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( v8 >= *v9 && v8 < v9[1] )
        v7 = v9;
    }
    if ( v7 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      v14 = v7[2];
      if ( (v14 & 1) != 0 )
      {
        v7 = (unsigned int *)(v14 + v13 - 1);
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v7 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v7;
  }
  else if ( (int)HvlQueryConnection(a2 + 8) < 0 || (v16 = *(_QWORD *)(a2 + 8), a1 < v16) || a1 >= v16 + 4096 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 4096;
    return 0LL;
  }
}
