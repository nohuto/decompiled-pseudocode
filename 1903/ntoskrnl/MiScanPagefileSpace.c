/*
 * XREFs of MiScanPagefileSpace @ 0x14088D120
 * Callers:
 *     <none>
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14015CD6C (MiDereferencePageRuns.c)
 *     MiLockPage @ 0x1402D8FA4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402D8FF8 (MiUnlockPage.c)
 */

void __fastcall MiScanPagefileSpace(__int64 a1)
{
  __int16 v1; // bx
  int v2; // ebp
  _DWORD *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdi
  char v8; // cl
  __int64 v9; // r10
  char v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // r13
  char v13; // dl
  char v14; // r10
  __int64 v15; // rcx
  __int16 v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h]
  _DWORD *v18; // [rsp+70h] [rbp+18h]

  v1 = *(_WORD *)a1;
  v16 = *(_WORD *)a1;
  v2 = 0;
  v17 = 0;
  v4 = (_DWORD *)MiReferencePageRuns(a1, 0);
  v18 = v4;
  do
  {
    v5 = 48LL * *(_QWORD *)&v4[4 * v2 + 4] - 0x58000000000LL;
    v6 = v5 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
    if ( v5 < v6 )
    {
      v7 = v5 + 16;
      do
      {
        if ( (((unsigned int)HIDWORD(*(_QWORD *)(v7 + 24)) >> 8) & 0x3FF) == v1 )
        {
          v8 = *(_BYTE *)(v7 + 18) & 7;
          if ( ((v8 - 2) & 0xFA) == 0
            && v8 != 6
            && (*(_DWORD *)v7 & 0x400LL) == 0
            && (unsigned int)MiGetPagingFileOffset(v7)
            && (v9 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
            && *(_WORD *)(v7 + 16)
            && (v10 & 0x28) == 0
            && (*(_BYTE *)(v7 + 19) & 0x10) == 0 )
          {
            v11 = 0LL;
            v12 = MiLockPage(v5);
            v13 = *(_BYTE *)(v7 + 18) & 7;
            if ( ((v13 - 2) & 0xFA) == 0
              && v13 != 6
              && (*(_DWORD *)v7 & 0x400LL) == 0
              && (unsigned int)MiGetPagingFileOffset(v7)
              && (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
              && *(_WORD *)(v7 + 16)
              && (((v14 & 0x28) == 0) & (unsigned __int8)~(*(_BYTE *)(v7 + 19) >> 4)) != 0 )
            {
              v11 = MiCaptureDirtyBitToPfn(v5);
            }
            MiUnlockPage(v5, v12);
            if ( v11 )
              MiReleasePageFileInfo(a1, v11, 0);
            v1 = v16;
          }
        }
        v5 += 48LL;
        v7 += 48LL;
      }
      while ( v5 < v6 );
      v2 = v17;
      v4 = v18;
    }
    v17 = ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  v15 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 976) = 0LL;
  PsDereferencePartition(v15);
}
