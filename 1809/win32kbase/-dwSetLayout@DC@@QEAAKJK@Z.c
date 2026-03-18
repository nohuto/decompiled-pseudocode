/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00769A0
 * Callers:
 *     GreSetLayout @ 0x1C0076940 (GreSetLayout.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C00A1D84 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::dwSetLayout(DC *this, int a2, int a3)
{
  __int64 v3; // r9
  char v4; // bl
  DC *v5; // r10
  unsigned int v6; // r11d
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp+8h]
  __int64 v17; // [rsp+30h] [rbp+8h]
  __int64 v18; // [rsp+48h] [rbp+20h]

  v3 = *((_QWORD *)this + 122);
  v4 = a3;
  v5 = this;
  v6 = *(_DWORD *)(v3 + 108);
  *(_DWORD *)(v3 + 108) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v6) & 7) != 0 )
  {
    v8 = *((_QWORD *)this + 122);
    v9 = *(_QWORD *)(v8 + 316);
    v10 = *(_QWORD *)(v8 + 324);
    HIDWORD(v16) = HIDWORD(v9);
    HIDWORD(v18) = HIDWORD(v10);
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 104) = 8;
      v8 = *((_QWORD *)v5 + 122);
    }
    LODWORD(v16) = -(int)v9;
    *(_QWORD *)(v8 + 316) = v16;
    LODWORD(v18) = -(int)v10;
    *(_QWORD *)(*((_QWORD *)v5 + 122) + 324LL) = v18;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v5);
    }
    else
    {
      v15 = *((_QWORD *)v5 + 122);
      HIDWORD(v17) = HIDWORD(*(_QWORD *)(v15 + 308));
      LODWORD(v17) = a2 - *(_QWORD *)(v15 + 308);
      *(_QWORD *)(v15 + 308) = v17;
    }
    v11 = *((_QWORD *)v5 + 122);
    if ( (*(_BYTE *)(v11 + 272) & 6) != 6 )
    {
      *(_DWORD *)(v11 + 272) ^= 2u;
      v11 = *((_QWORD *)v5 + 122);
    }
    v12 = *((_DWORD *)v5 + 62);
    v13 = v12 | 4;
    v14 = v12 & 0xFFFFFFFB;
    if ( (*((_DWORD *)v5 + 62) & 4) == 0 )
      v14 = v13;
    *((_DWORD *)v5 + 62) = v14;
    *(_DWORD *)(v11 + 340) |= 0x4090u;
  }
  return v6;
}
