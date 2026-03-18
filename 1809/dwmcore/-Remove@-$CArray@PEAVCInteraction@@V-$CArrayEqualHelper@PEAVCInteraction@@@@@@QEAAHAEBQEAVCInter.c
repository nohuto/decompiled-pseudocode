/*
 * XREFs of ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x18019CA5C
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18009EDE8 (--1CInteraction@@MEAA@XZ.c)
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019CD84 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ebx
  __int64 v5; // rax

  v2 = dword_1803086A8;
  v3 = 0;
  v4 = 1;
  if ( dword_1803086A8 <= 0 )
  {
LABEL_5:
    v3 = -1;
  }
  else
  {
    v5 = 0LL;
    while ( *(_QWORD *)((char *)CInteraction::s_DefaultStateLockedInteractions + v5) != *a2 )
    {
      ++v3;
      v5 += 8LL;
      if ( v3 >= dword_1803086A8 )
        goto LABEL_5;
    }
  }
  if ( v3 == -1 )
    return 0LL;
  if ( v3 < 0 || v3 >= dword_1803086A8 )
  {
    return 0;
  }
  else
  {
    if ( v3 + 1 != dword_1803086A8 )
    {
      memmove_0(
        (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v3,
        (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v3 + 8,
        8LL * (dword_1803086A8 - v3 - 1));
      v2 = dword_1803086A8;
    }
    dword_1803086A8 = v2 - 1;
  }
  return v4;
}
