/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C029B814
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C0095C74 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C0293950 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rax
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdx
  signed __int32 v17; // ecx
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v28[8]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v30[40]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v32[112]; // [rsp+A0h] [rbp-19h] BYREF
  int v33; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+130h] [rbp+77h] BYREF
  __int64 v35; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  if ( v29[0] )
  {
    v35 = *(_QWORD *)(v29[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v28, (struct PDEVOBJ *)&v35);
    v27 = *(_QWORD *)(v35 + 64);
    GreAcquireSemaphore(v27);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v31, (struct PDEVOBJ *)&v35);
    v34 = *(_QWORD *)(v35 + 1808);
    if ( (*(_DWORD *)(v35 + 2172) & 0x100) == 0 )
    {
LABEL_37:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v31);
      DCOBJ::~DCOBJ((DCOBJ *)v32);
      SEMOBJ::vUnlock((SEMOBJ *)&v27);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v28);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
      goto LABEL_38;
    }
    v26 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v5 = v34;
    v6 = *(_DWORD *)(v34 + 24);
    v7 = v6;
    v8 = v6 & 0x1000;
    if ( (v6 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v6 & 0x10000 | 0x8000u) >> 15;
    v9 = v7 & 0x10000;
    if ( v2 == 1 )
    {
      if ( v8 || v9 )
      {
        v10 = *(_DWORD *)(v34 + 60) >> 1;
        if ( (unsigned int)v10 > 0xA )
          v10 = 10LL;
        if ( (_DWORD)v10 )
        {
          v11 = 0LL;
          v12 = (unsigned int)v10;
          do
          {
            v13 = *(_QWORD *)(v5 + 112);
            v33 = *(_DWORD *)(v11 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v33) = 48;
            *(_DWORD *)(v11 + v13) = v33;
            v11 += 4LL;
            v5 = v34;
            --v12;
          }
          while ( v12 );
        }
        LODWORD(v14) = *(_DWORD *)(v5 + 28);
        LODWORD(v15) = 20;
        if ( (_DWORD)v10 )
        {
          while ( 1 )
          {
            v15 = (unsigned int)(v15 - 1);
            v14 = (unsigned int)(v14 - 1);
            v16 = *(_QWORD *)(v5 + 112);
            v33 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v15);
            HIBYTE(v33) = 48;
            *(_DWORD *)(v16 + 4 * v14) = v33;
            if ( !--v10 )
              break;
            v5 = v34;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v29[0] + 976LL) + 152LL) |= 0xFu;
        *(_DWORD *)(v34 + 24) &= 0xFFFEEFFF;
        v17 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v34 + 32) = v17;
        v18 = *(_QWORD *)(v34 + 120);
        if ( v18 != v34 )
          *(_DWORD *)(v18 + 32) = v17;
        v4 = 1;
      }
      goto LABEL_32;
    }
    if ( v2 == 2 )
    {
      v19 = *(_DWORD *)(v34 + 28);
      if ( !v19 )
      {
        v3 = 0;
LABEL_32:
        SEMOBJ::vUnlock((SEMOBJ *)&v26);
        if ( v4 && (*(_DWORD *)(v35 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v35 + 1768) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v35 + 1768))(
              *(_QWORD *)(*(_QWORD *)(v35 + 24) + 1800LL),
              &v34,
              0LL,
              0LL,
              *(_DWORD *)(v34 + 28));
          else
            v3 = 0;
        }
        goto LABEL_37;
      }
      v20 = 1;
      if ( (unsigned int)(v19 - 1) > 1 )
      {
        do
        {
          v21 = v20++;
          *(_BYTE *)(*(_QWORD *)(v5 + 112) + 4 * v21 + 3) = 0;
          v5 = v34;
        }
        while ( v20 < *(_DWORD *)(v34 + 28) - 1 );
      }
      v22 = *(_DWORD *)(v5 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v34 + 28); v5 = v34 )
      {
        *(_BYTE *)(*(_QWORD *)(v5 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v22 = *(_DWORD *)(v5 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v5 + 24) = v22;
    goto LABEL_32;
  }
LABEL_38:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v29);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v30);
  return v3;
}
