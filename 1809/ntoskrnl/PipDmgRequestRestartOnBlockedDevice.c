/*
 * XREFs of PipDmgRequestRestartOnBlockedDevice @ 0x14083A700
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x14083A604 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall PipDmgRequestRestartOnBlockedDevice(_QWORD *Object)
{
  __int64 v2; // rcx
  _WORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int16 *v5; // rbp
  __int64 v6; // rdx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rbp
  __int64 v17; // rdx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  _WORD *v20; // rcx
  __int64 v21; // rcx

  if ( PipDmaGuardPolicy == 3 )
  {
    if ( Object )
    {
      IoAddTriageDumpDataBlock((int)Object, *((unsigned __int16 *)Object + 1));
      v2 = Object[1];
      if ( v2 )
      {
        IoAddTriageDumpDataBlock(v2, *(__int16 *)(v2 + 2));
        v3 = (_WORD *)(Object[1] + 56LL);
        if ( *v3 )
        {
          IoAddTriageDumpDataBlock((int)v3, 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), *(unsigned __int16 *)(Object[1] + 56LL));
        }
      }
      v4 = *(_QWORD *)(Object[39] + 40LL);
      if ( v4 )
      {
        v5 = (unsigned __int16 *)(v4 + 40);
        IoAddTriageDumpDataBlock(v4, 784);
        if ( *v5 )
        {
          IoAddTriageDumpDataBlock((int)v5, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v5 + 1), *v5);
        }
        v6 = Object[39];
        v7 = (_WORD *)(*(_QWORD *)(v6 + 40) + 56LL);
        if ( *v7 )
        {
          IoAddTriageDumpDataBlock((int)v7, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
          v6 = Object[39];
        }
        v8 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL);
        if ( v8 )
        {
          v9 = (_WORD *)(v8 + 56);
          if ( *v9 )
          {
            IoAddTriageDumpDataBlock((int)v9, 2);
            v10 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v10 + 64), *(unsigned __int16 *)(v10 + 56));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  if ( !Object )
LABEL_32:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v11 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Object, *((unsigned __int16 *)Object + 1));
    v13 = Object[1];
    if ( v13 )
    {
      IoAddTriageDumpDataBlock(v13, *(__int16 *)(v13 + 2));
      v14 = (_WORD *)(Object[1] + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((int)v14, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), *(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v15 = *(_QWORD *)(Object[39] + 40LL);
    if ( v15 )
    {
      v16 = (unsigned __int16 *)(v15 + 40);
      IoAddTriageDumpDataBlock(v15, 784);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((int)v16, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v16 + 1), *v16);
      }
      v17 = Object[39];
      v18 = (_WORD *)(*(_QWORD *)(v17 + 40) + 56LL);
      if ( *v18 )
      {
        IoAddTriageDumpDataBlock((int)v18, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
        v17 = Object[39];
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 16LL);
      if ( v19 )
      {
        v20 = (_WORD *)(v19 + 56);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((int)v20, 2);
          v21 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), *(unsigned __int16 *)(v21 + 56));
        }
      }
    }
    goto LABEL_32;
  }
  result = PnpRequestDeviceAction(Object, 25, 1, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return PnpRequestDeviceAction(Object, 16, 0, 0LL, 0LL, 0LL, 0LL);
  return result;
}
