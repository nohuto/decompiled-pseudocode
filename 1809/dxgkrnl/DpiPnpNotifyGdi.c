/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C0145CE8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, char a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v12; // rbx
  _QWORD v13[5]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v14[10]; // [rsp+60h] [rbp-41h] BYREF

  v6 = a3;
  memset(v13, 0, 0x20uLL);
  if ( a1
    && !a2
    && (v12 = *(_QWORD *)(a1 + 64), v13[1] = *(_QWORD *)(v12 + 152), *(_DWORD *)(v12 + 16) == 1953656900)
    && *(_DWORD *)(v12 + 20) == 2 )
  {
    BYTE4(v13[3]) = *(_BYTE *)(v12 + 3800) >> 7;
    BYTE6(v13[3]) = *(_DWORD *)(v12 + 3888) == 3;
    v9 = *(_QWORD *)(v12 + 2600);
  }
  else
  {
    v9 = 0LL;
  }
  v13[2] = a2;
  LODWORD(v13[0]) = 7;
  if ( !a1 || (BYTE5(v13[3]) = 1, qword_1C008E9D8 != a1) )
    BYTE5(v13[3]) = 0;
  HIBYTE(v13[3]) = a4;
  memset(v14, 0, 0x48uLL);
  HIDWORD(v14[7]) = 0;
  memset(&v14[1], 0, 36);
  *(_QWORD *)((char *)&v14[6] + 4) = a2;
  v14[0] = 0x480000001ELL;
  LODWORD(v14[6]) = 47;
  v14[8] = v9;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
  LOBYTE(v10) = 1;
  return SMgrGdiCallout(
           v13,
           0x100000000LL,
           v10,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v6 != 0),
           v6,
           a5);
}
