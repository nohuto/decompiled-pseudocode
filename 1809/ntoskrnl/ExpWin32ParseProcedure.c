/*
 * XREFs of ExpWin32ParseProcedure @ 0x1406BA7E0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall ExpWin32ParseProcedure(
        int *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD v11[3]; // [rsp+20h] [rbp-50h] BYREF
  char v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+3Ch] [rbp-34h]
  __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+28h] BYREF

  v19 = *a1;
  v13 = a5;
  v14 = a6;
  v15 = a7;
  v16 = a8;
  v11[2] = a3;
  v17 = a9;
  v11[0] = a1;
  v11[1] = a2;
  v12 = a4;
  v18 = a10;
  return PsInvokeWin32Callout(15, (__int64)v11, 1, (__int64)&v19);
}
