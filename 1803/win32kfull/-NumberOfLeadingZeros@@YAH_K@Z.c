/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C01B5A94
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01B71A8 (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  bool v4; // zf
  unsigned __int64 v5; // r8
  bool v6; // zf
  unsigned __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  unsigned __int64 v10; // r8
  int v11; // edx
  unsigned __int64 v12; // r9
  int v13; // ecx

  v1 = a1;
  v2 = HIDWORD(a1);
  if ( HIDWORD(a1) )
    v1 = HIDWORD(a1);
  v3 = v1 >> 16;
  v4 = v1 >> 16 == 0;
  if ( !(v1 >> 16) )
    v3 = v1;
  v5 = (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 48;
  if ( v4 )
    v5 = (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 64;
  v6 = v3 >> 8 == 0;
  v7 = v3 >> 8;
  if ( !(v3 >> 8) )
    v7 = v3;
  v8 = v5 - 8;
  if ( v6 )
    v8 = v5;
  v9 = v7 >> 4 == 0;
  v10 = v7 >> 4;
  if ( !(v7 >> 4) )
    v10 = v7;
  v11 = v8 - 4;
  if ( v9 )
    v11 = v8;
  v12 = v10 >> 2;
  if ( !(v10 >> 2) )
    v12 = v10;
  v13 = v11 - 2;
  if ( !(v10 >> 2) )
    v13 = v11;
  if ( v12 < 2 )
    return (unsigned int)(v13 - v12);
  else
    return (unsigned int)(v13 - 2);
}
