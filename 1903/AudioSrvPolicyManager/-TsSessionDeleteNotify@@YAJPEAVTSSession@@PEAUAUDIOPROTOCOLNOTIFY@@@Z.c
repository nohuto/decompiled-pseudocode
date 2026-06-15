/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180024F9C
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025500 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x1800274E0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  __int64 *v2; // rax
  unsigned int v3; // ebx
  struct AUDIOPROTOCOLNOTIFY *v4; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdx

  v2 = (__int64 *)*((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = 0LL;
  do
  {
    v6 = v2;
    if ( !v2 )
      break;
    v4 = (struct AUDIOPROTOCOLNOTIFY *)v2[2];
    v2 = (__int64 *)*v2;
  }
  while ( v4 != a2 );
  if ( v6 )
  {
    v7 = *v6;
    if ( v6 == *((__int64 **)a1 + 2) )
      *((_QWORD *)a1 + 2) = v7;
    else
      *(_QWORD *)v6[1] = v7;
    v8 = (_QWORD *)v6[1];
    if ( v6 == *((__int64 **)a1 + 3) )
      *((_QWORD *)a1 + 3) = v8;
    else
      *(_QWORD *)(*v6 + 8) = v8;
    --*((_DWORD *)a1 + 8);
    *v6 = 0LL;
    v6[1] = 0LL;
    operator delete(v6, (const struct std::nothrow_t *)0x18);
    operator delete(v4, (const struct std::nothrow_t *)4);
  }
  else
  {
    return 1168;
  }
  return v3;
}
