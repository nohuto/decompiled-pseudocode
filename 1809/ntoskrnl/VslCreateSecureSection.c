/*
 * XREFs of VslCreateSecureSection @ 0x1408192F0
 * Callers:
 *     <none>
 * Callees:
 *     MmSizeOfMdl @ 0x14011A7B0 (MmSizeOfMdl.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  SIZE_T v10; // rax
  NTSTATUS v11; // ebx
  _QWORD v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+88h] [rbp-A0h]
  int v15; // [rsp+90h] [rbp-98h]
  __int64 v16; // [rsp+98h] [rbp-90h]
  __int64 v17; // [rsp+A0h] [rbp-88h]
  __int64 v18; // [rsp+A8h] [rbp-80h]

  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((*(_DWORD *)(a3 + 40) & 0xFFF) != 0 || *(_DWORD *)(a3 + 44)) )
    return 3221225713LL;
  v10 = MmSizeOfMdl((PVOID)*(unsigned int *)(a3 + 44), *(unsigned int *)(a3 + 40));
  if ( v10 > 0xFFFFFFFF )
    return 3221225713LL;
  result = VslpLockPagesForTransfer((__int64)v12, a3, v10, 0, 0);
  if ( (int)result >= 0 )
  {
    v16 = v12[0];
    v18 = v12[7];
    v14 = *(_QWORD *)(a2 + 720);
    v15 = a4;
    v11 = VslpEnterIumSecureMode(2u, 58LL, 0, (__int64)v13);
    VslpUnlockPagesForTransfer((__int64)v12);
    if ( v11 >= 0 )
      *a1 = v17;
    return (unsigned int)v11;
  }
  return result;
}
