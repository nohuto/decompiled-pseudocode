/*
 * XREFs of MiPfExecuteReadList @ 0x14066395C
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiReferenceInPageFile @ 0x14001CAC8 (MiReferenceInPageFile.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiPageRead @ 0x1400DE78C (MiPageRead.c)
 *     SmPageRead @ 0x14014F88C (SmPageRead.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // r12
  __int64 v6; // rbx
  int result; // eax
  char v8; // r13
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+88h] [rbp+10h]
  unsigned int v14; // [rsp+90h] [rbp+18h]

  v14 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 96;
  v6 = *(_QWORD *)(a1 + 96);
  result = a2 & 2;
  v8 = 0;
  v13 = result;
  if ( v6 != a1 + 96 )
  {
    v9 = a2 & 1;
    do
    {
      v10 = *(_QWORD *)(v6 + 256);
      *(_WORD *)(v10 + 10) |= 0x42u;
      *(_DWORD *)(v6 + 184) = *(_DWORD *)(v10 + 40);
      v11 = MiReferenceInPageFile(v6, a3);
      LODWORD(v12) = v11;
      if ( v11 )
        *(_QWORD *)(v6 + 200) = v11;
      else
        v12 = *(_QWORD *)(v6 + 200);
      *(_QWORD *)(v6 + 168) = 0LL;
      *(_QWORD *)(v6 + 232) = *(_QWORD *)(v6 + 240);
      if ( v9 )
      {
        v8 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( (*(_DWORD *)(v6 + 192) & 0x100) != 0 )
        result = SmPageRead(
                   (union _MM_STORE_KEY *)(v6 + 96),
                   (v6 + 272) | ((-(__int64)(v13 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3));
      else
        result = MiPageRead(v12, v10, (int)v6 + 96, (int)v6 + 32, v6 + 80, 6, a4);
      if ( v9 )
        BYTE4(CurrentThread[1].Queue) = v8;
      if ( result < 0 )
      {
        *(_QWORD *)(v6 + 88) = 0LL;
        *(_DWORD *)(v6 + 80) = result;
        result = KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
      }
      v6 = *(_QWORD *)v6;
      a3 = v14;
    }
    while ( v6 != v5 );
  }
  return result;
}
