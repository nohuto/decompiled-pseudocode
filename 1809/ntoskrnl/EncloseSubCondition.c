/*
 * XREFs of EncloseSubCondition @ 0x1408A83A4
 * Callers:
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 */

__int64 __fastcall EncloseSubCondition(PVOID *a1)
{
  unsigned int v2; // ebx
  _WORD *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned __int64 v8; // rbp
  wchar_t *v9; // rax
  wchar_t *v10; // rdi

  v2 = 0;
  v3 = *a1;
  if ( *v3 != 40 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    v5 = 2LL * (unsigned int)v4;
    if ( v5 > 0xFFFFFFFF )
      return 534;
    v6 = v5;
    v7 = v5 + 6;
    if ( v6 + 6 < v6 )
    {
      return 534;
    }
    else
    {
      v8 = v7;
      v9 = (wchar_t *)SddlpAlloc(v7);
      v10 = v9;
      if ( v9 )
      {
        if ( RtlStringCchPrintfW(v9, v8 >> 1, L"(%ls)", *a1) >= 0 )
        {
          if ( *a1 )
            ExFreePoolWithTag(*a1, 0);
          *a1 = v10;
        }
        else
        {
          ExFreePoolWithTag(v10, 0);
          return 50;
        }
      }
      else
      {
        return 8;
      }
    }
  }
  return v2;
}
