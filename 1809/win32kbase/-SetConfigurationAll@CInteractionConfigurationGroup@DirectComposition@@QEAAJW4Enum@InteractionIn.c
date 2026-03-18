/*
 * XREFs of ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C003776C
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C003767C (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0037A60 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0037CA0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(__int64 a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            HIDWORD(v9) = -1;
            *(_DWORD *)(a1 + 12) |= 0x10u;
            LODWORD(v9) = 1;
            *(_QWORD *)(a1 + 88) = v9;
            *(_DWORD *)(a1 + 96) = -805306369;
          }
          else
          {
            return (unsigned int)-1073741811;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 12) |= 1u;
          *(_DWORD *)(a1 + 84) = -805306369;
        }
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
          a1 + 64,
          0LL);
        v9 = 0xFFFFFFFF00000001uLL;
        v10 = -805306369;
        v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a1 + 64,
               &v9,
               0LL);
        if ( v3 >= 0 )
        {
          *(_DWORD *)(a1 + 80) = 0;
          *(_DWORD *)(a1 + 12) |= 2u;
        }
      }
    }
    else
    {
      CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        a1 + 40,
        0LL);
      v9 = 0xFFFFFFFF00000001uLL;
      v10 = -805306369;
      v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a1 + 40,
             &v9,
             0LL);
      if ( v3 >= 0 )
      {
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 12) |= 8u;
      }
    }
  }
  else
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      a1 + 16,
      0LL);
    v9 = 0xFFFFFFFF00000001uLL;
    v10 = -805306369;
    v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a1 + 16,
           &v9,
           0LL);
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 12) |= 4u;
    }
  }
  return (unsigned int)v3;
}
