/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0011920
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00118D8 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0011F50 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0011FE0 (DxEngSetPaletteState.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C015F10C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025A464 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025A4C8 (DxEngSyncPaletteTableWithDevice.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  HSURF v1; // rbx
  ULONG64 v2; // rax
  __int64 v3; // r8
  ULONG *v4; // r12
  unsigned int v5; // r13d
  _OWORD *v6; // rdx
  ULONG *v7; // rax
  __int64 v8; // rcx
  int v9; // r14d
  FLONG flGreen; // r15d
  FLONG flBlue; // esi
  unsigned __int64 v12; // rcx
  int v13; // eax
  HANDLE v14; // rax
  void *v15; // rdi
  FLONG v16; // r9d
  ULONG v17; // r14d
  HPALETTE Palette; // rax
  HPALETTE v19; // rsi
  bool v20; // zf
  SIZE_T v21; // r12
  __int64 LockedBitmap; // rax
  SURFOBJ *v23; // r14
  int v24; // r15d
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  __int64 DisplayDC; // rax
  unsigned int v27; // ebx
  ULONG64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  char v34; // [rsp+30h] [rbp-4F8h] BYREF
  char v35[7]; // [rsp+31h] [rbp-4F7h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4F0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-4E8h]
  HSURF hsurf; // [rsp+48h] [rbp-4E0h]
  unsigned int v39; // [rsp+50h] [rbp-4D8h]
  __int64 v40; // [rsp+58h] [rbp-4D0h]
  unsigned __int64 v41; // [rsp+60h] [rbp-4C8h]
  __int64 v42; // [rsp+68h] [rbp-4C0h]
  volatile void *Address[2]; // [rsp+70h] [rbp-4B8h]
  HDC v44[2]; // [rsp+80h] [rbp-4A8h]
  __int128 v45; // [rsp+90h] [rbp-498h]
  __int64 v46; // [rsp+A0h] [rbp-488h]
  HANDLE v47; // [rsp+A8h] [rbp-480h]
  ULONG64 v48; // [rsp+B0h] [rbp-478h]
  _QWORD v49[2]; // [rsp+B8h] [rbp-470h] BYREF
  _BYTE v50[32]; // [rsp+C8h] [rbp-460h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-440h]
  ULONG pulColors[256]; // [rsp+F0h] [rbp-438h] BYREF

  v48 = a1;
  v42 = 0LL;
  v40 = 0LL;
  v1 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v2;
  *(_OWORD *)v44 = *(_OWORD *)(v2 + 16);
  v45 = *(_OWORD *)(v2 + 32);
  v46 = *(_QWORD *)(v2 + 48);
  v41 = __PAIR64__((unsigned int)v44[0], HIDWORD(Address[1]));
  v3 = LODWORD(v44[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v44[0]) <= 0 )
    return 3221225485LL;
  cColors[0] = 0;
  v4 = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    v5 = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    v5 = 6;
LABEL_24:
    flGreen = 65280;
    v9 = 16711680;
    flBlue = 255;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    flBlue = 31;
    v5 = 4;
    v9 = 63488;
    flGreen = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    flBlue = 31;
    v5 = 4;
    v9 = 31744;
    flGreen = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v5 = 3;
  v6 = (_OWORD *)v45;
  if ( (_QWORD)v45 )
  {
    if ( (__int64)v45 + 1024 < (unsigned __int64)v45 || (__int64)v45 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = pulColors;
    v8 = 8LL;
    do
    {
      *(_OWORD *)v7 = *v6;
      *((_OWORD *)v7 + 1) = v6[1];
      *((_OWORD *)v7 + 2) = v6[2];
      *((_OWORD *)v7 + 3) = v6[3];
      *((_OWORD *)v7 + 4) = v6[4];
      *((_OWORD *)v7 + 5) = v6[5];
      *((_OWORD *)v7 + 6) = v6[6];
      v7 += 32;
      *((_OWORD *)v7 - 1) = v6[7];
      v6 += 8;
      --v8;
    }
    while ( v8 );
    v4 = pulColors;
  }
  else
  {
    v4 = (ULONG *)&unk_1C02CB050;
  }
  cColors[0] = 256;
  v9 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_25:
  v12 = v3 * HIDWORD(v44[0]);
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v3 * HIDWORD(v44[0]);
  LODWORD(Length) = v13;
  v39 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v14 = (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails)
      ? (HANDLE)GrepSecureVirtualMemory(Address[0], Length, 4LL)
      : MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v47 = v14;
  v15 = v14;
  if ( !v14 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v34);
  MDCOBJA::MDCOBJA((MDCOBJA *)v49, v44[1]);
  if ( !v49[0] )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v15);
    else
      MmUnsecureVirtualMemory(v15);
    XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v49);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v49[0] + 48LL);
  v16 = v9;
  v17 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors[0], v4, v16, flGreen, flBlue);
  v19 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( Palette )
  {
    if ( v17 == 256 )
    {
      v20 = v4 == 0LL;
      v21 = Length;
      if ( v20 )
        DxEngSyncPaletteTableWithDevice(Palette);
    }
    else
    {
      v21 = Length;
    }
    LockedBitmap = EngCreateLockedBitmap(v41, HIDWORD(v44[0]), v5, 1LL, Address[0]);
    v23 = (SURFOBJ *)LockedBitmap;
    if ( LockedBitmap )
      v1 = *(HSURF *)(LockedBitmap + 8);
    else
      v1 = 0LL;
    hsurf = v1;
    DxEngSetPaletteState(v19);
    if ( v1 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
      SURFREF::SURFREF((SURFREF *)v50);
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v50, v1);
      v24 = SURFREF::bValid((SURFREF *)v50);
      if ( v24 )
      {
        DxEngSelectPaletteToSurface(v51 + 24, v19);
        *(_QWORD *)(v51 + 224) = v15;
        *(_DWORD *)(v51 + 112) |= 0x100000u;
        *(_DWORD *)(v51 + 112) |= 0x4000u;
        *(_DWORD *)(v51 + 112) |= 0x200u;
      }
      SURFREF::~SURFREF((SURFREF *)v50);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
      if ( v24 )
      {
        DisplayDC = GreCreateDisplayDC(v21, 1LL);
        v42 = DisplayDC;
        v40 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v1, 0LL, 1LL);
          GreSetBitmapOwner(v1, 2147483650LL);
        }
      }
      EngUnlockSurface(v23);
    }
  }
  if ( v42 )
  {
    v27 = v39;
  }
  else
  {
    if ( v1 )
    {
      EngDeleteSurface(v1);
      hsurf = 0LL;
    }
    else if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
    {
      GrepUnsecureVirtualMemory(v15);
    }
    else
    {
      MmUnsecureVirtualMemory(v15);
    }
    v27 = -1073741801;
  }
  v28 = v48;
  v29 = (_QWORD *)(v48 + 40);
  if ( v48 + 40 >= MmUserProbeAddress )
    v29 = (_QWORD *)MmUserProbeAddress;
  *v29 = v40;
  v30 = (_QWORD *)(v28 + 48);
  if ( v28 + 48 >= MmUserProbeAddress )
    v30 = (_QWORD *)MmUserProbeAddress;
  *v30 = hsurf;
  if ( v19 )
    EngDeletePalette(v19);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v49);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  return v27;
}
