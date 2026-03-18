/*
 * XREFs of MmGetCfgBitMapInformation @ 0x140679E7C
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140679C8C (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14];
  if ( a1 )
  {
    v3 = v2[59];
    v4 = v2[60];
  }
  else
  {
    v3 = v2[55];
    v4 = v2[56];
  }
  *a2 = v4;
  return v3;
}
