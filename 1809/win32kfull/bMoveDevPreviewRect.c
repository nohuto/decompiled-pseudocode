/*
 * XREFs of bMoveDevPreviewRect @ 0x1C0269B94
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C0269D68 (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C02591C4 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C0263F40 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, struct _RECTL *a2, char a3, __int64 a4, __int64 a5)
{
  int v8; // r15d
  HDEV v9; // rsi
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rcx
  LONG v13; // r10d
  LONG v14; // r9d
  void *v15; // rax
  int v16; // edx
  unsigned int updated; // eax
  HDEV v19; // [rsp+80h] [rbp-21h] BYREF
  struct tagSIZE v20; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v21[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v22; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-1h] BYREF
  struct tagPOINT v24[2]; // [rsp+A8h] [rbp+7h] BYREF

  v19 = a1;
  v8 = a3 & 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v23, ghsemDynamicModeChange);
  v22 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v19);
  v9 = v19;
  v10 = 0;
  if ( *((_QWORD *)v19 + 156) )
  {
    v11 = *((_DWORD *)v19 + 317) - *((_DWORD *)v19 + 315);
    v12 = (unsigned int)(*((_DWORD *)v19 + 318) - *((_DWORD *)v19 + 316));
    v13 = a2->right - a2->left;
    v14 = a2->bottom - a2->top;
    v20.cx = v13;
    v20.cy = v14;
    if ( *((_DWORD *)v19 + 299) )
    {
      if ( v11 || (_DWORD)v12 )
      {
        v15 = (void *)UserReferenceDwmApiPort(v12);
        v16 = 1;
      }
      else
      {
        v15 = (void *)UserReferenceDwmApiPort(v12);
        v16 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v15, v16, a4, (__int128 *)&a2->left, a5) >= 0;
    }
    else if ( v13 == v11 && v14 == (_DWORD)v12 )
    {
      *(struct _RECTL *)&v24[0].x = *a2;
      updated = GreUpdateSprite(a1, 0LL, *((void **)v19 + 156), 0LL, v24, &v20, 0LL, 0LL, 0, 0LL, 0, 0LL, 0LL, v8, 0);
    }
    else
    {
      updated = bSetPreviewRectContent((void **)v19 + 11, a2);
    }
    if ( updated )
      *(struct _RECTL *)(v9 + 315) = *a2;
    v10 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v23);
  return v10;
}
