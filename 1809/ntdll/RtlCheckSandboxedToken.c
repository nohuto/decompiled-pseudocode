/*
 * XREFs of RtlCheckSandboxedToken @ 0x180071FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180044F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180044FD0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x180045030 (RtlCreateSecurityDescriptor.c)
 *     RtlFreeSid @ 0x180072300 (RtlFreeSid.c)
 *     RtlAllocateAndInitializeSid @ 0x180072340 (RtlAllocateAndInitializeSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180072900 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A02E0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x1800A0760 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1800A0B20 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x1800A2710 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlCheckSandboxedToken(HANDLE a1, bool *a2)
{
  HANDLE v3; // r14
  int v4; // ebx
  int v5; // eax
  __int64 Heap; // rax
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v13; // [rsp+64h] [rbp-9Ch]
  int v14; // [rsp+68h] [rbp-98h] BYREF
  __int16 v15; // [rsp+6Ch] [rbp-94h]
  HANDLE v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  int v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+84h] [rbp-7Ch] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v23[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  int v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _DWORD *v30; // [rsp+D0h] [rbp-30h]
  _BYTE v31[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v32[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v33; // [rsp+108h] [rbp+8h]
  _BYTE v34[56]; // [rsp+110h] [rbp+10h] BYREF

  v13 = 4096;
  v12 = 0;
  v14 = 0;
  v3 = a1;
  v15 = 1280;
  v4 = 0;
  v16 = 0LL;
  *a2 = 0;
  v17 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    v16 = a1;
  }
  else
  {
    v5 = NtOpenThreadToken(-2LL, 8LL, 0LL, &v16);
    a1 = v16;
    v4 = v5;
  }
  if ( !a1 )
  {
    if ( v4 == -1073741700 )
    {
      v4 = NtOpenProcessToken(-1LL, 10LL, &Handle);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v30 = v32;
      v25 = 48;
      v26 = 0LL;
      v28 = 0;
      v27 = 0LL;
      v29 = 0LL;
      v32[0] = 12;
      v32[1] = 2;
      v33 = 1;
      v4 = NtDuplicateToken(Handle, 12LL, &v25, 0LL, 2, &v16);
      NtClose(Handle);
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_8;
  }
  v4 = NtQueryInformationToken(a1, 9LL, &v18, 4LL, v23);
  if ( v4 >= 0 )
  {
    if ( v18 >= 2 )
    {
LABEL_8:
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, 0x20u, 2);
        LOBYTE(v8) = 1;
        v4 = RtlAllocateAndInitializeSid((unsigned int)&v12, v8, 0x2000, 0, 0, 0, 0, 0, 0, 0, (__int64)&v21);
        if ( v4 >= 0 )
        {
          LOBYTE(v9) = 1;
          v4 = RtlAllocateAndInitializeSid((unsigned int)&v14, v9, 18, 0, 0, 0, 0, 0, 0, 0, (__int64)&v17);
          if ( v4 >= 0 )
          {
            RtlAddMandatoryAce(v7, 2, 0, v21, 17, 2);
            RtlCreateSecurityDescriptor(v31, 1);
            LOBYTE(v10) = 1;
            RtlSetSaclSecurityDescriptor(v31, v10, v7, 0LL);
            RtlSetOwnerSecurityDescriptor((__int64)v31, v17, 0);
            RtlSetGroupSecurityDescriptor((__int64)v31, v17, 0);
            v19 = 56;
            v4 = ZwAccessCheck(v31, v16, 0x20000LL, &RtlpRestrictedMapping, v34, &v19, v24, &v20);
            if ( v4 >= 0 )
              *a2 = v20 < 0;
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( v21 )
          RtlFreeSid();
        if ( v17 )
          RtlFreeSid();
      }
      else
      {
        v4 = -1073741801;
      }
      goto LABEL_17;
    }
    v4 = -1073741659;
  }
LABEL_17:
  if ( !v3 && v16 )
    NtClose(v16);
  return (unsigned int)v4;
}
