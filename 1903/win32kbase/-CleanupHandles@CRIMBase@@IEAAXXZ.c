/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00995E0
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C0099570 (CleanupSensorExplicitly.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0099690 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 */

void __fastcall CRIMBase::CleanupHandles(CRIMBase *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  CRIMBase *v7; // rcx

  v1 = (CRIMBase *)((char *)this + 152);
  v3 = (CRIMBase *)((char *)this + 1176);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 64);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 != -1 )
  {
    RIMUnregisterForInput(v4);
    ObCloseHandle(*((HANDLE *)this + 1), 1);
    *((_QWORD *)this + 1) = -1LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 && v6 != *((_QWORD *)this + 9) )
  {
    Win32FreePool(v6);
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = (CRIMBase *)*((_QWORD *)this + 9);
  if ( v7 != (CRIMBase *)((char *)this + 80) )
  {
    Win32FreePool((__int64)v7);
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( *((_QWORD *)this + 8) )
      *((_QWORD *)this + 8) = 0LL;
  }
}
