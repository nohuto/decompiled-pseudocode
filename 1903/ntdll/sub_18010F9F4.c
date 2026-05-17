/*
 * XREFs of sub_18010F9F4 @ 0x18010F9F4
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_18010EE84 @ 0x18010EE84 (sub_18010EE84.c)
 *     sub_18010F06C @ 0x18010F06C (sub_18010F06C.c)
 */

__int64 __fastcall sub_18010F9F4(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rcx

  v5 = sub_18010EE84((const void **)a1, a2);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    v7 = *(int **)a1;
    if ( **(_DWORD **)a1 == -1073741571 )
    {
      RtlReportException((__int64)v7, *(_QWORD *)(a1 + 8), 3u);
    }
    else
    {
      if ( *v7 <= -1073740022 || *v7 > -1073740018 && *v7 != -1073740016 )
      {
        sub_18010F06C();
        __debugbreak();
      }
      return (unsigned int)-1;
    }
  }
  return v6;
}
