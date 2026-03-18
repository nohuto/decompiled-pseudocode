/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C00EE010
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EE430 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EE4C0 (DxEngSetPaletteState.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00EE53C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0164BEC (--1MDCOBJA@@QEAA@XZ.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0273D70 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  HSURF Bitmap; // rdi
  ULONG64 v2; // rax
  __int64 v3; // r8
  ULONG *v4; // r13
  ULONG v5; // r12d
  FLONG flGreen; // r14d
  FLONG flBlue; // ebx
  int v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // eax
  HANDLE v11; // r15
  int v12; // r8d
  FLONG v13; // r9d
  ULONG v14; // esi
  HPALETTE Palette; // rax
  HPALETTE v16; // rbx
  SIZE_T v17; // r14
  SURFOBJ *v18; // rax
  SURFOBJ *v19; // rsi
  __int64 v20; // rax
  __int64 DisplayDC; // rax
  __int64 v22; // rsi
  unsigned int v23; // edi
  ULONG64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rdx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  _OWORD *v29; // rdx
  _OWORD *v30; // rax
  __int64 v31; // rcx
  DYNAMICMODECHANGESHARELOCK *v32; // rcx
  char v33[8]; // [rsp+30h] [rbp-4C8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4C0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-4B8h]
  HSURF hsurf; // [rsp+48h] [rbp-4B0h]
  unsigned int v37; // [rsp+50h] [rbp-4A8h]
  __int64 v38; // [rsp+58h] [rbp-4A0h]
  SIZEL sizl; // [rsp+60h] [rbp-498h]
  ULONG64 v40; // [rsp+68h] [rbp-490h]
  _QWORD v41[2]; // [rsp+70h] [rbp-488h] BYREF
  volatile void *Address[2]; // [rsp+80h] [rbp-478h]
  LONG lWidth[4]; // [rsp+90h] [rbp-468h]
  __int128 v44; // [rsp+A0h] [rbp-458h]
  __int64 v45; // [rsp+B0h] [rbp-448h]
  HANDLE v46; // [rsp+B8h] [rbp-440h]
  _BYTE v47[1024]; // [rsp+C0h] [rbp-438h] BYREF

  v40 = a1;
  v38 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)lWidth = *(_OWORD *)(v2 + 16);
  v44 = *(_OWORD *)(v2 + 32);
  v45 = *(_QWORD *)(v2 + 48);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v3 = (unsigned int)lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    return 3221225485LL;
  cColors[0] = 0;
  v4 = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    v5 = 5;
    goto LABEL_9;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    v5 = 6;
LABEL_9:
    flGreen = 65280;
    flBlue = 255;
    v8 = 16711680;
    goto LABEL_10;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    v8 = 63488;
    flBlue = 31;
    v5 = 4;
    flGreen = 2016;
    goto LABEL_10;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    v8 = 31744;
    flBlue = 31;
    v5 = 4;
    flGreen = 992;
    goto LABEL_10;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v5 = 3;
  v29 = (_OWORD *)v44;
  if ( (_QWORD)v44 )
  {
    if ( (__int64)v44 + 1024 < (unsigned __int64)v44 || (__int64)v44 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v30 = v47;
    v31 = 8LL;
    do
    {
      *v30 = *v29;
      v30[1] = v29[1];
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v30[5] = v29[5];
      v30[6] = v29[6];
      v30 += 8;
      *(v30 - 1) = v29[7];
      v29 += 8;
      --v31;
    }
    while ( v31 );
    v4 = (ULONG *)v47;
  }
  else
  {
    v4 = (ULONG *)&unk_1C02EFC20;
  }
  cColors[0] = 256;
  v8 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_10:
  v9 = v3 * (unsigned int)lWidth[1];
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = v3 * lWidth[1];
  LODWORD(Length) = v10;
  v37 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v11 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v46 = v11;
  if ( !v11 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  MDCOBJA::MDCOBJA((MDCOBJA *)v41, *(HDC *)&lWidth[2], v12);
  if ( !v41[0] )
  {
    MmUnsecureVirtualMemory(v11);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v41);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v32);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v41[0] + 48LL);
  v13 = v8;
  v14 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors[0], v4, v13, flGreen, flBlue);
  v16 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( !Palette )
    goto LABEL_47;
  v17 = Length;
  if ( v14 == 256 && !v4 )
    DxEngSyncPaletteTableWithDevice(Palette);
  Bitmap = (HSURF)EngCreateBitmap(sizl, lWidth[1], v5, 1u, (PVOID)Address[0]);
  hsurf = Bitmap;
  DxEngSetPaletteState(v16);
  if ( Bitmap && (v18 = EngLockSurface(Bitmap), (v19 = v18) != 0LL) )
  {
    DxEngSelectPaletteToSurface(v18, v16);
    v20 = SURFOBJ_TO_SURFACE(v19);
    *(_QWORD *)(v20 + 224) = v11;
    *(_DWORD *)(v20 + 112) |= 0x104200u;
    EngUnlockSurface(v19);
    DisplayDC = GreCreateDisplayDC(v17, 1LL, 0LL);
    v22 = DisplayDC;
    v38 = DisplayDC;
    if ( DisplayDC )
    {
      hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL);
      GreSetBitmapOwner(Bitmap, 2147483650LL);
    }
  }
  else
  {
LABEL_47:
    v22 = 0LL;
  }
  if ( v22 )
  {
    v23 = v37;
  }
  else
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v11);
    }
    v23 = -1073741801;
  }
  v24 = v40;
  v25 = (_QWORD *)(v40 + 40);
  if ( v40 + 40 >= MmUserProbeAddress )
    v25 = (_QWORD *)MmUserProbeAddress;
  *v25 = v38;
  v26 = (_QWORD *)(v24 + 48);
  if ( v24 + 48 >= MmUserProbeAddress )
    v26 = (_QWORD *)MmUserProbeAddress;
  *v26 = hsurf;
  if ( v16 )
    EngDeletePalette(v16);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v41);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
  return v23;
}
