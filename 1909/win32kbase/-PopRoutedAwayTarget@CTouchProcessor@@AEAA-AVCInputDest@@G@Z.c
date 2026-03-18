/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C016C8BC
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C016F0A0 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C0165424 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(CTouchProcessor *a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v6; // r8
  struct tagCPointerRoutedAwayTarget ****v7; // rax
  struct tagCPointerRoutedAwayTarget ***v8; // rbx
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // r8
  _OWORD v19[8]; // [rsp+20h] [rbp-49h] BYREF

  memset(v19, 0, sizeof(v19));
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v7 = (struct tagCPointerRoutedAwayTarget ****)((char *)NodeById + 272);
    v8 = *v7;
    if ( *v7 != (struct tagCPointerRoutedAwayTarget ***)v7 )
    {
      CInputDest::operator=((__int64)v19, (__int64)(v8 + 2), v6);
      CTouchProcessor::FreeRoutedAwayTarget((struct _KTHREAD **)a1, v8, v9);
    }
  }
  v10 = v19[1];
  *(_OWORD *)a2 = v19[0];
  *(_BYTE *)(a2 + 120) = 0;
  v11 = v19[2];
  *(_OWORD *)(a2 + 16) = v10;
  v12 = v19[3];
  *(_OWORD *)(a2 + 32) = v11;
  v13 = v19[4];
  *(_OWORD *)(a2 + 48) = v12;
  v14 = v19[5];
  *(_OWORD *)(a2 + 64) = v13;
  v15 = v19[6];
  *(_OWORD *)(a2 + 80) = v14;
  *(_QWORD *)&v14 = *(_QWORD *)&v19[7];
  *(_OWORD *)(a2 + 96) = v15;
  *(_QWORD *)(a2 + 112) = v14;
  memset(v19, 0, sizeof(v19));
  CInputDest::SetEmpty((CInputDest *)v19, v16, v17);
  return a2;
}
