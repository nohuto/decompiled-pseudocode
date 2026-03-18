/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031430
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C001A420 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  char v5; // cl
  char v6; // al
  bool v7; // zf
  struct _VIDSCH_GLOBAL *v8; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+30h] [rbp-38h]
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)a1 + 206, a3, 0);
  v5 = 0;
  v9[1] = v9;
  v9[0] = v9;
  v6 = *((_BYTE *)a1 + 2428) | 1;
  v10 = 0;
  v7 = *((_DWORD *)a1 + 184) == 0;
  *((_BYTE *)a1 + 2428) = v6;
  if ( !v7 || *((_DWORD *)a1 + 185) )
  {
    v8 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 35);
    if ( v8 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280) )
    {
      do
      {
        VidSchiRundownUnorderedWaiterDevice((__int64)v9, (__int64)v8 - 104, v4);
        v8 = *(struct _VIDSCH_GLOBAL **)v8;
      }
      while ( v8 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280) );
      v6 = *((_BYTE *)a1 + 2428);
      v5 = v10;
    }
  }
  *((_BYTE *)a1 + 2428) = v6 & 0xFE;
  if ( !v5 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v9);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
}
