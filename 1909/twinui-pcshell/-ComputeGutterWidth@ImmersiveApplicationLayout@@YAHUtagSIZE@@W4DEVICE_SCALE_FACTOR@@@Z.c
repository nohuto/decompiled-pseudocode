/*
 * XREFs of ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18042E070
 * Callers:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E040 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E118 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterWidth(
        ImmersiveApplicationLayout *this,
        struct tagSIZE a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  LONG cx; // esi
  int v4; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // rax
  int v7; // ecx
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(this);
  cx = a2.cx;
  v4 = (int)this;
  v5 = a2.cx * (IsPPIEdition() ? 28 : 20) / 100;
  if ( !IsPPIEdition() )
  {
    v6 = &unk_180532C98;
    v7 = 0;
    while ( v4 != *(v6 - 2) || *((_BYTE *)v6 - 4) && v9 != *v6 || cx != v6[1] )
    {
      ++v7;
      v6 += 6;
      if ( v7 )
        return v5;
    }
    return (unsigned int)(cx * v6[2] / 100);
  }
  return v5;
}
