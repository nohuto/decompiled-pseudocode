/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NPEAUIDXGIResource@@@Z @ 0x180164800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::UseForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this, struct IDXGIResource *a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 66)
      && g_bUseDwmSwapChainForAdvancedDirectFlipRestoreBuffer
      && (*((_BYTE *)this + 156) & 0x10) != 0 )
    {
      *((_DWORD *)this + 136) = 0;
      result = 1;
      *((_QWORD *)this + 66) = a2;
    }
  }
  else
  {
    *((_QWORD *)this + 66) = 0LL;
  }
  return result;
}
