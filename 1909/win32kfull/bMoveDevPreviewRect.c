/*
 * XREFs of bMoveDevPreviewRect @ 0x1C0282688
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C028286C (bSetDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0031328 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087E34 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C008B414 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0272434 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027CA48 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebx
  int v9; // r15d
  __int64 v10; // r8
  HDEV v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  LONG v14; // r10d
  __int64 v15; // r9
  void *v16; // rax
  int v17; // edx
  unsigned int updated; // eax
  struct tagSIZE v20; // [rsp+80h] [rbp-21h] BYREF
  HDEV v21; // [rsp+88h] [rbp-19h] BYREF
  char v22[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v23; // [rsp+98h] [rbp-9h] BYREF
  char v24[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+7h] BYREF

  v21 = a1;
  v25 = 0uLL;
  v7 = 0;
  v20 = 0LL;
  v9 = a3 & 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v21);
  v11 = v21;
  if ( *((_QWORD *)v21 + 156) )
  {
    v12 = (unsigned int)(*((_DWORD *)v21 + 317) - *((_DWORD *)v21 + 315));
    v13 = (unsigned int)(*((_DWORD *)v21 + 318) - *((_DWORD *)v21 + 316));
    v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v15 = (unsigned int)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4));
    v20.cx = v14;
    v20.cy = v15;
    if ( *((_DWORD *)v21 + 299) )
    {
      if ( (_DWORD)v12 || (_DWORD)v13 )
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v10, v15);
        v17 = 1;
      }
      else
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v10, v15);
        v17 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v16, v17, a4, (__int128 *)a2, a5) >= 0;
    }
    else if ( v14 == (_DWORD)v12 && (_DWORD)v15 == (_DWORD)v13 )
    {
      v25 = *(_OWORD *)a2;
      updated = GreUpdateSprite(
                  a1,
                  0LL,
                  *((void **)v21 + 156),
                  0LL,
                  (struct tagPOINT *)&v25,
                  &v20,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  v9,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((void **)v21 + 11, (const struct _RECTL *)a2);
    }
    if ( updated )
      *(_OWORD *)(v11 + 315) = *(_OWORD *)a2;
    v7 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v7;
}
