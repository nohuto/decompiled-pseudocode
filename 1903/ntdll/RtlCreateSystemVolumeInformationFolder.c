/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x180086610
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_1800868A8 @ 0x1800868A8 (sub_1800868A8.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  unsigned __int16 v2; // dx
  __int16 v3; // di
  _WORD *Heap; // rax
  unsigned __int16 v5; // ax
  int v6; // ebx
  void *ProcessHeap; // rcx
  struct _PEB *v8; // rcx
  __int64 v9; // r8
  _WORD v11[4]; // [rsp+60h] [rbp-29h] BYREF
  _WORD *v12; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v14[16]; // [rsp+80h] [rbp-9h] BYREF
  int v15; // [rsp+90h] [rbp+7h] BYREF
  __int64 v16; // [rsp+98h] [rbp+Fh]
  _WORD *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  __int64 v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  __int64 v21; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v2 = DestinationString.Length + *a1;
  v11[0] = v2;
  if ( v2 < *a1 || v2 < DestinationString.Length )
    return 3221225485LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v3 != 92 )
  {
    v2 += 2;
    v11[0] = v2;
  }
  v11[1] = v2 + 2;
  Heap = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(v2 + 2));
  v12 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, *((const void **)a1 + 1), *a1);
  v5 = *a1;
  v11[0] = *a1;
  if ( v3 != 92 )
  {
    v12[(unsigned __int64)v5 >> 1] = 92;
    v5 = v11[0] + 2;
    v11[0] += 2;
  }
  memmove((char *)v12 + v5, DestinationString.Buffer, DestinationString.Length);
  v11[0] += DestinationString.Length;
  v12[(unsigned __int64)v11[0] >> 1] = 0;
  v6 = sub_1800868A8(&v22, &v23);
  if ( v6 < 0 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v12;
  }
  else
  {
    v17 = v11;
    v15 = 48;
    v16 = 0LL;
    v18 = 576;
    v19 = v22;
    v20 = 0LL;
    if ( (int)ZwCreateFile(&v21, 0x10000LL, &v15, v14, 0LL, 0, 7, 1, 2101344, 0LL, 0) >= 0 )
      ZwClose(v21);
    v6 = ZwCreateFile(&v21, 1966080LL, &v15, v14, 0LL, 6, 7, 3, 33, 0LL, 0);
    if ( v6 < 0 )
    {
      sub_1800862C4((__int64)v11);
      v6 = ZwCreateFile(&v21, 1966080LL, &v15, v14, 0LL, 6, 7, 3, 33, 0LL, 0);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v6 < 0 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v23);
      v8 = NtCurrentPeb();
      v9 = v22;
    }
    else
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v22);
      v6 = sub_180086A04(v21, v23);
      ZwClose(v21);
      v8 = NtCurrentPeb();
      v9 = v23;
    }
  }
  RtlFreeHeap((__int64)v8->ProcessHeap, 0, v9);
  return (unsigned int)v6;
}
