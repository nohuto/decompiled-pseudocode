/*
 * XREFs of sub_1800485B8 @ 0x1800485B8
 * Callers:
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800485B8(__int64 a1)
{
  struct _PEB *v1; // r8
  __int64 result; // rax
  unsigned int NumberOfHeaps; // edx
  PVOID *ProcessHeaps; // r9
  PVOID *v5; // rbx
  PVOID *v6; // rdi
  unsigned int v7; // r10d
  __int16 v8; // r11
  __int16 v9; // si
  __int16 v10; // bp
  __int64 v11; // rdx
  __int16 v12; // r9

  v1 = NtCurrentPeb();
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    result = *(unsigned __int16 *)(a1 + 28);
  else
    result = *(unsigned __int16 *)(a1 + 208);
  NumberOfHeaps = v1->NumberOfHeaps;
  if ( NumberOfHeaps && (_WORD)result && (unsigned __int16)result <= NumberOfHeaps )
  {
    ProcessHeaps = v1->ProcessHeaps;
    v5 = &ProcessHeaps[(unsigned __int16)result];
    v6 = v5 - 1;
    v7 = NumberOfHeaps - (unsigned __int16)result;
    if ( NumberOfHeaps != (unsigned __int16)result )
    {
      v8 = word_18016390A;
      v9 = HIWORD(dword_1801638F8);
      v10 = word_1801638EA;
      do
      {
        v11 = (__int64)*v5++;
        *v6 = (PVOID)v11;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          v12 = *(_WORD *)(v11 + 28);
        else
          v12 = *(_WORD *)(v11 + 208);
        if ( v10 == v12 )
          v10 = v12 - 1;
        if ( v9 == v12 )
          v9 = v12 - 1;
        if ( v8 == v12 )
          v8 = v12 - 1;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          --*(_WORD *)(v11 + 28);
        else
          --*(_WORD *)(v11 + 208);
        ++v6;
        --v7;
      }
      while ( v7 );
      NumberOfHeaps = v1->NumberOfHeaps;
      ProcessHeaps = v1->ProcessHeaps;
      word_18016390A = v8;
      HIWORD(dword_1801638F8) = v9;
      word_1801638EA = v10;
    }
    result = NumberOfHeaps - 1;
    v1->NumberOfHeaps = result;
    ProcessHeaps[result] = 0LL;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 28) = 0;
    else
      *(_WORD *)(a1 + 208) = 0;
  }
  return result;
}
