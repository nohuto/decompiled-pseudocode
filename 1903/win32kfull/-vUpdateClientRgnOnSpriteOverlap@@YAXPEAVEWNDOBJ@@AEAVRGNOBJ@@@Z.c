/*
 * XREFs of ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0283E64
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0281CF4 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0282248 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0283930 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0283E14 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 */

void __fastcall vUpdateClientRgnOnSpriteOverlap(struct EWNDOBJ *a1, struct RGNOBJ *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct REGION *v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  if ( EWNDOBJ::bValid(a1) && (*(_DWORD *)(v5 + 184) & 0x200) != 0 )
  {
    v13 = *(_QWORD *)(v5 + 56);
    v12 = *(_QWORD *)(v5 + 192);
    if ( v12 )
    {
      if ( *v4 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
        if ( v10[0] )
        {
          if ( (unsigned int)RGNOBJ::iComplexity(a2) == 1 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v10, (struct RGNOBJ *)&v12);
          }
          else if ( !RGNOBJ::bMerge((RGNOBJ *)v10, a2, (struct RGNOBJ *)&v12, BYTE1(gafjRgnOp))
                 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v10) == 1
                 || (RGNOBJ::vSwap((RGNOBJ *)v10, a2),
                     !RGNOBJ::bMerge((RGNOBJ *)v10, (struct RGNOBJ *)&v12, a2, BYTE4(gafjRgnOp)))
                 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v10) == 1 )
          {
            RGNOBJ::vSet((RGNOBJ *)v10);
            goto LABEL_15;
          }
          if ( !RGNOBJ::bEqual((RGNOBJ *)&v13, (struct RGNOBJ *)v10) )
          {
            v9 = ghsemWndobj;
            GreAcquireSemaphore(ghsemWndobj);
            v8 = *((_QWORD *)a1 + 25);
            GreAcquireSemaphore(v8);
            RGNOBJ::vSwap((RGNOBJ *)v10, (struct RGNOBJ *)&v13);
            v6 = v13;
            *((_QWORD *)a1 + 7) = v13;
            *(_DWORD *)(v6 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
            v7 = (struct REGION *)*((_QWORD *)a1 + 7);
            v11 = *((_OWORD *)a1 + 2);
            EWNDOBJ::vSetClip((__int64)a1, v7, &v11);
            (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a1 + 21) + 40LL))(a1, 512LL);
            SEMOBJ::vUnlock((SEMOBJ *)&v8);
            SEMOBJ::vUnlock((SEMOBJ *)&v9);
          }
        }
LABEL_15:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      }
    }
  }
}
