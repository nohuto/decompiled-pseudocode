/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0044630 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0071C18 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00722B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00C8050 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
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
