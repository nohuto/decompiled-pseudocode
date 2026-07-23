/*
 * XREFs of sub_18005575C @ 0x18005575C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_1800557EC @ 0x1800557EC (sub_1800557EC.c)
 */

__int64 __fastcall sub_18005575C(__int64 a1, _DWORD *a2)
{
  char v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // eax

  v3 = a1;
  v4 = sub_1800557EC(a1, LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]);
  v5 = 0;
  if ( !v4 )
    goto LABEL_8;
  v6 = v4 - 1;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( sub_18001AE58() )
      {
        *a2 = 16;
        return v5;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v5;
  }
  LOBYTE(v5) = (v3 & 0xF) == 0;
  *a2 = (v5 ^ 1) + 1;
  return v5;
}
