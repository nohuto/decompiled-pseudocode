/*
 * XREFs of ?SetPositionLayout@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJI@Z @ 0x1801A0CE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetPositionLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 16) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 16) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 64))(a1, 0LL, 0LL);
  }
  return 0LL;
}
