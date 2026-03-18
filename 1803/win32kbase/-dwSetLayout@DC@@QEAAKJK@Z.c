/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0025670
 * Callers:
 *     GreSetLayout @ 0x1C0064810 (GreSetLayout.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0072C18 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
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
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h]
  __int64 v16; // [rsp+30h] [rbp+8h]
  __int64 v17; // [rsp+48h] [rbp+20h]

  v3 = *((_QWORD *)this + 10);
  v4 = a3;
  v5 = this;
  v6 = *(_DWORD *)(v3 + 312);
  *(_DWORD *)(v3 + 312) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v6) & 7) != 0 )
  {
    v8 = *((_QWORD *)this + 10);
    v9 = *(_QWORD *)(v8 + 328);
    v10 = *(_QWORD *)(v8 + 336);
    HIDWORD(v15) = HIDWORD(v9);
    HIDWORD(v17) = HIDWORD(v10);
    if ( (v4 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 308) = 8;
      v8 = *((_QWORD *)v5 + 10);
    }
    LODWORD(v15) = -(int)v9;
    *(_QWORD *)(v8 + 328) = v15;
    LODWORD(v17) = -(int)v10;
    *(_QWORD *)(*((_QWORD *)v5 + 10) + 336LL) = v17;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v5);
    }
    else
    {
      v14 = *((_QWORD *)v5 + 10);
      HIDWORD(v16) = HIDWORD(*(_QWORD *)(v14 + 320));
      LODWORD(v16) = a2 - *(_QWORD *)(v14 + 320);
      *(_QWORD *)(v14 + 320) = v16;
    }
    v11 = *((_QWORD *)v5 + 10);
    if ( (*(_BYTE *)(v11 + 152) & 6) != 6 )
    {
      *(_DWORD *)(v11 + 152) ^= 2u;
      v11 = *((_QWORD *)v5 + 10);
    }
    v12 = *((_DWORD *)v5 + 64);
    if ( (v12 & 4) != 0 )
      v13 = v12 & 0xFFFFFFFB;
    else
      v13 = v12 | 4;
    *((_DWORD *)v5 + 64) = v13;
    *(_DWORD *)(v11 + 352) |= 0x4090u;
  }
  return v6;
}
