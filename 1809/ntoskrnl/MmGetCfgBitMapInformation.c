/*
 * XREFs of MmGetCfgBitMapInformation @ 0x140679554
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a1 )
  {
    v3 = v2[53];
    v4 = v2[54];
  }
  else
  {
    v3 = v2[49];
    v4 = v2[50];
  }
  *a2 = v4;
  return v3;
}
