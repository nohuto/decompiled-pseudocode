/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x140664730
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400E1704 (LZNT1DecompressChunkNewThread.c)
 *     LZNT1DecompressChunk @ 0x1401C65C0 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6)
{
  __int16 *v6; // rsi
  unsigned __int64 v7; // r13
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *v9; // r12
  int v10; // edi
  __int16 v11; // bx
  __int16 i; // r15
  __int64 v13; // rbx
  int v14; // r15d
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int *v17; // rax
  unsigned int v19; // ecx
  size_t v20; // r8
  char *v21; // r15
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  int v24; // [rsp+90h] [rbp+40h]
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = (int)a1;
  v6 = a3;
  v7 = (unsigned __int64)a3 + a4;
  v8 = a1;
  v9 = (struct _LIST_ENTRY *)((char *)a1 + a2);
  v10 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v23 = 1LL;
  v11 = *v6;
  v25 = 0;
  for ( i = v11; ; i = v11 )
  {
    v16 = (i & 0xFFF) + 3;
    if ( (unsigned __int64)v6 + v16 > v7 )
    {
LABEL_12:
      v17 = a6;
      goto LABEL_31;
    }
    if ( v11 >= 0 )
    {
      if ( v16 < 2 )
        goto LABEL_12;
      v19 = v16 - 2;
      v25 = v16 - 2;
      if ( (struct _LIST_ENTRY *)((char *)v8 + v16 - 2) > v9 )
      {
        v19 = (_DWORD)v9 - (_DWORD)v8;
        v25 = (_DWORD)v9 - (_DWORD)v8;
      }
      if ( (unsigned __int64)v6 + v19 + 2 > v7 )
        goto LABEL_12;
      memmove(v8, v6 + 1, v19);
      v13 = v16;
      goto LABEL_26;
    }
    v13 = v16;
    v14 = a5;
    if ( !a5 )
    {
      v10 = LZNT1DecompressChunk(v8, v9, (_BYTE *)v6 + 2, (__int64)v6 + v13, &v25);
      if ( v10 < 0 )
      {
LABEL_28:
        *a6 = v25;
        goto LABEL_15;
      }
LABEL_26:
      v15 = v25;
      goto LABEL_6;
    }
    v10 = LZNT1DecompressChunkNewThread(
            (__int64)&Event,
            (unsigned __int64)v8,
            v9,
            (unsigned __int64)(v6 + 1),
            (__int64)v6 + v13,
            a5);
    if ( v10 < 0 )
      goto LABEL_28;
    v15 = v14;
    v25 = v14;
LABEL_6:
    v6 = (__int16 *)((char *)v6 + v13);
    v8 = (struct _LIST_ENTRY *)((char *)v8 + v15);
    if ( v8 == v9 )
      break;
    if ( (unsigned __int64)v6 > v7 - 2 )
      break;
    v11 = *v6;
    if ( !*v6 )
      break;
    if ( v15 < 0x1000 )
    {
      v20 = (int)(4096 - v15);
      v21 = (char *)v8 + v20;
      if ( (struct _LIST_ENTRY *)((char *)v8 + v20) >= v9 )
        break;
      memset(v8, 0, v20);
      v8 = (struct _LIST_ENTRY *)v21;
    }
  }
  v17 = a6;
  if ( (unsigned __int64)v6 <= v7 )
  {
    *a6 = (_DWORD)v8 - v24;
    goto LABEL_15;
  }
LABEL_31:
  v10 = -1073741246;
  *v17 = (unsigned int)v6;
LABEL_15:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 >= 0 && v23 < 0 )
    return (unsigned int)HIDWORD(v23);
  return (unsigned int)v10;
}
