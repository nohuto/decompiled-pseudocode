/*
 * XREFs of ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C004E2BC
 * Callers:
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0282D80 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02838B0 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C004E340 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveChildTarget(DMMVIDEOPRESENTTARGET *this, struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r8
  struct DMMVIDEOPRESENTTARGET **v4; // rcx
  _QWORD *i; // rdi

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 55);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 440)
    || (v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 56),
        *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 440)) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  *((_QWORD *)a2 + 57) = 0LL;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 53) == (DMMVIDEOPRESENTTARGET *)((char *)this + 424) )
  {
    for ( i = (_QWORD *)((char *)this + 464);
          (_QWORD *)*i != i;
          DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(this, (struct DMMVIDEOPRESENTTARGET *)(*i - 480LL)) )
    {
      ;
    }
  }
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
}
