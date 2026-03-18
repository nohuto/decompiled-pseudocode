/*
 * XREFs of ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C015557C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

QDC_CACHE *__fastcall QDC_CACHE::QDC_CACHE(QDC_CACHE *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *(_BYTE *)this = 1;
  memset((char *)this + 16, 0, 0x240uLL);
  v2 = operator new(0x28uLL, 0x43434451u, (POOL_TYPE)512);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    v2[2] = 0LL;
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
    v5 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v5 + 24) = 169LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
