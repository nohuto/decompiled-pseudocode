/*
 * XREFs of ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x1801B4774
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetInterpolationMode(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE *a3)
{
  int v3; // eax
  int v4; // edx
  __int64 v5; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 == 1 )
  {
    v4 = 1;
    goto LABEL_11;
  }
  if ( v3 > 1 )
  {
    if ( v3 <= 3 )
    {
      v4 = 2;
      goto LABEL_11;
    }
    switch ( v3 )
    {
      case 4:
        goto LABEL_7;
      case 5:
        v4 = 4;
        break;
      case 6:
LABEL_7:
        v4 = 3;
        break;
    }
  }
LABEL_11:
  v5 = *(_QWORD *)this;
  *((_DWORD *)this + 21) = v4;
  (*(void (__fastcall **)(CSurfaceBrush *, __int64, CSurfaceBrush *))(v5 + 64))(this, 6LL, this);
  return 0LL;
}
