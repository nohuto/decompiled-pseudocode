/*
 * XREFs of GetPointerDeviceConfig @ 0x1C0055320
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

__int64 __fastcall GetPointerDeviceConfig(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  int v6; // esi
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r8
  int v11; // r10d
  __int64 v12; // rcx
  int v13; // eax
  char v15; // al
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]

  v6 = -1073741823;
  Next = gpInputConfig->Next;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CInpLockSharedIfNeeded *)&v16,
    (struct CInpPushLock *)&CInputConfig::slock);
  while ( 1 )
  {
    v8 = (unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64);
    if ( !v8 )
      break;
    if ( *(_DWORD *)(a1 + 848) )
    {
      v9 = *(_DWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64)) + 0xC);
      v10 = 0LL;
      v11 = *(_DWORD *)(a1 + 864);
      if ( !v9 )
        goto LABEL_12;
      while ( 1 )
      {
        v12 = *(_QWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                        + 0x10)
            + 80 * v10;
        v13 = *(_DWORD *)(v12 + 16);
        if ( (v13 & 2) != 0 )
        {
          if ( v11 == 4 )
          {
            v15 = v13 & 1;
          }
          else if ( v11 )
          {
            if ( *(_DWORD *)(v12 + 24) == *(_DWORD *)(a1 + 1380)
              && *(_DWORD *)(v12 + 28) == *(_DWORD *)(a1 + 1384)
              && *(_DWORD *)(v12 + 32) == *(_DWORD *)(a1 + 1388) )
            {
LABEL_11:
              *a2 = v8;
              v6 = 0;
              *a3 = *(_OWORD *)v12;
              a3[1] = *(_OWORD *)(v12 + 16);
              a3[2] = *(_OWORD *)(v12 + 32);
              a3[3] = *(_OWORD *)(v12 + 48);
              a3[4] = *(_OWORD *)(v12 + 64);
              goto LABEL_12;
            }
            v15 = 0;
          }
          else
          {
            v15 = *(_QWORD *)(v12 + 72) == *(_QWORD *)(a1 + 856);
          }
          if ( v15 )
            goto LABEL_11;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (_DWORD)v10 == v9 )
          goto LABEL_12;
      }
    }
    if ( (*(_DWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64)) + 8) & 1) != 0 )
    {
      *a2 = v8;
      v6 = 0;
      *a3 = *(_OWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                      + 0x18);
      a3[1] = *(_OWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                        + 0x28);
      a3[2] = *(_OWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                        + 0x38);
      a3[3] = *(_OWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                        + 0x48);
      a3[4] = *(_OWORD *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                        + 0x58);
      break;
    }
LABEL_12:
    if ( v6 >= 0 )
      break;
    Next = Next->Next;
  }
  if ( !v17 )
  {
    ExReleasePushLockSharedEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v6;
}
