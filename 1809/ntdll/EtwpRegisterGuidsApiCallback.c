/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x180085380
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rax
  __int128 v14; // xmm0
  unsigned int (__fastcall *v15)(_QWORD, __int64, int *, _QWORD *); // r10
  __int64 v16; // rdx
  int v18; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[6]; // [rsp+38h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a2 + 248);
  v7 = 0;
  memset(v19, 0, sizeof(v19));
  v11 = *(_DWORD *)(a1 + 112);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v12 = 4;
    }
    else
    {
      if ( v11 != 2 )
        return 0LL;
      v12 = 10;
    }
  }
  else
  {
    v12 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  if ( !a3 && v3 && v12 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    EtwpAcquireGuidEntryExclusive(v3, v8, v9, v10);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(a1 + 104);
    *(_DWORD *)(v3 + 160) = v11;
    *(_DWORD *)(v3 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 40));
  }
  v13 = *(_QWORD *)(a2 + 56);
  v14 = *(_OWORD *)(a1 + 40);
  v15 = *(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))v13;
  v16 = *(_QWORD *)(v13 + 8);
  v19[1] = *(_QWORD *)(a1 + 104);
  LODWORD(v19[0]) = 48;
  HIDWORD(v19[0]) = v12;
  v18 = 48;
  *(_OWORD *)&v19[3] = v14;
  if ( v15 )
    return v15(v12, v16, &v18, v19);
  return v7;
}
