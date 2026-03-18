/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C0005390
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00052B0 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  char *v1; // rsi
  void *v3; // rax
  void *v4; // rax
  unsigned __int8 (__fastcall **v5)(char *); // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax

  v1 = (char *)this + 24;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  v3 = operator new[](4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)v1 + 3) = v3;
  if ( v3 )
  {
    memset(v3, 0, *((_QWORD *)v1 + 2));
    *((_DWORD *)v1 + 8) = 2;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v7);
    *((_DWORD *)v1 + 2) = -1073741801;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 10) = 4LL;
  *((_DWORD *)this + 24) = 1;
  v4 = operator new[](0x20uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 11) = v4;
  if ( v4 )
  {
    memset(v4, 0, 8LL * *((_QWORD *)this + 10));
    *((_DWORD *)this + 24) = 2;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v8);
    *((_DWORD *)this + 18) = -1073741801;
  }
  v5 = *(unsigned __int8 (__fastcall ***)(char *))v1;
  *((_DWORD *)this + 4) = 1;
  if ( (*v5)(v1) && (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v9 = *((_DWORD *)this + 8);
    if ( v9 >= 0 )
      v9 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 2) = v9;
  }
  return this;
}
