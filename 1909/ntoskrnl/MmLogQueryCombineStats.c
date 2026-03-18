/*
 * XREFs of MmLogQueryCombineStats @ 0x14089B300
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwTraceSiloDcEvent @ 0x14032DE80 (EtwTraceSiloDcEvent.c)
 */

void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // cc
  unsigned int v10; // r9d
  _BYTE *v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+3Ch] [rbp-4Ch]
  _BYTE v14[32]; // [rsp+40h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( a3 )
  {
    v6 = *(_DWORD *)a3;
  }
  else
  {
    a3 = v14;
    v6 = 0;
  }
  *(_DWORD *)a3 = v6 & 0xFFFFFFC0 | 1;
  *((_DWORD *)a3 + 1) = dword_14046A028;
  *((_QWORD *)a3 + 1) = qword_14046A010 + qword_14046A018;
  *((_QWORD *)a3 + 2) = qword_14046A020;
  v7 = dword_14046A02C;
  *((_DWORD *)a3 + 6) = dword_14046A02C;
  v8 = dword_14046A030;
  v9 = v7 <= dword_14046A030;
  *((_DWORD *)a3 + 7) = dword_14046A030;
  if ( !v9 )
    v7 = v8;
  *((_DWORD *)a3 + 6) = v7;
  if ( a3 == v14 )
  {
    if ( a1 && a2 )
    {
      v13 = 0;
      v10 = *a2;
      v11 = a3;
      v12 = 32;
      EtwTraceSiloDcEvent((__int64)&v11, 1u, a1, v10, 0x27Cu, 0x401802u);
    }
    else
    {
      v13 = 0;
      v11 = a3;
      v12 = 32;
      EtwTraceKernelEvent((__int64)&v11, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
