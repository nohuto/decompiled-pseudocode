/*
 * XREFs of ndisMQueueOidRequest @ 0x1C006B644
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FA74 (ndisQueueRestoreRequestsOnTop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMQueueOidRequest(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned int v3; // r8d
  _QWORD *v4; // rax
  _QWORD *i; // rcx
  _QWORD *v6; // rcx

  *(_QWORD *)(a2 + 80) = 0LL;
  v2 = (_QWORD *)(a2 + 72);
  v3 = -1073741823;
  *v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 124) & 0x100) == 0 )
  {
    v4 = (_QWORD *)(a1 + 2192);
    for ( i = *(_QWORD **)(a1 + 2192); i != v4; i = (_QWORD *)*i )
    {
      if ( i == v2 )
        return v3;
    }
    v6 = (_QWORD *)v4[1];
    v3 = 0;
    if ( (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v2 = v4;
    v2[1] = v6;
    *v6 = v2;
    v4[1] = v2;
  }
  return v3;
}
