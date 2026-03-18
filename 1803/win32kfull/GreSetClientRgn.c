/*
 * XREFs of GreSetClientRgn @ 0x1C02588F0
 * Callers:
 *     InvalidateGDIWindows @ 0x1C01B2300 (InvalidateGDIWindows.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0257BAC (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0257FB4 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C02581D4 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  struct REGION **v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  BOOL v17; // edi
  __int128 v18; // xmm6
  struct REGION *v19; // rdx
  signed __int32 v20; // ecx
  struct REGION *v21; // r8
  signed __int32 v22; // ecx
  int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v29; // [rsp+78h] [rbp-21h] BYREF
  __int64 v30; // [rsp+80h] [rbp-19h] BYREF
  __int128 v31; // [rsp+90h] [rbp-9h] BYREF
  __int128 v32; // [rsp+A0h] [rbp+7h] BYREF
  struct _POINTL v33; // [rsp+100h] [rbp+67h] BYREF
  __int64 v34; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+118h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, a2, 0);
      if ( v25[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (struct REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v35 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v24 = __PAIR64__(v10, v9);
        *((_QWORD *)&v24 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2544) )
            {
              v15 = *(_DWORD *)(v14 + 2576);
              v33.x = -v15;
              v16 = *(_DWORD *)(v14 + 2580);
              v33.y = -v16;
              if ( v15 || v16 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v25, &v33);
                v9 += v33.x;
                v11 += v33.x;
                v10 += v33.y;
                v12 += v33.y;
                *(_QWORD *)&v24 = __PAIR64__(v10, v9);
                *((_QWORD *)&v24 + 1) = __PAIR64__(v12, v11);
              }
            }
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v27);
          if ( v26[0] )
          {
            if ( v27[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v27, (struct _RECTL *)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)v26, (struct RGNOBJ *)v25);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)v26, (struct RGNOBJ *)v27, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)v26, (struct RGNOBJ *)v25, (struct RGNOBJ *)v27, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v25, (struct RGNOBJ *)v26);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v35, (struct RGNOBJ *)v25)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v25);
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v28);
          v17 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v28[0] )
            v17 = RGNOBJ::bCopy((RGNOBJ *)v28, (struct RGNOBJ *)v25) != 0;
          v30 = ghsemWndobj;
          GreAcquireSemaphore(ghsemWndobj);
          v29 = *((_QWORD *)a1 + 25);
          GreAcquireSemaphore(v29);
          if ( v17 )
          {
            v34 = *((_QWORD *)a1 + 24);
            if ( v34 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v28, (struct RGNOBJ *)&v34);
              *((_QWORD *)a1 + 24) = v34;
            }
          }
          v18 = v24;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24, 0, 1);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v24);
            if ( (_QWORD)v24 && RGNOBJ::iCombine((RGNOBJ *)&v24, (struct RGNOBJ *)v25, (struct RGNOBJ *)&v35, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v24);
              v19 = *v8;
              v20 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
              v31 = v18;
              *((_DWORD *)v19 + 7) = v20 + 1;
              EWNDOBJ::vSetClip((__int64)a1, *v8, &v31);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v25, (struct EWNDOBJ *)((char *)a1 + 56));
          v21 = *v8;
          v22 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
          v32 = v18;
          *((_DWORD *)v21 + 7) = v22 + 1;
          EWNDOBJ::vSetClip((__int64)a1, *v8, &v32);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v25);
          v23 = *((_DWORD *)a1 + 46);
          if ( (v23 & 2) != 0 )
          {
            (*(void (__fastcall **)(struct EWNDOBJ *))(*((_QWORD *)a1 + 21) + 40LL))(a1);
            v23 = *((_DWORD *)a1 + 46);
          }
          *((_DWORD *)a1 + 46) = v23 | 0x80000000;
          *(_DWORD *)(*((_QWORD *)a1 + 21) + 48LL) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v29);
          SEMOBJ::vUnlock((SEMOBJ *)&v30);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v28);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
