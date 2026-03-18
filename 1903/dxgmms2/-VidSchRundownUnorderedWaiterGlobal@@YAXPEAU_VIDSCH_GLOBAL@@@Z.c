/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031C70
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0030754 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // r8
  char v3; // cl
  char v4; // al
  bool v5; // zf
  struct _VIDSCH_GLOBAL *v6; // rdi
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-8h]

  v10 = 0;
  v9[0] = (char *)a1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v9);
  v3 = 0;
  v7[1] = v7;
  v7[0] = v7;
  v4 = *((_BYTE *)a1 + 2428) | 1;
  v8 = 0;
  v5 = *((_DWORD *)a1 + 184) == 0;
  *((_BYTE *)a1 + 2428) = v4;
  if ( !v5 || *((_DWORD *)a1 + 185) )
  {
    v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 35);
    if ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280) )
    {
      do
      {
        VidSchiRundownUnorderedWaiterDevice((__int64)v7, (__int64)v6 - 104, v2);
        v6 = *(struct _VIDSCH_GLOBAL **)v6;
      }
      while ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280) );
      v4 = *((_BYTE *)a1 + 2428);
      v3 = v8;
    }
  }
  *((_BYTE *)a1 + 2428) = v4 & 0xFE;
  if ( !v3 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v7);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
