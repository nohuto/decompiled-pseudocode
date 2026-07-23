/*
 * XREFs of sub_18010F9F4 @ 0x18010F9F4
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     sub_18010EE84 @ 0x18010EE84 (sub_18010EE84.c)
 *     sub_18010F06C @ 0x18010F06C (sub_18010F06C.c)
 */

__int64 __fastcall sub_18010F9F4(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = sub_18010EE84(a1, a2);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    ExceptionRecord = a1->ExceptionRecord;
    if ( a1->ExceptionRecord->ExceptionCode == -1073741571 )
    {
      RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
    }
    else
    {
      if ( (int)ExceptionRecord->ExceptionCode <= -1073740022
        || (int)ExceptionRecord->ExceptionCode > -1073740018 && ExceptionRecord->ExceptionCode != -1073740016 )
      {
        sub_18010F06C((NTSTATUS **)a1);
        __debugbreak();
      }
      return (unsigned __int32)-1;
    }
  }
  return v6;
}
