/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C0142B48
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C01425F4 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C0142ED8 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C01430E4 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C029C90C (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  __int64 v1; // rsi
  int v3; // edi
  unsigned int v4; // edi
  unsigned int v5; // edx
  unsigned int v6; // ebp
  int v7; // edx
  _DWORD *v9; // r8
  __int64 v10; // r9

  v1 = *((_QWORD *)this + 2);
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 )
    return 1LL;
  v4 = 8 * v3 + 24;
  v5 = v4 + *((_DWORD *)this + 1);
  v6 = v4;
  if ( v5 <= *(_DWORD *)this || (unsigned int)STACKOBJ::bExpand(this, v5) )
  {
    *(_QWORD *)(v1 + 16) = *((_QWORD *)this + 1);
    v7 = *((_DWORD *)this + 1);
    if ( !v7 )
    {
LABEL_4:
      *((_DWORD *)this + 1) = v7 + v6;
      *(_DWORD *)(v1 + 8) = v4;
      memmove(*((void **)this + 1), (const void *)v1, v4);
      return 1LL;
    }
    v9 = (_DWORD *)*((_QWORD *)this + 1);
    v10 = (unsigned int)v9[2];
    if ( *v9 != **((_DWORD **)this + 2) )
    {
      *((_QWORD *)this + 1) = (char *)v9 + v10;
      goto LABEL_4;
    }
    v4 = v10 + v4 - 24;
    v6 -= 24;
    if ( v4 <= *(_DWORD *)(*((_QWORD *)this + 3) + 8LL) || (unsigned int)STACKOBJ::bExpandScanline(this, v4, 1u) )
    {
      **((_DWORD **)this + 3) = **((_DWORD **)this + 2);
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL)
                                               + *(_DWORD *)(*((_QWORD *)this + 1) + 4LL);
      vMergeSpans(
        (struct _SPAN *)(*((_QWORD *)this + 1) + 24LL),
        (struct _SPAN *)(*((_QWORD *)this + 1) + 8 * (*(unsigned int *)(*((_QWORD *)this + 1) + 4LL) + 3LL)),
        (struct _SPAN *)(*((_QWORD *)this + 2) + 24LL),
        (struct _SPAN *)(*((_QWORD *)this + 2) + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 4LL) + 3LL)),
        (struct _SPAN *)(*((_QWORD *)this + 3) + 24LL));
      v7 = *((_DWORD *)this + 1);
      v1 = *((_QWORD *)this + 3);
      goto LABEL_4;
    }
  }
  return 0LL;
}
