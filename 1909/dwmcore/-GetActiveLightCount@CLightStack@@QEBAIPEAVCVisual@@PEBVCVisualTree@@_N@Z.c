/*
 * XREFs of ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x180178820
 * Callers:
 *     ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x18016E214 (-GetActiveLightCount@CDrawingContext@@QEBAIXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x1801788A0 (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 */

__int64 __fastcall CLightStack::GetActiveLightCount(
        CLightStack *this,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        int a4)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+54h] [rbp-34h]
  unsigned int v9; // [rsp+58h] [rbp-30h]
  _BYTE v10[24]; // [rsp+60h] [rbp-28h] BYREF

  v6[0] = v10;
  v6[1] = v10;
  v9 = 0;
  v7 = 3;
  v8 = 3;
  CLightStack::GetDestLightsArray((_DWORD)this, (_DWORD)a2, (_DWORD)a3, a4, a4, (__int64)v6, 0LL);
  v4 = v9;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v6);
  return v4;
}
