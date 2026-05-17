/*
 * XREFs of sub_180076A04 @ 0x180076A04
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180076540 (RtlSetCurrentDirectory_U.c)
 *     sub_180076888 @ 0x180076888 (sub_180076888.c)
 *     sub_180076994 @ 0x180076994 (sub_180076994.c)
 * Callees:
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D000 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180076A04(unsigned __int16 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v7; // r15d
  int VolumeInformationFile; // ebx
  __int64 Heap; // rax
  __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  _BYTE v13[4]; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h]
  unsigned __int16 v15; // [rsp+48h] [rbp-21h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  _BYTE v17[16]; // [rsp+58h] [rbp-11h] BYREF
  int v18; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  unsigned __int16 *v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+80h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+1Fh]
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = (unsigned int)a2;
  result = sub_180029BCC(0, a2, (__m128i *)a1, 0LL, &v15, 0LL);
  if ( (int)result < 0 )
    return result;
  v7 = MEMORY[0x7FFE02DC];
  v18 = 48;
  v20 = &v15;
  v19 = 0LL;
  v21 = 64;
  v22 = 0LL;
  VolumeInformationFile = ZwOpenFile(&v23, 1048608LL, &v18, v17, 3, 33);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  if ( VolumeInformationFile < 0 )
    return (unsigned int)VolumeInformationFile;
  VolumeInformationFile = ZwQueryVolumeInformationFile(v23, v17, v13, 8LL, 4);
  if ( VolumeInformationFile < 0 )
  {
LABEL_12:
    ZwClose(v23);
    return (unsigned int)VolumeInformationFile;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4 + 48);
  v10 = Heap;
  if ( !Heap )
  {
    VolumeInformationFile = -1073741801;
    goto LABEL_12;
  }
  v11 = v14;
  *(_QWORD *)(Heap + 8) = v23;
  *(_QWORD *)(Heap + 32) = Heap + 48;
  *(_DWORD *)Heap = 1;
  *(_WORD *)(Heap + 26) = v4;
  *(_DWORD *)(Heap + 16) = v7;
  *(_DWORD *)(Heap + 40) = v11;
  memmove((void *)(Heap + 48), *((const void **)a1 + 1), *a1);
  *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  *(_WORD *)(v10 + 24) = *a1;
  v12 = (unsigned __int64)*a1 >> 1;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v12 - 2) != 92 )
  {
    if ( (unsigned __int64)*a1 + 4 > *(unsigned __int16 *)(v10 + 26) )
    {
      ZwClose(v23);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      return 3221225734LL;
    }
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * v12) = 92;
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
    *(_WORD *)(v10 + 24) += 2;
  }
  *a3 = v10;
  return 0LL;
}
