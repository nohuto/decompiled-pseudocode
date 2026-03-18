/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00142F8
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C00112A4 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00143D8 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00158A0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0022DF0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002EC40 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003D770 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0090790 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AFF80 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B0C54 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rdi
  bool v7; // zf

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = (__int64 *)(v1 + 48);
    if ( v1 != -48 )
    {
      KeEnterCriticalRegion();
      v4 = (__int64 *)*v3;
      if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = *(__int64 ***)(v1 + 56), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      *(_QWORD *)(v1 + 56) = v1 + 48;
      *v3 = (__int64)v3;
      KeLeaveCriticalRegion();
      v1 = *(_QWORD *)this;
    }
    if ( v1 && (struct REGION *)v1 != prgnDefault )
    {
      if ( *(__int16 *)(v1 + 14) >= 0 )
      {
        Win32FreePool(v1);
      }
      else
      {
        v6 = qword_1C02158D0;
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
          Win32FreeToPagedLookasideListImpl(v6, v1);
      }
    }
  }
  v7 = *((_DWORD *)this + 2) == 1;
  *(_QWORD *)this = 0LL;
  if ( v7 )
  {
    REGION::vDeleteREGION(0LL);
    *(_QWORD *)this = 0LL;
  }
}
