/*
 * XREFs of bsearch_s @ 0x180092A40
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpGetTargetRvaFlag @ 0x18002B0A4 (RtlpGetTargetRvaFlag.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _guard_check_icall @ 0x180096480 (_guard_check_icall.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  rsize_t v11; // rbp
  bool v12; // zf
  char *v13; // r14
  int v14; // eax

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v9 <= v8 )
    {
      v11 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v12 = (v7 & 1) == 0;
      v7 = v11 - 1;
      if ( !v12 )
        v7 = v11;
      v13 = &v9[SizeOfElements * v7];
      v14 = ((__int64 (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v13);
      if ( !v14 )
        return &v9[SizeOfElements * v7];
      if ( v14 >= 0 )
      {
        v9 = &v13[SizeOfElements];
        v7 = v11;
      }
      else
      {
        v8 = &v13[-SizeOfElements];
      }
    }
  }
  else
  {
    invalid_parameter();
  }
  return 0LL;
}
