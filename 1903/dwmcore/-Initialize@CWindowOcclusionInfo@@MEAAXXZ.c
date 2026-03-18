/*
 * XREFs of ?Initialize@CWindowOcclusionInfo@@MEAAXXZ @ 0x180020C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::Initialize(CWindowOcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF0u;
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
  *((_DWORD *)this + 6) = 0x80000000;
  *((_DWORD *)this + 7) = 0x80000000;
  *((_DWORD *)this + 8) = 0x80000000;
}
