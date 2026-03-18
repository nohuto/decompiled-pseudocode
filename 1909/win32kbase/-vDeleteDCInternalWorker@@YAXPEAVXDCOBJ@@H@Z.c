/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00AB930 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C001A124 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AA8C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AD7C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C001B258 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall vDeleteDCInternalWorker(struct DC **this, unsigned int a2)
{
  DC *v4; // rcx
  struct DC *v5; // rdx
  struct _ENTRY *EntryFromObject; // rax
  struct DC *v7; // r10
  REGION *v8; // rax
  REGION *v9; // rcx
  struct DC *v10; // r10
  REGION *v11; // rcx
  REGION *v12; // rcx
  REGION *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  REGION *v16; // rax
  struct PDEV *v17; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v18; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    FreeDCAttributes(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
  HmgDecrementShareReferenceCountEx(*((struct OBJECT **)*this + 12));
  v4 = *this;
  v18 = (struct PDEV *)*((_QWORD *)*this + 6);
  DC::vReleaseVis(v4);
  v5 = *this;
  *((_DWORD *)v5 + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, v5);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( DC::prgnVisSnap(*this) )
  {
    v8 = DC::prgnVisSnap(v7);
    REGION::vDeleteREGION(v8);
    v7 = *this;
  }
  v9 = (REGION *)*((_QWORD *)v7 + 143);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    v7 = *this;
  }
  if ( DC::prgnRao(v7) )
  {
    v16 = DC::prgnRao(v10);
    REGION::vDeleteREGION(v16);
    v10 = *this;
  }
  v11 = (REGION *)*((_QWORD *)v10 + 144);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    v10 = *this;
  }
  v12 = (REGION *)*((_QWORD *)v10 + 145);
  if ( v12 )
  {
    REGION::vDeleteREGION(v12);
    v10 = *this;
  }
  v13 = (REGION *)*((_QWORD *)v10 + 146);
  if ( v13 )
  {
    REGION::vDeleteREGION(v13);
    v10 = *this;
  }
  v17 = (struct PDEV *)*((_QWORD *)v10 + 7);
  XDCOBJ::bDeleteDC(this, a2);
  PDEVOBJ::vUnreferencePdev(&v18, a2 != 0, v14);
  if ( v17 )
    PDEVOBJ::vUnreferencePdev(&v17, a2 != 0, v15);
}
