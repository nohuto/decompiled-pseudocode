/*
 * XREFs of sub_180102590 @ 0x180102590
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180050F4C @ 0x180050F4C (sub_180050F4C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_180101F60 @ 0x180101F60 (sub_180101F60.c)
 *     sub_18010251C @ 0x18010251C (sub_18010251C.c)
 */

__int64 __fastcall sub_180102590(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS v5; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+30h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-41h]
  __int64 v17[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]

  v3 = 0;
  v5 = sub_18010251C((__int64)HeapHandle, 0, (PVOID *)&v13);
  v6 = v13;
  v18[0] = 524290LL;
  if ( v5 < 0 )
    v6 = 0LL;
  v18[1] = HeapHandle;
  v7 = HeapHandle[4] == -571548178;
  v13 = v6;
  if ( v7 )
  {
    v20 = *((_QWORD *)HeapHandle + 16) << 12;
    v20 += *((_QWORD *)HeapHandle + 11) << 12;
    v19 = *((_QWORD *)HeapHandle + 17) << 12;
    v6 = v13;
    v19 += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v19 = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 83);
    v20 = *((_QWORD *)HeapHandle + 71);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v17, 0, sizeof(v17));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++LODWORD(v6->Ptr);
    }
    RtlLockHeap(HeapHandle);
    while ( (int)sub_180050F4C((__int64)HeapHandle, (__int64)v17) >= 0 )
    {
      if ( (v17[2] & 0x10000) != 0 )
      {
        v14 = v17[0];
        v16 = v17[1];
        v15 = 0LL;
        if ( v6 )
        {
          v9 = sub_180101F60((__int64)v6, v17[0]);
          if ( v9 )
            v15 = *(_QWORD *)(v9 + 16);
        }
        else
        {
          v15 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v14, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v14 = 305450479LL;
    v16 = 0xFFFFFFFFLL;
    v15 = 0LL;
    v8 = v11(&v14, 24LL, v10);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --LODWORD(v6->Ptr);
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
