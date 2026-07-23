/*
 * XREFs of VslGetEtwDebugId @ 0x14027B3DC
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406BB350 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v4; // rbx
  NTSTATUS v9; // edi
  PVOID PoolWithTag; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+88h] [rbp-A0h]
  __int64 v15; // [rsp+90h] [rbp-98h]
  __int64 v16; // [rsp+98h] [rbp-90h]
  __int64 v17; // [rsp+A0h] [rbp-88h]
  unsigned int v18; // [rsp+A8h] [rbp-80h]

  v4 = *a3;
  v9 = VslpLockPagesForTransfer((unsigned int)v12, (unsigned int)*a3, *a4, 2, 0);
  if ( v9 < 0 )
  {
LABEL_12:
    if ( v4 != *a3 && v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 720);
      v17 = v12[7];
      v16 = v12[0];
      v15 = a2;
      v9 = VslpEnterIumSecureMode(2u, 17LL, 0, (__int64)v13);
      VslpUnlockPagesForTransfer(v12);
      *a4 = v18;
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741789 )
        goto LABEL_10;
      if ( v4 != *a3 )
        ExFreePoolWithTag(v4, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a4, 0x54736D56u);
      v4 = PoolWithTag;
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
    *a3 = v4;
  }
  return (unsigned int)v9;
}
