/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x180070420
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v3; // dl
  char v4; // r9
  char v5; // dl
  int v6; // eax

  v3 = *((_BYTE *)this + 184) & 0xFE | (*((_DWORD *)a3 + 2) != 0);
  *((_BYTE *)this + 184) = v3;
  v4 = v3 & 0xFD | (*((_DWORD *)a3 + 3) != 0 ? 2 : 0);
  v5 = v4 ^ (v4 ^ (2 * v4)) & 4;
  *((_BYTE *)this + 184) = v5;
  *((_BYTE *)this + 184) = v5 & 0xF7 | (*((_DWORD *)a3 + 4) != 0 ? 8 : 0);
  *((_BYTE *)this + 1608) = *((_BYTE *)this + 1608) & 0xFB | (*((_DWORD *)a3 + 5) != 0 ? 4 : 0);
  v6 = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 47) = v6;
  *((_DWORD *)this + 422) = v6;
  *((_BYTE *)this + 1608) &= ~8u;
  *((_BYTE *)this + 1608) |= v6 != 2 ? 0 : 8;
  return 0LL;
}
