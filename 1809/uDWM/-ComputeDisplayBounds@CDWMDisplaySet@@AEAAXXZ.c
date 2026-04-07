/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18002B664
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B7A4 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this)
{
  __int64 i; // r9
  int v3; // r11d
  _DWORD *v4; // r8
  BOOL v5; // r10d
  int v6; // ecx
  BOOL v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *((_DWORD *)this + 4);
    v4 = *(_DWORD **)(*((_QWORD *)this + 5) + 8 * i);
    v5 = *((_DWORD *)this + 6) <= v3 || *((_DWORD *)this + 7) <= *((_DWORD *)this + 5);
    v6 = v4[14];
    v7 = v4[16] <= v6 || v4[17] <= v4[15];
    if ( v5 )
    {
      if ( v7 )
      {
        *((_DWORD *)this + 7) = 0;
        *((_DWORD *)this + 6) = 0;
        *((_DWORD *)this + 5) = 0;
        *((_DWORD *)this + 4) = 0;
      }
      else
      {
        *((_OWORD *)this + 1) = *(_OWORD *)(v4 + 14);
      }
    }
    else if ( !v7 )
    {
      if ( v6 < v3 )
        *((_DWORD *)this + 4) = v6;
      v8 = v4[15];
      if ( v8 < *((_DWORD *)this + 5) )
        *((_DWORD *)this + 5) = v8;
      v9 = v4[16];
      if ( v9 > *((_DWORD *)this + 6) )
        *((_DWORD *)this + 6) = v9;
      v10 = v4[17];
      if ( v10 > *((_DWORD *)this + 7) )
        *((_DWORD *)this + 7) = v10;
    }
  }
}
