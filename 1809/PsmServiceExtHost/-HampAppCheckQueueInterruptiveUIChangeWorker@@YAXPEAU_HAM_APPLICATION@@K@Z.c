/*
 * XREFs of ?HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z @ 0x18006B7E0
 * Callers:
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069510 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000CB60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCheckQueueInterruptiveUIChangeWorker(struct _HAM_APPLICATION *a1, int a2)
{
  unsigned int v4; // edx

  HampAppAcquireLockExclusive(a1);
  v4 = *((_DWORD *)a1 + 152) ^ (*((_DWORD *)a1 + 152) ^ (a2 << 21)) & 0x200000;
  *((_DWORD *)a1 + 152) = v4;
  if ( a2 != ((v4 >> 20) & 1) && (v4 & 0x400000) == 0 )
  {
    *((_DWORD *)a1 + 152) = v4 | 0x400000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 70));
  }
  HampAppReleaseLockExclusive(a1);
}
