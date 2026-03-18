/*
 * XREFs of Controller_PopulateInternalDeviceFlags @ 0x1C0061524
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall Controller_PopulateInternalDeviceFlags(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // r8
  __int16 result; // ax

  *(_QWORD *)(a1 + 352) = 0LL;
  v1 = 0LL;
  v2 = *(_WORD *)(a1 + 248);
  if ( v2 == 7027 )
  {
    result = *(_WORD *)(a1 + 252);
    if ( result == 4105 )
    {
      *(_QWORD *)(a1 + 352) = 2LL;
      return result;
    }
    v1 = 0LL;
    if ( result == 4352 && *(_BYTE *)(a1 + 256) == 16 )
    {
      v1 = 1LL;
      *(_QWORD *)(a1 + 352) = 1LL;
    }
  }
  if ( v2 == 7023 )
  {
    result = 28707;
    if ( *(_WORD *)(a1 + 252) != 28707 )
      return result;
    v1 |= 0xCuLL;
    *(_QWORD *)(a1 + 352) = v1;
  }
  result = 6945;
  if ( v2 == 6945 )
  {
    result = *(_WORD *)(a1 + 252) - 4160;
    if ( (unsigned __int16)result <= 2u )
      *(_QWORD *)(a1 + 352) = v1 | 0x10;
  }
  return result;
}
