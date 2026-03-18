/*
 * XREFs of ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z @ 0x18019A070
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetExtendMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETEXTENDMODE *a3)
{
  int v3; // r9d
  char v4; // dl
  int v5; // r9d
  __int64 v6; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  if ( v4 != *((_BYTE *)this + 96) )
  {
    v6 = *(_QWORD *)this;
    *((_BYTE *)this + 96) = v4;
    *((_BYTE *)this + 168) = 0;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v6 + 64))(this, 6LL, this);
  }
  return 0LL;
}
