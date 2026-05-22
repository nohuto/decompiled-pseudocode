/*
 * XREFs of ?NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z @ 0x1800A7534
 * Callers:
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800AB470 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

__int64 __fastcall WGIRawInputProvider::NotifyExternalDeviceFault(
        struct _RTL_CRITICAL_SECTION *this,
        const struct _ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS *a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  LONG *p_LockCount; // r9
  LONG *v8; // rax
  unsigned __int64 i; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  HANDLE *p_LockSemaphore; // rdx
  char v15; // al
  struct _RTL_CRITICAL_SECTION *v17[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v18[12]; // [rsp+40h] [rbp-78h] BYREF

  v3 = this + 9;
  EnterCriticalSection(this + 9);
  p_LockCount = &this[4].LockCount;
  v17[0] = v3;
  v8 = &this[4].LockCount;
  for ( i = 0LL; i < 8; ++i )
  {
    if ( *(_QWORD *)v8 == a3 )
    {
      v10 = 3 * i;
      *((_QWORD *)&this[4].OwningThread + v10) = *(_QWORD *)a2;
      *((_WORD *)&this[4].LockSemaphore + 4 * v10) = *((_WORD *)a2 + 4);
      *((_BYTE *)&this[4].LockSemaphore + 8 * v10 + 2) = *((_BYTE *)a2 + 10);
      goto LABEL_11;
    }
    v8 += 6;
  }
  v11 = 0LL;
  while ( *(_QWORD *)p_LockCount )
  {
    ++v11;
    p_LockCount += 6;
    if ( v11 >= 8 )
      goto LABEL_11;
  }
  v12 = 3 * v11;
  *((_QWORD *)&this[4].OwningThread + v12) = *(_QWORD *)a2;
  *((_WORD *)&this[4].LockSemaphore + 4 * v12) = *((_WORD *)a2 + 4);
  *((_BYTE *)&this[4].LockSemaphore + 8 * v12 + 2) = *((_BYTE *)a2 + 10);
  *((_QWORD *)&this[4].LockCount + 3 * v11) = a3;
LABEL_11:
  if ( (*((_BYTE *)a2 + 8) & 0xC) != 0 || (*((_BYTE *)a2 + 9) & 0xC) != 0 || (*((_BYTE *)a2 + 10) & 2) != 0 )
  {
    v13 = 0LL;
    p_LockSemaphore = &this[4].LockSemaphore;
    do
    {
      v18[v13] = *(p_LockSemaphore - 2);
      v15 = *(_BYTE *)p_LockSemaphore;
      p_LockSemaphore += 3;
      *((_BYTE *)&v18[8] + v13) = v15;
      *((_BYTE *)&v18[9] + v13) = *((_BYTE *)p_LockSemaphore - 23);
      *((_BYTE *)&v18[10] + v13++) = *((_BYTE *)p_LockSemaphore - 22);
    }
    while ( v13 < 8 );
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v17);
    RtlPublishWnfStateData(WNF_ISM_GAMECONTROLLER_ZEPHYRUS_FAULT, 0LL, v18, 88LL, 0LL);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v17);
  return 0LL;
}
