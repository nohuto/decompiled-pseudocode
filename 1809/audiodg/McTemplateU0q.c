/*
 * XREFs of McTemplateU0q @ 0x1400327B4
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140013F48 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x140032758 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0q(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWrite(a1, (__int64)&EVT_AUDIOSRV_AUDIODG_READY, a3, 2, (__int64)v4);
}
