/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ @ 0x1C0197AA8
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C0194EF0 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::UpdatePTPRightClickZone(CPTPEngine *this)
{
  int v1; // edx
  __int128 v2; // [rsp+0h] [rbp-18h]

  v1 = *((_DWORD *)this + 7);
  v2 = *((_OWORD *)this + 5);
  *(_OWORD *)((char *)this + 3192) = v2;
  if ( v1 )
  {
    *((_DWORD *)this + 798) = 0;
    *((_DWORD *)this + 800) = DWORD2(v2) - v2;
  }
  *((_DWORD *)this + 814) ^= (*((_DWORD *)this + 814) ^ (v1 << 19)) & 0x80000;
}
