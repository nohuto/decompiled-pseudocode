/*
 * XREFs of ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x18036EC40
 * Callers:
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18035D0F8 (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18035D180 (-_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ElementHelpers::GetPointerButtonForMessage(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 >= 0x201 )
  {
    if ( a1 <= 0x202 )
    {
      return 1;
    }
    else if ( a1 > 0x203 )
    {
      if ( a1 <= 0x205 )
      {
        return 2;
      }
      else if ( a1 - 519 <= 1 )
      {
        return 3;
      }
    }
  }
  return v1;
}
