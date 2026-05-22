/*
 * XREFs of ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800AF88C
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800AC560 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800AE4AC (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 */

char __fastcall LampArrayDevice::RemoveViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  char v4; // si
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  LampArrayDevice::ViewClientListEntry *i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LampArrayDevice::ViewClientListEntry *v10; // rcx
  LampArrayDevice::ViewClientListEntry **v11; // rax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v13 = v5;
  for ( i = (LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 4);
        i != (LampArrayDevice *)((char *)this + 32);
        i = *(LampArrayDevice::ViewClientListEntry **)i )
  {
    v7 = *((_QWORD *)i + 2);
    if ( v7 == *(_QWORD *)a2 )
    {
      v8 = *((_QWORD *)this + 12);
      v9 = *((_QWORD *)i + 2);
      if ( v8 && v7 == *(_QWORD *)(v8 + 16) )
      {
        *((_QWORD *)this + 12) = 0LL;
        v4 = 1;
        v9 = *((_QWORD *)i + 2);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, *((_QWORD *)i + 4));
      v10 = *(LampArrayDevice::ViewClientListEntry **)i;
      v11 = (LampArrayDevice::ViewClientListEntry **)*((_QWORD *)i + 1);
      if ( *(LampArrayDevice::ViewClientListEntry **)(*(_QWORD *)i + 8LL) != i || *v11 != i )
        __fastfail(3u);
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      --*((_QWORD *)this + 6);
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(i);
      break;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v13);
  return v4;
}
