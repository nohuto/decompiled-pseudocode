/*
 * XREFs of ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x1800CF920
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180062374 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007CAB8 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetBoundsRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *a3)
{
  float *v3; // rdx
  __int64 v4; // r9
  _OWORD *v5; // rdx
  _OWORD *v6; // rcx
  __int64 *v7; // r9
  __int64 v8; // rax

  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a3 + 2)
    && operator!=((float *)(v4 + 92), v3) )
  {
    v8 = *v7;
    *v6 = *v5;
    (*(void (__fastcall **)(__int64 *, __int64))(v8 + 64))(v7, 3LL);
  }
  return 0LL;
}
