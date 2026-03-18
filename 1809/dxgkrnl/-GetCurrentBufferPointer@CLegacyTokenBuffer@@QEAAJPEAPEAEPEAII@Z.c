/*
 * XREFs of ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C001E1F4
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001E0F0 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001BA0C (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::GetCurrentBufferPointer(
        CLegacyTokenBuffer *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d

  v4 = *((_DWORD *)this + 526);
  v5 = 0;
  if ( a4 > v4 )
  {
    v5 = CLegacyTokenBuffer::Grow(this);
    v4 = *((_DWORD *)this + 526);
  }
  *a2 = (unsigned __int8 *)*((_QWORD *)this + 262);
  *a3 = v4;
  return v5;
}
