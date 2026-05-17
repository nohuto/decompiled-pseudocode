/*
 * XREFs of sub_18002891C @ 0x18002891C
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 *     sub_180076994 @ 0x180076994 (sub_180076994.c)
 *     sub_180077094 @ 0x180077094 (sub_180077094.c)
 *     sub_18007F850 @ 0x18007F850 (sub_18007F850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002891C(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ecx

  v1 = *a1;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 >= 2u && (*v2 == 92 || *v2 == 47) )
  {
    result = 4LL;
    if ( v1 >= 4u && (v2[1] == 92 || v2[1] == 47) )
    {
      result = 6LL;
      if ( v1 >= 6u && (v2[2] == 46 || v2[2] == 63) )
      {
        if ( v1 < 8u || v2[3] != 92 && v2[3] != 47 )
        {
          v4 = 1;
          if ( v1 == 6 )
            return 7;
          return v4;
        }
      }
      else
      {
        return 1LL;
      }
    }
  }
  else if ( v1 >= 4u && *v2 && v2[1] == 58 )
  {
    if ( v1 >= 6u && (v2[2] == 92 || v2[2] == 47) )
      return 2LL;
    else
      return 3LL;
  }
  else
  {
    return 5LL;
  }
  return result;
}
