/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x14031E0E0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v9; // eax
  int v10; // ebx
  size_t v11; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, _QWORD); // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, int *); // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+3Ch] [rbp-3Ch]

  *a4 = 0LL;
  v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a3 + 64);
  v19 = 0LL;
  v9 = v5(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v19);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !v19 )
      return (unsigned int)-1073741823;
    v11 = v19 + 120;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 120, 0x65447845u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
    v13[6] = 1;
    *((_QWORD *)v13 + 2) = a1;
    *((_OWORD *)v13 + 2) = *(_OWORD *)a3;
    *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v13 + 4) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v13 + 5) = *(_OWORD *)(a3 + 48);
    *((_QWORD *)v13 + 12) = *(_QWORD *)(a3 + 64);
    v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD))*((_QWORD *)v13 + 12);
    v15 = *((_QWORD *)v13 + 5);
    *((_QWORD *)v13 + 13) = v13 + 30;
    v10 = v14(v15, v19, v13 + 30, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    v16 = (__int64 (__fastcall *)(_QWORD, int *))*((_QWORD *)v13 + 8);
    if ( v16 )
    {
      v10 = v16(*((_QWORD *)v13 + 5), &v20);
      if ( v10 >= 0 )
      {
        if ( (v20 & 7) == 7 && 1 << (v21 & 0x1F) >= (unsigned int)ExpSvmAgents )
        {
          _InterlockedIncrement(&ExTbFlushActive);
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, _DWORD *))HalIommuDispatch[3])(
                  a2,
                  *((_QWORD *)v13 + 13),
                  &v20,
                  v13 + 28);
          if ( v10 >= 0 )
          {
            v10 = (*((__int64 (__fastcall **)(_QWORD, int *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))v13
                   + 9))(
                    *((_QWORD *)v13 + 5),
                    &v20,
                    ExSvmDevicePowerCallback,
                    *((_QWORD *)v13 + 14));
            if ( v10 < 0 )
              goto LABEL_21;
            (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
            v17 = ExpSvmDevices;
            if ( *(__int64 **)(ExpSvmDevices + 8) != &ExpSvmDevices )
              __fastfail(3u);
            *(_QWORD *)v13 = ExpSvmDevices;
            *((_QWORD *)v13 + 1) = &ExpSvmDevices;
            *(_QWORD *)(v17 + 8) = v13;
            ExpSvmDevices = (__int64)v13;
            *a4 = v13;
          }
          else
          {
            _InterlockedDecrement(&ExTbFlushActive);
          }
        }
        else
        {
          v10 = -1073741585;
        }
        if ( v10 >= 0 )
          return (unsigned int)v10;
      }
    }
    else
    {
      v10 = -1073741637;
    }
LABEL_21:
    if ( *((_QWORD *)v13 + 14) )
    {
      ((void (__fastcall *)(__int64))HalIommuDispatch[7])(a2);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
