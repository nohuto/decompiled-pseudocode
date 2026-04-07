/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180013584
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180013550 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x18003C210 (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  char v2; // si
  int v3; // ebx
  int SystemMetrics; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx

  if ( *((_QWORD *)this + 54) )
    return 1;
  if ( CWindowData::IsImmersiveWindow(this) )
    return (*((_BYTE *)this + 608) & 8) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 50) )
    return 0;
  v2 = 1;
  if ( (*((_BYTE *)this + 604) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( !*((_QWORD *)this + 48) && (*((_BYTE *)this + 605) & 0x10) == 0 && (*((_DWORD *)this + 26) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) != 0 )
  {
    v3 = *((_DWORD *)this + 47) - *((_DWORD *)this + 45);
    SystemMetrics = GetSystemMetrics(57);
    v5 = 0;
    if ( v3 >= 0 )
      v5 = v3;
    if ( v5 <= SystemMetrics )
    {
      v6 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      v7 = GetSystemMetrics(58);
      v8 = 0;
      if ( v6 >= 0 )
        v8 = v6;
      if ( v8 <= v7 )
        return 0;
    }
  }
  return v2;
}
