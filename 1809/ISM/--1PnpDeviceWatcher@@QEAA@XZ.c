/*
 * XREFs of ??1PnpDeviceWatcher@@QEAA@XZ @ 0x180070324
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800703F8 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800713A4 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PnpDeviceWatcher::~PnpDeviceWatcher(PnpDeviceWatcher *this)
{
  PnpDeviceWatcher::RetryDeviceListEntry *i; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v3; // rax
  __int64 v4; // rdx
  PnpDeviceWatcher::RetryDeviceListEntry **v5; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v6; // rax
  PnpDeviceWatcher::RetryDeviceListEntry **v7; // rcx
  HSTRING *j; // rbx
  HSTRING *v9; // rdi
  HSTRING v10; // rax

  for ( i = (PnpDeviceWatcher *)((char *)this + 80); ; --*((_QWORD *)i + 2) )
  {
    v3 = *(PnpDeviceWatcher::RetryDeviceListEntry **)i;
    v4 = **(_QWORD **)i;
    if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)i + 8LL) != i
      || *(PnpDeviceWatcher::RetryDeviceListEntry **)(v4 + 8) != v3 )
    {
LABEL_18:
      __fastfail(3u);
    }
    *(_QWORD *)i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v3, v4);
  }
  v5 = (PnpDeviceWatcher::RetryDeviceListEntry **)((char *)this + 56);
  while ( 1 )
  {
    v6 = *v5;
    v7 = *(PnpDeviceWatcher::RetryDeviceListEntry ***)*v5;
    if ( *((PnpDeviceWatcher::RetryDeviceListEntry ***)*v5 + 1) != v5 || v7[1] != v6 )
      goto LABEL_18;
    *v5 = (PnpDeviceWatcher::RetryDeviceListEntry *)v7;
    v7[1] = (PnpDeviceWatcher::RetryDeviceListEntry *)v5;
    if ( v6 == (PnpDeviceWatcher::RetryDeviceListEntry *)v5 )
      break;
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v6, v4);
    --*((_QWORD *)this + 9);
  }
  for ( j = (HSTRING *)((char *)this + 32); ; j[2] = (HSTRING)((char *)j[2] - 1) )
  {
    v9 = (HSTRING *)*j;
    v10 = *(HSTRING *)*j;
    if ( *((HSTRING **)*j + 1) != j || *((HSTRING **)v10 + 1) != v9 )
      goto LABEL_18;
    *j = v10;
    *((_QWORD *)v10 + 1) = j;
    if ( v9 == j )
      break;
    WindowsDeleteString(v9[4]);
    v9[4] = 0LL;
    operator delete(v9, (const struct std::nothrow_t *)0x28);
  }
}
