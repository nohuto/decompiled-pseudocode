/*
 * XREFs of ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180021DD8
 * Callers:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180021ECC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 * Callees:
 *     ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180005CAC (-IsSplashScreen@CWindowData@@QEBA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

bool __fastcall CWindowData::HasNonTrivialRepresentation(CWindowData *this)
{
  __int64 v1; // rax
  bool v3; // si
  int v4; // ebx
  int SystemMetrics; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // ecx

  v1 = *((_QWORD *)this + 53);
  v3 = v1 != 0;
  if ( v1 )
    return v3;
  if ( CWindowData::IsImmersiveWindow(this) )
    return (*((_BYTE *)this + 600) & 8) == 0 || CWindowData::IsSplashScreen(this);
  if ( !*((_QWORD *)this + 49) )
    return 0;
  v3 = 1;
  if ( (*((_BYTE *)this + 596) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 3) )
      return 0;
  }
  if ( !*((_QWORD *)this + 47) && (*((_BYTE *)this + 597) & 0x10) == 0 && (*((_DWORD *)this + 26) & 0x200000) == 0 )
    return 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) != 0 )
  {
    v4 = *((_DWORD *)this + 47) - *((_DWORD *)this + 45);
    SystemMetrics = GetSystemMetrics(57);
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
    if ( v6 <= SystemMetrics )
    {
      v7 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      v8 = GetSystemMetrics(58);
      v9 = 0;
      if ( v7 >= 0 )
        v9 = v7;
      if ( v9 <= v8 )
        return 0;
    }
  }
  return v3;
}
