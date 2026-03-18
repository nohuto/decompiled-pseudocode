/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18006578C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18009FD28 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800A2080 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A5B60 (-SetSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v1; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  unsigned int i; // eax
  _QWORD ***v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *j; // rax
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  unsigned int k; // eax
  _QWORD ***v13; // rcx
  _QWORD **v14; // rcx
  _QWORD *m; // rax

  v1 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 56) = 0LL;
  if ( *(int *)v1 < 0 )
  {
    v4 = *(unsigned int *)(v1 + 4);
    v5 = (_BYTE *)(v1 + 8);
    for ( i = 0; i < (unsigned int)v4; ++v5 )
    {
      if ( *v5 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v4 )
      v7 = 0LL;
    else
      v7 = (_QWORD ***)(v1 + v4 + 15 + 8LL * i - (((_BYTE)v4 + 15) & 7));
    v8 = *v7;
    if ( v8 )
    {
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
        *(j - 13) = 0LL;
    }
  }
  *((_QWORD *)this + 63) = 0LL;
  v3 = *((_QWORD *)this + 28);
  if ( *(int *)v3 < 0 )
  {
    v10 = *(unsigned int *)(v3 + 4);
    v11 = (_BYTE *)(v3 + 8);
    for ( k = 0; k < (unsigned int)v10; ++v11 )
    {
      if ( *v11 == 1 )
        break;
      ++k;
    }
    if ( k >= (unsigned int)v10 )
      v13 = 0LL;
    else
      v13 = (_QWORD ***)(v3 + v10 + 15 + 8LL * k - (((_BYTE)v10 + 15) & 7));
    v14 = *v13;
    if ( v14 )
    {
      for ( m = *v14; m != v14; m = (_QWORD *)*m )
        *(m - 6) = 0LL;
    }
  }
}
