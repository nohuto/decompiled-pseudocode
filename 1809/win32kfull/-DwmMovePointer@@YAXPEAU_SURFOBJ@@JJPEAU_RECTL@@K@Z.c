/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000A6F4
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A25C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     EngpMovePointer @ 0x1C025315C (EngpMovePointer.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AC94 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0074E04 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C007664C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00A2A78 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0114EA4 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // rbx
  unsigned __int64 v9; // rsi
  HSPRITE v10; // rdi
  HSPRITE NeighborSprite; // rdi
  struct DwmState *v12; // rcx
  HSPRITE v13; // rdi
  _BYTE *v14; // rcx
  HSPRITE v15; // rdi
  struct DwmState *v16; // rax
  __int64 v17; // rcx
  struct DwmState **v18; // rdx
  struct DwmState **v19; // rdx
  HSPRITE v20; // rbx
  struct DwmState **v21; // rdx
  struct DwmState **v22; // rdx
  HSPRITE v23; // rdi
  struct DWMSPRITE *v24; // rbx
  HDEV v25; // rcx
  struct DWMSPRITE *v26; // [rsp+80h] [rbp-80h] BYREF
  char v27[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DWMSPRITE *v29; // [rsp+B0h] [rbp-50h]
  _BYTE v30[32]; // [rsp+B8h] [rbp-48h] BYREF
  struct DWMSPRITE *v31; // [rsp+D8h] [rbp-28h]
  _BYTE v32[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+100h] [rbp+0h]
  _BYTE v34[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v35; // [rsp+128h] [rbp+28h]
  _BYTE v36[32]; // [rsp+130h] [rbp+30h] BYREF
  struct DWMSPRITE *v37; // [rsp+150h] [rbp+50h]
  struct tagPOINT v38; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL *v39; // [rsp+1B8h] [rbp+B8h] BYREF

  v39 = a4;
  hdev = a1->hdev;
  if ( *((_DWORD *)g_pDwmState + 25) && *((_QWORD *)g_pDwmState + 17) )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( *((_QWORD *)g_pDwmState + 18) == *((_QWORD *)g_pDwmState + 17) )
      goto LABEL_31;
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v9 - *((_DWORD *)g_pDwmState + 41)) < *((_DWORD *)g_pDwmState + 42) )
      goto LABEL_31;
    v10 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
    v35 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v34, v10);
    NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
    v33 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v32, NeighborSprite);
    if ( v35 )
    {
      if ( !v33 )
      {
LABEL_28:
        v33 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
        if ( v35 )
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
        v35 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
LABEL_31:
        v16 = (struct DwmState *)(hdev + 884);
        v17 = *((_QWORD *)hdev + 442);
        if ( a2 == -1 )
        {
          if ( *(struct DwmState **)(v17 + 8) == v16 )
          {
            v18 = (struct DwmState **)*((_QWORD *)hdev + 443);
            if ( *v18 == v16 )
            {
              *v18 = (struct DwmState *)v17;
              *(_QWORD *)(v17 + 8) = v18;
              v19 = (struct DwmState **)*((_QWORD *)g_pDwmState + 14);
              if ( *v19 == (struct DwmState *)((char *)g_pDwmState + 104) )
              {
                *(_QWORD *)v16 = (char *)g_pDwmState + 104;
                *((_QWORD *)hdev + 443) = v19;
                *v19 = v16;
                *((_QWORD *)g_pDwmState + 14) = v16;
                if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
                {
                  v20 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
                  while ( v20 )
                  {
                    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v36);
                    v37 = 0LL;
                    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v36, v20);
                    if ( v37 )
                      vSpDwmUpdateSpriteVisibility(v37, 0);
                    v20 = hspGetNeighborSprite(v20, 1, 0);
                    if ( v37 )
                      _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
                    v37 = 0LL;
                    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v36);
                  }
                }
LABEL_51:
                EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
                GreReleaseSemaphoreInternal(ghsemDwmState);
                return;
              }
            }
          }
        }
        else if ( *(struct DwmState **)(v17 + 8) == v16 )
        {
          v21 = (struct DwmState **)*((_QWORD *)hdev + 443);
          if ( *v21 == v16 )
          {
            *v21 = (struct DwmState *)v17;
            *(_QWORD *)(v17 + 8) = v21;
            v22 = (struct DwmState **)*((_QWORD *)g_pDwmState + 16);
            if ( *v22 == (struct DwmState *)((char *)g_pDwmState + 120) )
            {
              *(_QWORD *)v16 = (char *)g_pDwmState + 120;
              *((_QWORD *)hdev + 443) = v22;
              *v22 = v16;
              *((_QWORD *)g_pDwmState + 16) = v16;
              v38.x = a2 + *((_DWORD *)hdev + 646) - *((_DWORD *)g_pDwmState + 38);
              v38.y = a3 + *((_DWORD *)hdev + 647) - *((_DWORD *)g_pDwmState + 39);
              v23 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
              GreUpdateSprite(a1->hdev, 0LL, v23, 0LL, &v38, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0);
              v26 = 0LL;
              DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v26, v23);
              v24 = v26;
              if ( v26 )
              {
                if ( (a5 & 4) != 0 )
                {
                  v25 = a1->hdev;
                  LODWORD(v39) = 0x1000000;
                  GreUpdateSprite(
                    v25,
                    0LL,
                    v23,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    0,
                    (struct _BLENDFUNCTION *)&v39,
                    0x21200002u,
                    0LL,
                    0LL,
                    1,
                    0);
                }
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v27, (struct DWMSPRITE *)((char *)v24 + 88));
                vSpDwmUpdateSpriteVisibility(v24, 1);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v27);
                DEC_SHARE_REF_CNT(v24);
              }
              goto LABEL_51;
            }
          }
        }
        __fastfail(3u);
      }
      if ( *(_DWORD *)(v33 + 56) == *(_DWORD *)(v35 + 56) && *(_DWORD *)(v33 + 60) == *(_DWORD *)(v35 + 60) )
      {
        v12 = g_pDwmState;
        v13 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        while ( v13 != *((HSPRITE *)v12 + 17) )
        {
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
          v29 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v28, v13);
          if ( v29 && (*((_DWORD *)v29 + 41) & 1) != 0 )
          {
            vSpDwmUpdateSpriteVisibility(v29, 0);
            if ( v29 )
              _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
            v29 = 0LL;
            v14 = v28;
            goto LABEL_24;
          }
          v13 = hspGetNeighborSprite(v13, 1, 0);
          if ( v29 )
            _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
          v29 = 0LL;
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
          v12 = g_pDwmState;
        }
      }
      else
      {
        v15 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v30);
        v31 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v30, v15);
        if ( v31 )
          vSpDwmUpdateSpriteVisibility(v31, 0);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v15, 1, 0);
        vSpDwmZorderSprite(v15, *((HSPRITE *)g_pDwmState + 17));
        *((_QWORD *)g_pDwmState + 17) = v15;
        if ( v31 )
          _InterlockedDecrement((volatile signed __int32 *)v31 + 3);
        v31 = 0LL;
        v14 = v30;
LABEL_24:
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
      }
      *((_DWORD *)g_pDwmState + 41) = v9;
    }
    if ( v33 )
      _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
    goto LABEL_28;
  }
}
