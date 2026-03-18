/*
 * XREFs of ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C01A5FBC
 * Callers:
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01A6630 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01A646C (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<InjectManipulationArgs>::Add(__int64 a1, _OWORD *a2)
{
  int v2; // ebx
  _OWORD *v5; // rdx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v2 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1), v2 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      v2 = -1073741823;
    if ( v2 >= 0 )
    {
      v5 = Win32AllocPoolZInit(0x80uLL, 1685275460LL);
      if ( !v5 )
        v2 = -1073741801;
      if ( v2 >= 0 )
      {
        *v5 = *a2;
        v5[1] = a2[1];
        v5[2] = a2[2];
        v5[3] = a2[3];
        v5[4] = a2[4];
        v5[5] = a2[5];
        v5[6] = a2[6];
        v5[7] = a2[7];
        *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = v5;
      }
    }
  }
  return (unsigned int)v2;
}
