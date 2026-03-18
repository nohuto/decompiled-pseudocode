/*
 * XREFs of ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C01C34F8
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00ED0A0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetPristineCursor(DISPLAY_SOURCE *this, unsigned int a2)
{
  SIZE_T v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  PVOID v6; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 4834LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 194) < (unsigned int)v3 )
  {
    operator delete[](*((void **)this + 95));
    *((_DWORD *)this + 194) = 0;
    v6 = operator new(v3, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 95) = v6;
    if ( v6 )
      *((_DWORD *)this + 194) = v3;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 736);
}
