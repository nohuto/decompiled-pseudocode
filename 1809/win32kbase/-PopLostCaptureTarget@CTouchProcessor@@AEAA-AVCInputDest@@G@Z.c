/*
 * XREFs of ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0140034
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C0138D8C (-FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::PopLostCaptureTarget(struct _KTHREAD **a1, _OWORD *a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerCaptureLostTarget ****v7; // rax
  struct tagCPointerCaptureLostTarget ***v8; // rbx
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _OWORD v29[12]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v29, 0, 0xB8uLL);
  LOBYTE(v29[11]) = 0;
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( !NodeById
    || (v7 = (struct tagCPointerCaptureLostTarget ****)((char *)NodeById + 312),
        v8 = *v7,
        *v7 == (struct tagCPointerCaptureLostTarget ***)v7) )
  {
    memset(a2, 0, 0xB0uLL);
    v19 = v29[1];
    *a2 = v29[0];
    v20 = v29[2];
    a2[1] = v19;
    v21 = v29[3];
    a2[2] = v20;
    v22 = v29[4];
    a2[3] = v21;
    v23 = v29[5];
    a2[4] = v22;
    v24 = v29[6];
    a2[5] = v23;
    v25 = v29[8];
    a2[6] = v24;
    a2[7] = v29[7];
    v26 = v29[9];
    a2[8] = v25;
    v27 = v29[10];
    a2[9] = v26;
    a2[10] = v27;
  }
  else
  {
    CInputDest::operator=((__int64)v29, (__int64)(v8 + 2));
    CTouchProcessor::FreeLostCaptureTarget(a1, v8, v9);
    memset(a2, 0, 0xB0uLL);
    v10 = v29[1];
    *a2 = v29[0];
    v11 = v29[2];
    a2[1] = v10;
    v12 = v29[3];
    a2[2] = v11;
    v13 = v29[4];
    a2[3] = v12;
    v14 = v29[5];
    a2[4] = v13;
    v15 = v29[6];
    a2[5] = v14;
    v16 = v29[8];
    a2[6] = v15;
    a2[7] = v29[7];
    v17 = v29[9];
    a2[8] = v16;
    v18 = v29[10];
    a2[9] = v17;
    a2[10] = v18;
  }
  *((_BYTE *)a2 + 176) = 0;
  memset(v29, 0, 0xB8uLL);
  CInputDest::SetEmpty((CInputDest *)v29);
  return a2;
}
