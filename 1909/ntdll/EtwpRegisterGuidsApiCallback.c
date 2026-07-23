/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x180007A48
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x18000AA3C (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18000AD08 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpAcquireGuidEntryExclusive @ 0x1800062DC (EtwpAcquireGuidEntryExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v7; // ebx
  int v8; // r15d
  unsigned int v9; // esi
  __int64 v10; // rax
  __int128 v11; // xmm0
  unsigned int (__fastcall *v12)(_QWORD, __int64, int *, _QWORD *); // r10
  __int64 v13; // rdx
  int v15; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[6]; // [rsp+38h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a2 + 248);
  v7 = 0;
  memset(v16, 0, sizeof(v16));
  v8 = *(_DWORD *)(a1 + 112);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = 4;
    }
    else
    {
      if ( v8 != 2 )
        return 0LL;
      v9 = 10;
    }
  }
  else
  {
    v9 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  if ( !a3 && v3 && v9 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    EtwpAcquireGuidEntryExclusive(v3);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(a1 + 104);
    *(_DWORD *)(v3 + 160) = v8;
    *(_DWORD *)(v3 + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 40));
  }
  v10 = *(_QWORD *)(a2 + 56);
  v11 = *(_OWORD *)(a1 + 40);
  v12 = *(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))v10;
  v13 = *(_QWORD *)(v10 + 8);
  v16[1] = *(_QWORD *)(a1 + 104);
  LODWORD(v16[0]) = 48;
  HIDWORD(v16[0]) = v9;
  v15 = 48;
  *(_OWORD *)&v16[3] = v11;
  if ( v12 )
    return v12(v9, v13, &v15, v16);
  return v7;
}
