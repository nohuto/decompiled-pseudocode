/*
 * XREFs of ??_ECursorManager@@MEAAPEAXI@Z @ 0x1800D9684
 * Callers:
 *     ??_ECursorManager@@OBA@EAAPEAXI@Z @ 0x1800DA100 (--_ECursorManager@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180010148 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CursorManager *__fastcall CursorManager::`vector deleting destructor'(CursorManager *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  MessageProxyReconnectAdapter *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CursorManager::`vftable'{for `ICursorManager'};
  *((_QWORD *)this + 1) = &CursorManager::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 2) = &CursorManager::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_QWORD *)this + 8) )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v13) >= 0 )
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v13 + 48LL))(
        v13,
        L"System\\Input\\CursorManagerEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 144LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v7 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    MessageProxyReconnectAdapter::Dispose(v7);
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
