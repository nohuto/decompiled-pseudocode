/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0008900
 * Callers:
 *     <none>
 * Callees:
 *     DxEngSelectPaletteToSurface @ 0x1C0008DF0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0008E70 (DxEngSetPaletteState.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0009328 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0139274 (--1MDCOBJA@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02427B0 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  HSURF Bitmap; // rdi
  ULONG64 v2; // rax
  __int64 v3; // r8
  ULONG *v4; // r13
  _OWORD *v5; // rdx
  ULONG *v6; // rax
  __int64 v7; // rcx
  int v8; // esi
  FLONG flGreen; // r14d
  FLONG flBlue; // ebx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r12d
  HANDLE v14; // r15
  int v15; // r8d
  FLONG v16; // r9d
  ULONG v17; // esi
  HPALETTE Palette; // rax
  HPALETTE v19; // rbx
  SIZE_T v20; // r14
  SURFOBJ *v21; // rax
  SURFOBJ *v22; // rsi
  __int64 v23; // rax
  __int64 DisplayDC; // rax
  __int64 v25; // rsi
  ULONG64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  DYNAMICMODECHANGESHARELOCK *v29; // rcx
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  ULONG iFormat; // [rsp+30h] [rbp-4C8h]
  char v33[4]; // [rsp+34h] [rbp-4C4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4C0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-4B8h]
  HSURF hsurf; // [rsp+48h] [rbp-4B0h]
  __int64 v37; // [rsp+50h] [rbp-4A8h]
  SIZEL sizl; // [rsp+58h] [rbp-4A0h]
  ULONG64 v39; // [rsp+60h] [rbp-498h]
  _QWORD v40[2]; // [rsp+68h] [rbp-490h] BYREF
  volatile void *Address[2]; // [rsp+78h] [rbp-480h]
  LONG lWidth[4]; // [rsp+88h] [rbp-470h]
  __int128 v43; // [rsp+98h] [rbp-460h]
  __int64 v44; // [rsp+A8h] [rbp-450h]
  HANDLE v45; // [rsp+B0h] [rbp-448h]
  ULONG pulColors[256]; // [rsp+C0h] [rbp-438h] BYREF

  v39 = a1;
  v37 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)lWidth = *(_OWORD *)(v2 + 16);
  v43 = *(_OWORD *)(v2 + 32);
  v44 = *(_QWORD *)(v2 + 48);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v3 = (unsigned int)lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    return 3221225485LL;
  cColors[0] = 0;
  v4 = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    iFormat = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    iFormat = 6;
LABEL_24:
    flGreen = 65280;
    flBlue = 255;
    v8 = 16711680;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    iFormat = 4;
    v8 = 63488;
    flBlue = 31;
    flGreen = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    iFormat = 4;
    v8 = 31744;
    flBlue = 31;
    flGreen = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  iFormat = 3;
  v5 = (_OWORD *)v43;
  if ( (_QWORD)v43 )
  {
    if ( (__int64)v43 + 1024 < (unsigned __int64)v43 || (__int64)v43 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v6 = pulColors;
    v7 = 8LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    v4 = pulColors;
  }
  else
  {
    v4 = (ULONG *)&unk_1C02DA530;
  }
  cColors[0] = 256;
  v8 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_25:
  v11 = v3 * (unsigned int)lWidth[1];
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v3 * lWidth[1];
  LODWORD(Length) = v12;
  v13 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v14 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v45 = v14;
  if ( !v14 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  MDCOBJA::MDCOBJA((MDCOBJA *)v40, *(HDC *)&lWidth[2], v15);
  if ( !v40[0] )
  {
    MmUnsecureVirtualMemory(v14);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v40);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v40[0] + 48LL);
  v16 = v8;
  v17 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(iFormat > 3) + 1, cColors[0], v4, v16, flGreen, flBlue);
  v19 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( !Palette )
    goto LABEL_38;
  v20 = Length;
  if ( v17 == 256 && !v4 )
    DxEngSyncPaletteTableWithDevice(Palette);
  Bitmap = (HSURF)EngCreateBitmap(sizl, lWidth[1], iFormat, 1u, (PVOID)Address[0]);
  hsurf = Bitmap;
  DxEngSetPaletteState(v19);
  if ( Bitmap && (v21 = EngLockSurface(Bitmap), (v22 = v21) != 0LL) )
  {
    DxEngSelectPaletteToSurface(v21, v19);
    v23 = SURFOBJ_TO_SURFACE(v22);
    *(_QWORD *)(v23 + 224) = v14;
    *(_DWORD *)(v23 + 112) |= 0x104200u;
    EngUnlockSurface(v22);
    DisplayDC = GreCreateDisplayDC(v20, 1LL, 0LL);
    v25 = DisplayDC;
    v37 = DisplayDC;
    if ( DisplayDC )
    {
      hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL);
      GreSetBitmapOwner(Bitmap, 2147483650LL);
    }
  }
  else
  {
LABEL_38:
    v25 = 0LL;
  }
  if ( !v25 )
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v14);
    }
    v13 = -1073741801;
  }
  v26 = v39;
  v27 = (_QWORD *)(v39 + 40);
  if ( v39 + 40 >= MmUserProbeAddress )
    v27 = (_QWORD *)MmUserProbeAddress;
  *v27 = v37;
  v28 = (_QWORD *)(v26 + 48);
  if ( v26 + 48 >= MmUserProbeAddress )
    v28 = (_QWORD *)MmUserProbeAddress;
  *v28 = hsurf;
  if ( v19 )
    EngDeletePalette(v19);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v40);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v29);
  return v13;
}
