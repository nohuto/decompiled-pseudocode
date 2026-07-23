/*
 * XREFs of sub_18010FA78 @ 0x18010FA78
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_18010EE84 @ 0x18010EE84 (sub_18010EE84.c)
 *     sub_18010F06C @ 0x18010F06C (sub_18010F06C.c)
 */

__int64 __fastcall sub_18010FA78(_EXCEPTION_POINTERS *a1, _DWORD *a2)
{
  unsigned __int32 v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = sub_18010EE84(a1, (__int64)a2);
    if ( v2 == 1 )
    {
      if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
      {
        sub_18010F06C((NTSTATUS **)a1);
        __debugbreak();
      }
      RtlReportException(a1->ExceptionRecord, a1->ContextRecord, 3u);
    }
  }
  return v2;
}
