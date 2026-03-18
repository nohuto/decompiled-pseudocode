/*
 * XREFs of sfac_GetSbitComponentInfo @ 0x1C02BFF98
 * Callers:
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitComponentInfo(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, v11);
  if ( !(_DWORD)result )
  {
    v10 = 4 * (unsigned int)a2 + 2 + v11[0];
    *a5 = __ROR2__(*(_WORD *)v10, 8);
    *a6 = *(unsigned __int8 *)(v10 + 2);
    *a7 = *(unsigned __int8 *)(v10 + 3);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
