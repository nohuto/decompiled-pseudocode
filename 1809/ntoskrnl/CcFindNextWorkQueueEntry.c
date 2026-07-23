/*
 * XREFs of CcFindNextWorkQueueEntry @ 0x14011FE6C
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1E20 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcFindNextWorkQueueEntry(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned int v8; // eax

  v2 = (_QWORD *)*a2;
  v3 = 0LL;
  if ( (_QWORD *)*a2 == a2 )
    return v3;
  v4 = *((_BYTE *)v2 + 120);
  v3 = (_QWORD *)*a2;
  if ( v4 != 4 )
  {
    if ( v4 == 2 )
    {
      *(_QWORD *)(v2[2] + 496LL) = 0LL;
    }
    else if ( v4 == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v2[2] + 48LL) + 112LL) = 0LL;
    }
    goto LABEL_5;
  }
  v8 = *(_DWORD *)(a1 + 204);
  if ( v8 <= 1 && *(_DWORD *)(a1 + 304) <= 1u )
  {
LABEL_5:
    v5 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v2[1] = 0LL;
    *v2 = 0LL;
    return v3;
  }
  if ( !*(_BYTE *)(a1 + 312) )
  {
    *(_DWORD *)(a1 + 320) = v8;
    *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 304);
  }
  *(_BYTE *)(a1 + 312) = 1;
  return 0LL;
}
