/*
 * XREFs of DebugInspectSysMemSurface_NoOpt @ 0x18021A740
 * Callers:
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x18021A734 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     IsSolidColorSurface @ 0x18021AEB0 (IsSolidColorSurface.c)
 */

char __fastcall DebugInspectSysMemSurface_NoOpt(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char result; // al
  char v6; // [rsp+30h] [rbp-18h]

  result = byte_180338F50;
  if ( byte_180338F50 )
  {
    v6 = IsSolidColorSurface(a1, a5);
    __debugbreak();
    return v6;
  }
  return result;
}
