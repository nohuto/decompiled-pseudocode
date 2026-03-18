/*
 * XREFs of ??0ManipulationData@@QEAA@XZ @ 0x1801A5514
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x1801A5424 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801A58EC (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x1801A6068 (-Reset@ManipulationData@@QEAAXXZ.c)
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
