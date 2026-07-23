/*
 * XREFs of EtwpTraceImageRundown @ 0x1407419EC
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceImageRundown(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        int a4,
        __int64 a5,
        char a6,
        char a7)
{
  unsigned __int16 v7; // r10
  __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _QWORD v13[2]; // [rsp+30h] [rbp-41h] BYREF
  int v14; // [rsp+40h] [rbp-31h]
  int v15; // [rsp+44h] [rbp-2Dh]
  int v16; // [rsp+48h] [rbp-29h]
  char v17; // [rsp+4Ch] [rbp-25h]
  char v18; // [rsp+4Dh] [rbp-24h]
  __int16 v19; // [rsp+4Eh] [rbp-23h]
  __int64 v20; // [rsp+50h] [rbp-21h]
  __int64 v21; // [rsp+58h] [rbp-19h]
  __int64 v22; // [rsp+60h] [rbp-11h]
  _QWORD v23[3]; // [rsp+70h] [rbp-1h] BYREF
  int v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+8Ch] [rbp+1Bh]
  void *v26; // [rsp+90h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+27h]

  if ( a3 )
  {
    v7 = *a3;
    if ( *a3 )
    {
      v10 = *((_QWORD *)a3 + 1);
      if ( v10 )
      {
        v11 = *(_DWORD *)a1;
        v12 = *(_QWORD *)(a1 + 1080);
        v14 = a4;
        v13[0] = *(_QWORD *)(a5 + 8);
        v13[1] = *(_QWORD *)(a5 + 24);
        v15 = *(_DWORD *)(a5 + 40);
        v17 = a6;
        v18 = a7;
        v20 = *(_QWORD *)(a5 + 16);
        v23[0] = v13;
        v24 = v7;
        v23[2] = v10;
        v26 = &EtwpNull;
        v16 = 0;
        v19 = 0;
        v21 = 0LL;
        v22 = 0LL;
        v23[1] = 56LL;
        v25 = 0;
        v27 = 2LL;
        EtwpLogKernelEvent((__int64)v23, v12, v11, 3u, a2, 0x401803u);
      }
    }
  }
}
