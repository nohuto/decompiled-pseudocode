/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C015A7C8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C015D260 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v16[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+68h] [rbp-41h]
  __int128 v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+94h] [rbp-15h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  __int64 v24; // [rsp+A0h] [rbp-9h]

  v7 = a3;
  memset(v15, 0, 0x20uLL);
  if ( a1
    && !a2
    && (v14 = *(_QWORD *)(a1 + 64), v15[1] = *(_QWORD *)(v14 + 152), *(_DWORD *)(v14 + 16) == 1953656900)
    && *(_DWORD *)(v14 + 20) == 2 )
  {
    BYTE4(v15[3]) = *(_BYTE *)(v14 + 3904) >> 7;
    BYTE6(v15[3]) = *(_DWORD *)(v14 + 3992) == 3;
    v11 = *(_QWORD *)(v14 + 2672);
  }
  else
  {
    v11 = 0LL;
  }
  v15[2] = a2;
  LODWORD(v15[0]) = 7;
  if ( !a1 || (BYTE5(v15[3]) = 1, qword_1C00A29D8 != a1) )
    BYTE5(v15[3]) = 0;
  HIBYTE(v15[3]) = a5;
  v17 = 0LL;
  v18 = 0uLL;
  v22 = a2;
  v20 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v16[0] = 30;
  v16[1] = 72;
  v21 = 47;
  v24 = v11;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, a4, v10);
  LOBYTE(v12) = 1;
  return SMgrGdiCallout(
           v15,
           a4,
           v12,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v7 != 0),
           v7,
           a6);
}
