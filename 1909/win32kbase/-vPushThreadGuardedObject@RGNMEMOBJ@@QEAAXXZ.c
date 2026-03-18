/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012004 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0015DF0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0017350 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002D810 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00777D0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C008D2D0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD050 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00ADEA4 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
  {
    v2 = *(_QWORD **)this;
    if ( v2 )
    {
      v3 = v2 + 6;
      if ( v2 != (_QWORD *)-48LL )
      {
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v2[8] = v2;
        v2[9] = CleanUpRegion;
        if ( ThreadWin32Thread )
        {
          v5 = *(_QWORD *)(ThreadWin32Thread + 88);
          v6 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v5 + 8) != v6 )
            __fastfail(3u);
          *v3 = v5;
          v2[7] = v6;
          *(_QWORD *)(v5 + 8) = v3;
          *v6 = v3;
        }
        else
        {
          v2[7] = v2 + 6;
          *v3 = v3;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
