/*
 * XREFs of KiExtendProcessAffinity @ 0x1402B332C
 * Callers:
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x1400EA0B0 (KiSetIdealNodeProcessByGroup.c)
 */

__int64 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  __int64 result; // rax

  v2 = a2;
  v4 = a2;
  v5 = qword_140572748[a2];
  v6 = *(_QWORD *)(a1 + 8 * v2 + 88);
  if ( v6 )
  {
    result = v5 | v6;
    *(_QWORD *)(a1 + 8 * v4 + 88) = result;
  }
  else
  {
    if ( *(_WORD *)(a1 + 80) <= (unsigned __int16)v2 )
      *(_WORD *)(a1 + 80) = v2 + 1;
    *(_QWORD *)(a1 + 8 * v4 + 88) |= v5;
    KiSetIdealNodeProcessByGroup(a1, 0LL, v2);
    v7 = *(_DWORD *)(a1 + 444);
    result = (unsigned __int16)v2;
    _bittestandset(&v7, (unsigned __int16)v2);
    *(_DWORD *)(a1 + 444) = v7;
  }
  return result;
}
