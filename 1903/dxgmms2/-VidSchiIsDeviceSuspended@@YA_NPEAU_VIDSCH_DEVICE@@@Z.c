/*
 * XREFs of ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035A9C
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010E78 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchiIsDeviceSuspended(struct _VIDSCH_DEVICE *a1)
{
  __int64 v1; // rax
  char v3; // di
  _QWORD **v4; // rbx
  _QWORD *i; // rcx
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 4);
  v8 = 0;
  v3 = 0;
  v7[0] = v1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v7);
  v4 = (_QWORD **)((char *)a1 + 88);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( *(i - 3) != *(i - 4) )
      goto LABEL_6;
  }
  v3 = 1;
LABEL_6:
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
  return v3;
}
