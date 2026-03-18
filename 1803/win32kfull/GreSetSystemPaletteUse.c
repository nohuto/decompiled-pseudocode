/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C0287B94
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C010A74C (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C0280500 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdx
  signed __int32 v16; // ecx
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v27[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v29[112]; // [rsp+60h] [rbp-19h] BYREF
  int v30; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v28, a1);
  v5 = v28[0];
  if ( v28[0] )
  {
    v32 = *(_QWORD *)(v28[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v27, (struct PDEVOBJ *)&v32);
    v26 = *(_QWORD *)(v32 + 56);
    GreAcquireSemaphore(v26);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&v32);
    v31 = *(_QWORD *)(v32 + 1800);
    if ( (*(_DWORD *)(v32 + 2164) & 0x100) == 0 )
    {
LABEL_38:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
      SEMOBJ::vUnlock((SEMOBJ *)&v26);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v27);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
      XDCOBJ::vUnlockFast((XDCOBJ *)v28);
      return v3;
    }
    v25 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v31;
    v7 = *(_DWORD *)(v31 + 24) & 0x10000;
    v8 = *(_DWORD *)(v31 + 24) & 0x1000;
    if ( v8 )
    {
      v3 = 2;
    }
    else
    {
      v3 = 3;
      if ( !v7 )
        v3 = 1;
    }
    if ( v2 == 1 )
    {
      if ( v8 || v7 )
      {
        v9 = *(_DWORD *)(v31 + 60) >> 1;
        if ( (unsigned int)v9 > 0xA )
          v9 = 10LL;
        if ( (_DWORD)v9 )
        {
          v10 = 0LL;
          v11 = (unsigned int)v9;
          do
          {
            v12 = *(_QWORD *)(v6 + 112);
            v30 = *(_DWORD *)(v10 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v30) = 48;
            *(_DWORD *)(v10 + v12) = v30;
            v10 += 4LL;
            v6 = v31;
            --v11;
          }
          while ( v11 );
        }
        LODWORD(v13) = *(_DWORD *)(v6 + 28);
        LODWORD(v14) = 20;
        if ( (_DWORD)v9 )
        {
          while ( 1 )
          {
            v14 = (unsigned int)(v14 - 1);
            v13 = (unsigned int)(v13 - 1);
            v15 = *(_QWORD *)(v6 + 112);
            v30 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v14);
            HIBYTE(v30) = 48;
            *(_DWORD *)(v15 + 4 * v13) = v30;
            if ( !--v9 )
              break;
            v6 = v31;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0xFu;
        *(_DWORD *)(v31 + 24) &= 0xFFFEEFFF;
        v16 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v31 + 32) = v16;
        v17 = *(_QWORD *)(v31 + 120);
        if ( v17 != v31 )
          *(_DWORD *)(v17 + 32) = v16;
        v4 = 1;
      }
      goto LABEL_33;
    }
    if ( v2 == 2 )
    {
      v18 = *(_DWORD *)(v31 + 28);
      if ( !v18 )
      {
        v3 = 0;
LABEL_33:
        SEMOBJ::vUnlock((SEMOBJ *)&v25);
        if ( v4 && (*(_DWORD *)(v32 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v32 + 1760) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v32 + 1760))(
              *(_QWORD *)(*(_QWORD *)(v32 + 24) + 1792LL),
              &v31,
              0LL,
              0LL,
              *(_DWORD *)(v31 + 28));
          else
            v3 = 0;
        }
        goto LABEL_38;
      }
      v19 = 1;
      if ( (unsigned int)(v18 - 1) > 1 )
      {
        do
        {
          v20 = v19++;
          *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * v20 + 3) = 0;
          v6 = v31;
        }
        while ( v19 < *(_DWORD *)(v31 + 28) - 1 );
      }
      v21 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v31 + 28); v6 = v31 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v21 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v6 + 24) = v21;
    goto LABEL_33;
  }
  return v3;
}
