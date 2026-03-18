/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800CCC28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v4; // dl
  char v5; // r9
  char v6; // cl
  char v7; // dl
  int v8; // eax
  __int64 result; // rax

  v4 = *((_BYTE *)this + 184) & 0xFE | (*((_BYTE *)a3 + 8) != 0);
  *((_BYTE *)this + 184) = v4;
  v5 = v4 & 0xFB | (*((_BYTE *)a3 + 9) != 0 ? 4 : 0);
  *((_BYTE *)this + 184) = v5;
  v6 = v5 & 0xF7 | (*((_BYTE *)a3 + 10) != 0 ? 8 : 0);
  v7 = v6 ^ (v6 ^ (2 * v6)) & 0x10;
  *((_BYTE *)this + 184) = v7;
  *((_BYTE *)this + 184) = v7 & 0xDF | (*((_BYTE *)a3 + 11) != 0 ? 0x20 : 0);
  *((_BYTE *)this + 1608) = *((_BYTE *)this + 1608) & 0xFB | (*((_BYTE *)a3 + 12) != 0 ? 4 : 0);
  v8 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 47) = v8;
  *((_DWORD *)this + 422) = v8;
  result = 0LL;
  *((_BYTE *)this + 1608) = *((_BYTE *)this + 1608) & 0xF7 | (*((_DWORD *)this + 47) != 2 ? 0 : 8);
  return result;
}
