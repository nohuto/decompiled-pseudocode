/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N1111@Z @ 0x1C000F4A8
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C000F368 (VidSchiPropagatePresentHistoryToken.c)
 * Callees:
 *     McTemplateK0ppqqx @ 0x1C002BD7C (McTemplateK0ppqqx.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqx((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v13 = *((unsigned int *)SpinLock + 2);
  if ( (unsigned int)v13 >= 0x800 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v17 + 24) = 3268LL;
    WdLogEvent5_WdAssertion(v17);
    v13 = *((unsigned int *)SpinLock + 2);
  }
  SpinLock[v13 + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = a3 | *((_BYTE *)SpinLock
                                                                        + *((unsigned int *)SpinLock + 2)
                                                                        + 16464) & 0xFE;
  v15 = *((unsigned int *)SpinLock + 2);
  *((_BYTE *)SpinLock + v15 + 16464) = (2 * a4) | *((_BYTE *)SpinLock + v15 + 16464) & 0xFD;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (4 * a5) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFB;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (8 * a6) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xF7;
  v14 = *((unsigned int *)SpinLock + 2);
  LOBYTE(v15) = (16 * a7) | *((_BYTE *)SpinLock + v14 + 16464) & 0xEF;
  *((_BYTE *)SpinLock + v14 + 16464) = v15;
  v16 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v16;
  if ( v16 == *((_DWORD *)SpinLock + 3) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v18 + 24) = 3284LL;
    WdLogEvent5_WdAssertion(v18);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
