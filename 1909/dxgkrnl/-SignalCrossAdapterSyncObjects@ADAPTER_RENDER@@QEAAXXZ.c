/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F67A8
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02448A4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0036F28 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this, __int64 a2)
{
  PERESOURCE *Global; // rax
  __int64 v4; // rdx
  __int64 *i; // rbx
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v7, Global);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v7, v4);
  for ( i = (__int64 *)*((_QWORD *)this + 24); i != (__int64 *)((char *)this + 192) && i; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 26) )
    {
      v6 = i[4];
      v8 = -1LL;
      v9 = v6;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL)
                                                                                                + 640LL))(
        0LL,
        0LL,
        0LL,
        0LL,
        1,
        &v9,
        0,
        &v8);
    }
  }
  if ( v7[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v7);
}
