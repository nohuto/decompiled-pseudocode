/*
 * XREFs of ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C0075760
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

bool __fastcall CRegion::IsEmpty(CRegion *this)
{
  int v1; // edx
  int v2; // edx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 3);
  if ( !v1 )
    return 1;
  v2 = v1 - 1;
  if ( !v2 )
    return 0;
  if ( v2 != 1 )
    return 1;
  v5 = *((_QWORD *)this + 2);
  return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v5) == 1;
}
