/*
 * XREFs of ??0ManipulationData@@QEAA@XZ @ 0x1801E0F5C
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x1801E0E6C (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801E12C4 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x1801E1A58 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

ManipulationData *__fastcall ManipulationData::ManipulationData(ManipulationData *this)
{
  __int64 v1; // rcx
  ManipulationData *result; // rax

  ManipulationData::Reset(this);
  *(_BYTE *)(v1 + 180) |= 3u;
  *(_DWORD *)(v1 + 168) = 7;
  result = (ManipulationData *)v1;
  *(_DWORD *)(v1 + 172) = 7;
  *(_DWORD *)(v1 + 176) = 7;
  return result;
}
