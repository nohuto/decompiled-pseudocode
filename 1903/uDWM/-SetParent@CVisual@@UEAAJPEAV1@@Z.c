/*
 * XREFs of ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180036CA0
 * Callers:
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180036C40 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetParent(CVisual *this, struct CVisual *a2)
{
  struct CVisual *v2; // rbx

  *((_QWORD *)this + 3) = a2;
  v2 = a2;
  if ( !a2 )
    *((_BYTE *)this + 84) &= ~4u;
  if ( *((_DWORD *)this + 20) && a2 )
  {
    do
    {
      if ( (*((_BYTE *)v2 + 80) & 1) != 0 )
        break;
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v2 + 32LL))(v2);
      v2 = (struct CVisual *)*((_QWORD *)v2 + 3);
    }
    while ( v2 );
  }
  return 0LL;
}
