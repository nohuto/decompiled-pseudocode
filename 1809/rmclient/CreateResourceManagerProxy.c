/*
 * XREFs of CreateResourceManagerProxy @ 0x180001BBC
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001F68 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x180009984 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  int v1; // eax
  int v2; // ebx

  v0 = operator new(0x10uLL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
  }
  qword_1800226A8 = (__int64)v0;
  if ( v0 )
  {
    v1 = CempRpcBindToServer(&unk_1800134E0) | 0x10000000;
    v2 = 0;
    if ( v1 < 0 )
      v2 = v1;
    if ( v2 < 0 )
    {
      if ( qword_1800226A8 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_1800226A8)(qword_1800226A8, 1LL);
        qword_1800226A8 = 0LL;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
