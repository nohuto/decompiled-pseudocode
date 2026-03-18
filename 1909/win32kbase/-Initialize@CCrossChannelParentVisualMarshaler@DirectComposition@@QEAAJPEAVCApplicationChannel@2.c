/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C0001FF4
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0001DAC (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CD44 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0085530 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  int v8; // esi
  __int64 v9; // rax

  v8 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x2000002u;
    v8 = 0;
    *(_DWORD *)(a1 + 88) = 1065353216;
    *(_DWORD *)(a1 + 92) = 1065353216;
    v9 = Win32AllocPoolWithQuotaZInit(0x10uLL);
    if ( v9 )
      *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(a1 + 352) = v9;
    if ( v9 )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 352) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 352) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
