/*
 * XREFs of UsbhPdoCheckBootDeviceReady @ 0x1C005B4C0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 */

char __fastcall UsbhPdoCheckBootDeviceReady(__int64 a1)
{
  char v1; // si
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  int v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int16 v12; // [rsp+48h] [rbp-18h]

  v1 = 0;
  v9 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v2 = PdoExt(a1);
  v3 = *((_QWORD *)v2 + 148);
  FdoExt(v3);
  WORD2(v11) = 4;
  HIWORD(v11) = *((_WORD *)v2 + 714);
  LODWORD(v9) = 163;
  WORD2(v9) = *((_WORD *)v2 + 714);
  HIWORD(v9) = 4;
  if ( (int)UsbhSyncSendCommand(v3, (__int64)&v9, (__int64)&v11, (_WORD *)&v11 + 2, v8, &v10) < 0 )
    goto LABEL_9;
  v4 = v2[686];
  if ( v4 == -1 || (v5 = v2[687], v5 == -1) )
  {
    if ( (BYTE2(v11) & 1) == v4 )
    {
LABEL_9:
      KeSetEvent((PRKEVENT)v2 + 115, 0, 0);
      return 1;
    }
    v6 = (v11 & 1) == v2[687];
  }
  else
  {
    if ( (BYTE2(v11) & 1) != v4 )
      return v1;
    v6 = (v11 & 1) == v5;
  }
  if ( v6 )
    goto LABEL_9;
  return v1;
}
