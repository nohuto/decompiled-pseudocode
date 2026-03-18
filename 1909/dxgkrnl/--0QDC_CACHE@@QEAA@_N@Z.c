/*
 * XREFs of ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C01703B4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C016DDBC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

QDC_CACHE *__fastcall QDC_CACHE::QDC_CACHE(QDC_CACHE *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *(_BYTE *)this = 1;
  memset((char *)this + 16, 0, 0x240uLL);
  v2 = operator new[](0x28uLL, 0x43434451u, (POOL_TYPE)512);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 7) = 69;
    *((_DWORD *)v2 + 8) = 1;
  }
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    *(_BYTE *)this = 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = 168LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return this;
}
