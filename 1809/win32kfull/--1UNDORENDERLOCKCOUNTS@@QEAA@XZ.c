/*
 * XREFs of ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01254C8
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 104) = *(_DWORD *)this;
    *(_DWORD *)(*((_QWORD *)this + 1) + 108LL) = *((_DWORD *)this + 1);
  }
}
