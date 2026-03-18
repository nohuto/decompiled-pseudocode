/*
 * XREFs of _lambda_e7ca8b971ae1a22ae980baf136bd7096_::operator() @ 0x1C02340C8
 * Callers:
 *     _lambda_e7ca8b971ae1a22ae980baf136bd7096_::_lambda_invoker_cdecl_ @ 0x1C0233C60 (_lambda_e7ca8b971ae1a22ae980baf136bd7096_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C004B808 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall lambda_e7ca8b971ae1a22ae980baf136bd7096_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  struct _LUID *v5; // rdx
  int v6; // r9d
  unsigned int v7; // eax
  void *v8; // rbx
  int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  char v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v12 = a2;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( (*(_DWORD *)(a2 + 308) & 0x100) != 0
    && !*(_BYTE *)(a2 + 2465)
    && *(_DWORD *)(a2 + 176) == 1
    && DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)a2, v5, (unsigned int *)&v14, 0LL) )
  {
    v7 = *a3;
    if ( (_DWORD)v14 == *a3 )
    {
      LODWORD(v14) = v6 & v14;
      HIDWORD(v14) &= v6;
      DxgkLogCodePointPacketForSession(0x71u, v7, *(_DWORD *)(a2 + 280), *(_DWORD *)(a2 + 276), v6 & v10, v14);
      v8 = *(void **)(a2 + 192);
      ObfReferenceObject(v8);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
      DxgkInvalidateDeviceState((__int64)v8);
      ObfDereferenceObject(v8);
    }
  }
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return 0LL;
}
