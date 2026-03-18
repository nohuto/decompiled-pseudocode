/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B06BC
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0136858 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02A9240 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  signed __int32 v18; // ecx
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  _QWORD v27[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v31; // [rsp+60h] [rbp-19h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h]
  int v33; // [rsp+78h] [rbp-1h]
  __int64 v34; // [rsp+80h] [rbp+7h] BYREF
  int v35; // [rsp+88h] [rbp+Fh]
  int v36; // [rsp+8Ch] [rbp+13h]
  __int16 v37; // [rsp+90h] [rbp+17h]
  __int64 v38; // [rsp+98h] [rbp+1Fh]
  __int64 v39; // [rsp+A0h] [rbp+27h]
  int v40; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v42; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( v27[0] )
  {
    v42 = *(_QWORD *)(v27[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v40);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v42);
    v29 = *(_QWORD *)(v42 + 64);
    GreAcquireSemaphore(v29);
    v35 = 0;
    v36 = 0;
    v39 = 0LL;
    v38 = 0LL;
    v34 = 0LL;
    v5 = v42;
    v37 = 256;
    v31 = 0LL;
    v33 = 1;
    if ( (*(_DWORD *)(v42 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v31 = *(_QWORD *)(v42 + 48);
      v32 = v42;
      GreAcquireSemaphore(v31);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v31, 11LL);
      v5 = v42;
    }
    v41 = *(_QWORD *)(v5 + 1808);
    if ( (*(_DWORD *)(v5 + 2172) & 0x100) == 0 )
      goto LABEL_39;
    v28 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v41;
    v7 = *(_DWORD *)(v41 + 24);
    v8 = v7;
    v9 = v7 & 0x1000;
    if ( (v7 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v7 & 0x10000 | 0x8000u) >> 15;
    v10 = v8 & 0x10000;
    if ( v2 == 1 )
    {
      if ( v9 || v10 )
      {
        v11 = *(_DWORD *)(v41 + 60) >> 1;
        if ( (unsigned int)v11 > 0xA )
          v11 = 10LL;
        if ( (_DWORD)v11 )
        {
          v12 = 0LL;
          v13 = (unsigned int)v11;
          do
          {
            v14 = *(_QWORD *)(v6 + 112);
            v40 = *(_DWORD *)(v12 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v40) = 48;
            *(_DWORD *)(v12 + v14) = v40;
            v12 += 4LL;
            v6 = v41;
            --v13;
          }
          while ( v13 );
        }
        LODWORD(v15) = *(_DWORD *)(v6 + 28);
        LODWORD(v16) = 20;
        if ( (_DWORD)v11 )
        {
          while ( 1 )
          {
            v16 = (unsigned int)(v16 - 1);
            v15 = (unsigned int)(v15 - 1);
            v17 = *(_QWORD *)(v6 + 112);
            v40 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v16);
            HIBYTE(v40) = 48;
            *(_DWORD *)(v17 + 4 * v15) = v40;
            if ( !--v11 )
              break;
            v6 = v41;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v27[0] + 976LL) + 152LL) |= 0xFu;
        *(_DWORD *)(v41 + 24) &= 0xFFFEEFFF;
        v18 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v41 + 32) = v18;
        v19 = *(_QWORD *)(v41 + 120);
        if ( v19 != v41 )
          *(_DWORD *)(v19 + 32) = v18;
        v4 = 1;
      }
      goto LABEL_34;
    }
    if ( v2 == 2 )
    {
      v20 = *(_DWORD *)(v41 + 28);
      if ( !v20 )
      {
        v3 = 0;
LABEL_34:
        SEMOBJ::vUnlock((SEMOBJ *)&v28);
        if ( v4 && (*(_DWORD *)(v42 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v42 + 1768) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v42 + 1768))(
              *(_QWORD *)(*(_QWORD *)(v42 + 24) + 1800LL),
              &v41,
              0LL,
              0LL,
              *(_DWORD *)(v41 + 28));
          else
            v3 = 0;
        }
LABEL_39:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( v34 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v34);
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
        if ( v27[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v27);
        return v3;
      }
      v21 = 1;
      if ( (unsigned int)(v20 - 1) > 1 )
      {
        do
        {
          v22 = v21++;
          *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * v22 + 3) = 0;
          v6 = v41;
        }
        while ( v21 < *(_DWORD *)(v41 + 28) - 1 );
      }
      v23 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v41 + 28); v6 = v41 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v23 = *(_DWORD *)(v6 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v6 + 24) = v23;
    goto LABEL_34;
  }
  return v3;
}
