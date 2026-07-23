/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x140023AE0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbPropagateBoosts @ 0x140023BB0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD **v4; // rdi
  char *v6; // rbp
  _QWORD *v7; // rcx
  volatile signed __int16 *v8; // rbx
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (_QWORD **)(SystemArgument1 + 3214);
  v6 = (char *)(SystemArgument1 + 3215);
  while ( 1 )
  {
    v7 = *v4;
    if ( !*v4 )
    {
      KiAbPropagateBoosts(v6, v4, &v10, SystemArgument2);
      v7 = *v4;
      if ( !*v4 )
        break;
    }
    v8 = (volatile signed __int16 *)(v7 - 173);
    *v4 = (_QWORD *)*v7;
    *v7 = 1LL;
    _InterlockedOr(v9, 0);
    if ( *((_BYTE *)v7 + 39) )
      KiAbProcessThreadLocks((_DWORD)v7 - 1384, 0, 0, 1, (__int64)&v10, (__int64)v6, 0LL);
    _InterlockedDecrement16(v8 + 710);
  }
  SystemArgument1[3220] = 0LL;
  KiReadyDeferredReadyList(SystemArgument1, &v10);
}
