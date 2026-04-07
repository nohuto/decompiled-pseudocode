/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18002D168
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002C8C8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::IsRenderTargetEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  return *((_DWORD *)this + 42) == *((_DWORD *)a2 + 42)
      && *((_DWORD *)this + 43) == *((_DWORD *)a2 + 43)
      && *((_DWORD *)this + 44) == *((_DWORD *)a2 + 44)
      && *((_DWORD *)this + 49) == *((_DWORD *)a2 + 49)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53);
}
