/*
 * XREFs of ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18003AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x18003B080 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800BC278 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::AddAntiOccluderRect(
        __int64 a1,
        __int128 *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  __int128 v4; // xmm0
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+44h] [rbp-24h]

  v4 = *a2;
  v11 = a3;
  v12 = v4;
  CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)v10, a4);
  v6 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(a1 + 416, v10);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x56u, 0LL);
  return v8;
}
