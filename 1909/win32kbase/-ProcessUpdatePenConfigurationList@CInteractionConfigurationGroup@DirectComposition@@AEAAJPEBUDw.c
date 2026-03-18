/*
 * XREFs of ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0079F4C
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0079E08 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0079FCC (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v6; // eax
  int v7; // ecx
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v6 = a2[2];
  v7 = a2[3];
  v9[0] = a2[1];
  v9[1] = v6;
  if ( v9[0] > v6 )
    return 3221225485LL;
  v9[2] = v7;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v7,
             a3,
             (unsigned int)v9,
             (int)a1 + 64,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( *a4 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 12) |= 2u;
    }
  }
  return result;
}
