/*
 * XREFs of ?GetGroupingTarget@CAppArrangementImmediate@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x1800A7A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementImmediate::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = &unk_1800CB314;
  v3 = a2 & 0xFFF;
  v4 = 0;
  while ( (*(v2 - 1) & 0xFFF) != v3 && (*v2 & 0xFFF) != v3 )
  {
    ++v4;
    v2 += 2;
    if ( v4 >= 3 )
      return v3;
  }
  return *(v2 - 1) & 0xFFF;
}
