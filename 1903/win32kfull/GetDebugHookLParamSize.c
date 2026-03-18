/*
 * XREFs of GetDebugHookLParamSize @ 0x1C021520C
 * Callers:
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C02295B8 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDebugHookLParamSize(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        return 40;
      case 0xAuLL:
        if ( *(_DWORD *)(a2 + 24) != 5 )
          return v2;
        return 16;
      case 0xCuLL:
        return 40;
    }
    if ( a1 != -1LL )
      return v2;
    return 48;
  }
  if ( a1 == 6 )
    return 48;
  if ( a1 <= 1 )
    return 24;
  if ( a1 == 3 )
    return 48;
  if ( a1 == 4 )
    return 32;
  if ( a1 != 5 )
    return v2;
  v3 = *(_DWORD *)(a2 + 24);
  if ( !v3 )
    return 16;
  v4 = v3 - 3;
  if ( !v4 )
    return 16;
  v5 = v4 - 2;
  if ( !v5 )
    return 16;
  if ( v5 == 1 )
    return 40;
  return v2;
}
