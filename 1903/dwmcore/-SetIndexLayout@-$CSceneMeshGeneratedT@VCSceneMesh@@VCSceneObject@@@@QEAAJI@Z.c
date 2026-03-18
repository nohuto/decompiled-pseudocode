/*
 * XREFs of ?SetIndexLayout@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJI@Z @ 0x1801A202C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetIndexLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 15) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 15) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 64))(a1, 0LL, 0LL);
  }
  return 0LL;
}
