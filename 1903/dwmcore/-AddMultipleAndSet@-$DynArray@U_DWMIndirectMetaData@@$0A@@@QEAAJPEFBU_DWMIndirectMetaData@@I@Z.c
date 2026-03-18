/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x180165184
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801654D0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180165780 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 48, 1, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC3u, 0LL);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 48 * v2);
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  return v5;
}
