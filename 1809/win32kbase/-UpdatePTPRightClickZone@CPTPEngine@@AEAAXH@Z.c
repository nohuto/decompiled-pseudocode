/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z @ 0x1C015FA7C
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C015CEC0 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::UpdatePTPRightClickZone(CPTPEngine *this)
{
  int v1; // r11d
  unsigned int v3; // edx
  int v4; // edx
  int v5; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  int v13; // r9d

  v1 = 0;
  if ( *((_DWORD *)this + 112) )
  {
    v3 = *((_DWORD *)this + 11) * (100 - *((_DWORD *)this + 110)) / 100;
  }
  else
  {
    v4 = *((_DWORD *)this + 84);
    v5 = *((_DWORD *)this + 11);
    if ( (unsigned int)(v4 - 1) > 0x63 )
    {
      v6 = v5 * (100 - *((_DWORD *)this + 38));
      v7 = v5 - *((_DWORD *)this + 86);
      v3 = v6 / 0x64;
      if ( v6 / 0x64 >= v7 )
        v3 = v7;
    }
    else
    {
      v3 = v5 * (100 - v4) / 0x64u;
    }
  }
  *((_DWORD *)this + 807) = v3;
  v8 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 809) = *((_DWORD *)this + 11);
  if ( *((_DWORD *)this + 112) )
  {
    v9 = v8 * *((_DWORD *)this + 109) / 100;
  }
  else
  {
    v10 = *((_DWORD *)this + 85);
    if ( (unsigned int)(v10 - 1) > 0x63 )
      v10 = *((_DWORD *)this + 39);
    v9 = v8 * v10 / 0x64u;
  }
  *((_DWORD *)this + 816) = v9;
  v11 = *((_DWORD *)this + 816);
  v12 = *((_DWORD *)this + 7);
  if ( !v12 )
    v11 = v8;
  v13 = v8 - *((_DWORD *)this + 816);
  if ( !v12 )
    v1 = v13;
  *((_DWORD *)this + 806) = v1;
  *((_DWORD *)this + 808) = v11;
  *((_DWORD *)this + 824) ^= (*((_DWORD *)this + 824) ^ (*((_DWORD *)this + 7) << 19)) & 0x80000;
}
