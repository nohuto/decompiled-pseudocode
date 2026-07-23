/*
 * XREFs of KiUpdateChildrenCpuTarget @ 0x14029BA24
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x140115FD4 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1401162B8 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x140115FD4 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1401162B8 (KiUpdateCpuTargetByRate.c)
 */

char __fastcall KiUpdateChildrenCpuTarget(_QWORD **a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  char v4; // si
  unsigned __int16 *v6; // rcx
  char result; // al

  v3 = *a1;
  v4 = a2;
  do
  {
    v6 = (unsigned __int16 *)(v3 - 7);
    LOBYTE(a2) = v4;
    if ( (*((_DWORD *)v3 - 13) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v6, a2, a3);
    else
      result = KiUpdateCpuTargetByWeight(v6, a2, a3);
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != a1 );
  return result;
}
