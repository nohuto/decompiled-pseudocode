/*
 * XREFs of ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035098
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011338 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

char __fastcall VidSchiIsDeviceSuspended(struct _VIDSCH_DEVICE *a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *i; // rcx
  char v6; // bl
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v8, (unsigned __int64 *)(*((_QWORD *)a1 + 4) + 1648LL), a3, 0);
  v4 = (_QWORD **)((char *)a1 + 88);
  for ( i = *v4; ; i = (_QWORD *)*i )
  {
    if ( i == v4 )
    {
      v6 = 1;
      goto LABEL_6;
    }
    if ( *(i - 3) != *(i - 4) )
      break;
  }
  v6 = 0;
LABEL_6:
  AcquireSpinLock::Release((AcquireSpinLock *)v8);
  return v6;
}
