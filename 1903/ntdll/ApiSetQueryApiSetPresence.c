/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x180075030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180025600 @ 0x180025600 (sub_180025600.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  PAPI_SET_NAMESPACE ApiSetMap; // rbx
  int v5; // ebx
  unsigned __int16 v6; // cx
  _WORD v8[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  sub_1800255A8(0, (__int64)a1, 0x14D0u);
  v5 = sub_180025600((__int64)ApiSetMap, a1, 0LL, a2, (__int64)v8);
  if ( v5 >= 0 && *a2 )
  {
    if ( v8[0] )
      v6 = 5329;
    else
      v6 = 5330;
  }
  else
  {
    v6 = 5331;
  }
  sub_1800255A8(0, (__int64)a1, v6);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v8[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
