/*
 * XREFs of ??0Lockable@@QEAA@XZ @ 0x1C0170020
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016EA28 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C00012A0 (-reset@-$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

Lockable *__fastcall Lockable::Lockable(Lockable *this)
{
  void **v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax

  *((_DWORD *)this + 2) = 0;
  v1 = (void **)((char *)this + 24);
  *(_QWORD *)this = &Lockable::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 1;
  v3 = operator new[](0x28uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    *((_DWORD *)v3 + 7) = 17;
    *((_DWORD *)v3 + 8) = 11;
  }
  auto_ptr<DXGFASTMUTEX>::reset(v1, v3);
  if ( *v1 )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdLowResource(v9);
    *((_DWORD *)this + 2) = -1073741801;
  }
  return this;
}
