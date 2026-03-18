/*
 * XREFs of DebugInspectSysMemSurface_NoOpt @ 0x1801E168C
 * Callers:
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801E1680 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     IsSolidColorSurface @ 0x1801E1BE4 (IsSolidColorSurface.c)
 */

char __fastcall DebugInspectSysMemSurface_NoOpt(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char result; // al
  char v6; // [rsp+30h] [rbp-18h]

  result = byte_1803076E8;
  if ( byte_1803076E8 )
  {
    v6 = IsSolidColorSurface(a1, a5);
    __debugbreak();
    return v6;
  }
  return result;
}
