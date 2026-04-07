/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039570
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  char *v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax

  v2 = (char *)this - 280;
  v3 = *((_DWORD *)this + 23);
  if ( !v3 || *((_DWORD *)v2 + 92) == v3 )
  {
    v4 = *((_QWORD *)v2 + 45);
    if ( v4 )
    {
      if ( !*(_BYTE *)(v4 + 72) )
      {
        v5 = *((_DWORD *)v2 + 92);
        if ( v5 != 3 && v5 != 6 )
          CRenderDataVisual::ClearInstructions((CTopLevelWindow3D *)((char *)this - 280));
      }
    }
  }
  else if ( !EqualRect((const RECT *)(*((_QWORD *)v2 + 41) + 48LL), (const RECT *)(v2 + 308)) )
  {
    if ( *((_QWORD *)v2 + 45) )
      CTopLevelWindow3D::StopAnimation((__int64)v2);
    CTopLevelWindow3D::StartAnimation((__int64)v2, *((_DWORD *)v2 + 93));
  }
}
