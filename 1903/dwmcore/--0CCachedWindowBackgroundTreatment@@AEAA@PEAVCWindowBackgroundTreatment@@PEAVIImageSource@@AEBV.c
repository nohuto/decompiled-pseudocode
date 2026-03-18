/*
 * XREFs of ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004B5C
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800049F8 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 v9; // xmm1_8
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCachedWindowBackgroundTreatment::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 24) = a3;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef();
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a4 + 64);
  *(_BYTE *)(a1 + 140) = 0;
  v9 = *(_QWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)a5;
  *(_QWORD *)(a1 + 116) = v9;
  result = a1;
  *(_OWORD *)(a1 + 124) = *a6;
  return result;
}
