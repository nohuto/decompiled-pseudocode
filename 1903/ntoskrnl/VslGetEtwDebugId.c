/*
 * XREFs of VslGetEtwDebugId @ 0x14028F70C
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406DABD0 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v8; // rbx
  NTSTATUS v9; // edi
  PVOID PoolWithTag; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-49h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  v8 = *a3;
  v9 = VslpLockPagesForTransfer((unsigned int)v12, (unsigned int)*a3, *a4, 2, 0);
  if ( v9 < 0 )
  {
LABEL_12:
    if ( v8 != *a3 && v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    while ( 1 )
    {
      v13[1] = *(_QWORD *)(a1 + 728);
      v13[4] = v12[7];
      v13[3] = v12[0];
      v13[2] = a2;
      v9 = VslpEnterIumSecureMode(2, 17LL, 0LL, (__int64)v13);
      VslpUnlockPagesForTransfer(v12);
      *a4 = v13[5];
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741789 )
        goto LABEL_10;
      if ( v8 != *a3 )
        ExFreePoolWithTag(v8, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a4, 0x54736D56u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
LABEL_10:
        if ( v9 < 0 )
          goto LABEL_12;
        break;
      }
      v9 = VslpLockPagesForTransfer((unsigned int)v12, (_DWORD)PoolWithTag, *a4, 2, 0);
      if ( v9 < 0 )
        goto LABEL_10;
    }
    *a3 = v8;
  }
  return (unsigned int)v9;
}
