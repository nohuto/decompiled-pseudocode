/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x1406648D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400E1704 (LZNT1DecompressChunkNewThread.c)
 *     LZNT1DecompressChunk @ 0x1401C65C0 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  unsigned __int64 v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // dx
  __int16 v13; // ax
  unsigned int v14; // r14d
  __int16 *i; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // r12d
  unsigned int v19; // ecx
  __int64 v20; // rax
  bool v21; // zf
  _BYTE *v23; // rdx
  size_t v24; // r8
  int v25; // eax
  struct _LIST_ENTRY *v26; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-18h] BYREF
  int v29; // [rsp+B0h] [rbp+48h]
  unsigned int v30; // [rsp+B8h] [rbp+50h]
  int v31; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v30 = a2;
  v29 = (int)a1;
  v8 = a3;
  v26 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  v10 = a3 + a4;
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_WORD *)v8;
  v28 = 1LL;
  v13 = v12;
  v14 = a5;
  for ( i = (__int16 *)v8; ; v13 = *i )
  {
    v31 = 4096;
    v16 = (v13 & 0xFFFu) + 3;
    if ( v14 < 0x1000 )
      break;
    i = (__int16 *)((char *)i + v16);
    if ( (unsigned __int64)i > v10 )
      goto LABEL_41;
    v14 -= 4096;
    v8 = (unsigned __int64)i;
    if ( (unsigned __int64)i <= v10 - 2 )
    {
      v12 = *i;
      if ( *i )
        continue;
    }
    *a7 = 0;
    goto LABEL_23;
  }
  v17 = (unsigned int)v16;
  if ( (unsigned __int64)i + v16 > v10 )
  {
LABEL_41:
    v11 = -1073741246;
    *a7 = v8;
    goto LABEL_23;
  }
  v18 = a6;
  v19 = v30;
  while ( 1 )
  {
    v20 = 4096 - v14;
    if ( (unsigned int)v20 >= v19 )
      v20 = v19;
    LODWORD(Size) = v20;
    if ( v12 >= 0 )
    {
      v24 = (unsigned int)v20;
      if ( v14 + v20 + v8 + 2 > v10 )
        goto LABEL_41;
      v23 = (_BYTE *)(v8 + v14 + 2LL);
LABEL_32:
      memmove(v9, v23, v24);
      goto LABEL_17;
    }
    if ( v14 || (_DWORD)v20 != 4096 )
      break;
    if ( v18 )
    {
      v11 = LZNT1DecompressChunkNewThread((__int64)&Event, (unsigned __int64)v9, v26, v8 + 2, v17 + v8, v18);
      if ( v11 < 0 )
        goto LABEL_37;
      LODWORD(Size) = v18;
    }
    else
    {
      v11 = LZNT1DecompressChunk(v9, v26, (_BYTE *)(v8 + 2), v17 + v8, &Size);
      if ( v11 < 0 )
      {
LABEL_37:
        v25 = Size;
        goto LABEL_39;
      }
    }
LABEL_17:
    v14 = 0;
    v9 += (unsigned int)Size;
    v21 = v30 == (_DWORD)Size;
    v19 = v30 - Size;
    v30 -= Size;
    if ( v21 )
      goto LABEL_22;
    v8 += v17;
    if ( v8 > v10 - 2 )
      goto LABEL_22;
    v12 = *(_WORD *)v8;
    if ( !*(_WORD *)v8 )
      goto LABEL_22;
    v31 = 4096;
    v17 = (v12 & 0xFFF) + 3LL;
    if ( v8 + v17 > v10 )
      goto LABEL_41;
  }
  v11 = LZNT1DecompressChunk(a8, a8 + 4096, (_BYTE *)(v8 + 2), v17 + v8, &v31);
  if ( v11 >= 0 )
  {
    v23 = &a8[v14];
    if ( v31 - v14 < (unsigned int)Size )
    {
      memmove(v9, v23, v31 - v14);
      LODWORD(v9) = v31 - v14 + (_DWORD)v9;
LABEL_22:
      *a7 = (_DWORD)v9 - v29;
      goto LABEL_23;
    }
    v24 = (unsigned int)Size;
    goto LABEL_32;
  }
  v25 = v31;
LABEL_39:
  *a7 = v25;
LABEL_23:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v28 < 0 )
    return (unsigned int)HIDWORD(v28);
  return (unsigned int)v11;
}
