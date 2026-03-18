/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C00E4180
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned int v13; // ecx
  DC **v14; // rbx
  struct _CLIPOBJ *v15; // r13
  struct RGNOBJ *v16; // rsi
  struct REGION *v17; // rax
  __int64 v18; // r10
  HDEV hdev; // rax
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  struct _POINTL v21; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+30h] [rbp-20h] BYREF
  struct REGION *v23; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    return v9;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return v9;
  v11 = *ThreadWin32Thread;
  result = 1LL;
  if ( v11 && *(_BYTE *)(v11 + 328) && a1->iType == 1 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemVisRgnUniqueness);
    v13 = *(_DWORD *)(v11 + 336);
    if ( v13 == giVisRgnUniquenessStable )
      goto LABEL_10;
    if ( giVisRgnUniquenessStable <= giVisRgnUniqueness )
    {
      if ( v13 >= giVisRgnUniquenessStable && v13 <= giVisRgnUniqueness )
      {
LABEL_10:
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
        if ( v9 || !a2 || !*a2 )
          return v9;
        SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v22, ghsemVisRgnPublish);
        v14 = *(DC ***)(v11 + 312);
        if ( !v14 )
        {
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
          return 1LL;
        }
        v15 = *a2;
        v16 = (struct RGNOBJ *)((unsigned __int64)&(*a2)[2].rclBounds.top & -(__int64)(*a2 != 0LL));
        v20 = *((_QWORD *)*v14 + 191);
        v17 = DC::prgnVisSnap(*v14);
        v23 = v17;
        if ( v18 && v17 )
        {
          if ( RGNOBJ::bEqual((RGNOBJ *)&v23, (struct RGNOBJ *)&v20) )
          {
LABEL_23:
            v9 = 1;
            goto LABEL_33;
          }
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a3 != *(_QWORD *)v16 )
            {
              if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v20) )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
                if ( v24[0] )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)*v14 + 6) + 40LL) & 0x20000) != 0 )
                  {
                    hdev = a1->hdev;
                    v21.x = -*((_DWORD *)hdev + 644);
                    v21.y = -*((_DWORD *)hdev + 645);
                    RGNOBJ::bOffset(a3, &v21);
                  }
                  if ( RGNOBJ::bMerge((RGNOBJ *)v24, v16, a3, BYTE1(gafjRgnOp))
                    && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) != 1 )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)v24, a3);
                    XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)&v15->rclBounds, 1);
                    if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
                    {
                      *a2 = (struct _CLIPOBJ *)a4;
                      v9 = 1;
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
              }
              goto LABEL_33;
            }
            goto LABEL_23;
          }
        }
LABEL_33:
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
        return v9;
      }
    }
    else if ( v13 <= giVisRgnUniqueness || v13 >= giVisRgnUniquenessStable )
    {
      goto LABEL_10;
    }
    v9 = 0;
    goto LABEL_10;
  }
  return result;
}
