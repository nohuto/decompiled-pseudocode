/*
 * XREFs of ?SetRemarshalingFlags@CParticleBehaviorsMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B5B20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleBehaviorsMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBehaviorsMarshaler *this)
{
  char v2; // si
  int v3; // r8d
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  char v12; // al

  v2 = 0;
  v3 = (*((_QWORD *)this + 7) != 0LL ? 0x80 : 0) | 0x100;
  if ( !*((_QWORD *)this + 8) )
    v3 = *((_QWORD *)this + 7) != 0LL ? 0x80 : 0;
  v4 = v3 | 0x200;
  if ( !*((_QWORD *)this + 9) )
    v4 = v3;
  v5 = v4 | 0x400;
  if ( !*((_QWORD *)this + 10) )
    v5 = v4;
  v6 = v5 | 0x800;
  if ( !*((_QWORD *)this + 11) )
    v6 = v5;
  v7 = v6 | 0x1000;
  if ( !*((_QWORD *)this + 12) )
    v7 = v6;
  v8 = v7 | 0x4000;
  if ( !*((_QWORD *)this + 14) )
    v8 = v7;
  v9 = v8 | 0x8000;
  if ( !*((_QWORD *)this + 15) )
    v9 = v8;
  v10 = v9 | 0x2000;
  if ( !*((_QWORD *)this + 13) )
    v10 = v9;
  v11 = v10 | 0x10000;
  if ( !*((_QWORD *)this + 16) )
    v11 = v10;
  v12 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= v11;
  if ( v11 || v12 )
    return 1;
  return v2;
}
