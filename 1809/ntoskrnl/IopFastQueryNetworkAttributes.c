/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x14081DFF4
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x14081D600 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     FsRtlpCleanupEcps @ 0x14060C7E4 (FsRtlpCleanupEcps.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, ACCESS_MASK a2, char a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+130h] [rbp+30h] BYREF

  memset(v13, 0, sizeof(v13));
  v13[13] = a6;
  HIWORD(v13[8]) = 7;
  LODWORD(v13[0]) = 14680072;
  LODWORD(v13[8]) = a4 | 0x200000;
  v13[6] = a1;
  LODWORD(v13[11]) = 1;
  HIDWORD(v13[10]) = 1;
  BYTE1(v13[17]) = 1;
  BYTE3(v13[17]) = 1;
  v13[18] = &v14;
  memset(&v13[20], 0, 0x28uLL);
  LOWORD(v13[20]) = 40;
  v13[24] = 1LL;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  v13[24] = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (__int64)v13, v13[24], Handle);
  if ( v13[21] )
    FsRtlpCleanupEcps((struct _ECP_LIST *)v13[21]);
  if ( LODWORD(v13[4]) == -1096154543 )
  {
    *(_DWORD *)a5 = v13[2];
    *(_QWORD *)(a5 + 8) = v13[3];
  }
  else
  {
    if ( v10 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v10 = -1073741788;
    }
    *(_DWORD *)a5 = v10;
  }
  return 1;
}
