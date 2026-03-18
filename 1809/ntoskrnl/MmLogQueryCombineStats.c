/*
 * XREFs of MmLogQueryCombineStats @ 0x14085F02C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140629AD0 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140726194 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F36F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x140310480 (EtwTraceSiloDcEvent.c)
 */

void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  _BYTE *v4; // r10
  int v5; // ecx
  int v6; // eax
  bool v7; // cc
  unsigned int v8; // r9d
  _BYTE *v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+3Ch] [rbp-3Ch]
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF

  v4 = v12;
  if ( a3 )
    v4 = a3;
  *(_DWORD *)v4 = *(_DWORD *)v4 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v4 + 1) = dword_14043E4A0;
  *((_QWORD *)v4 + 1) = qword_14043E488 + qword_14043E490;
  *((_QWORD *)v4 + 2) = qword_14043E498;
  v5 = dword_14043E4A4;
  *((_DWORD *)v4 + 6) = dword_14043E4A4;
  v6 = dword_14043E4A8;
  v7 = v5 <= dword_14043E4A8;
  *((_DWORD *)v4 + 7) = dword_14043E4A8;
  if ( !v7 )
    v5 = v6;
  *((_DWORD *)v4 + 6) = v5;
  if ( v4 == v12 )
  {
    if ( a1 && a2 )
    {
      v11 = 0;
      v8 = *a2;
      v9 = v4;
      v10 = 32;
      EtwTraceSiloDcEvent((__int64)&v9, 1u, a1, v8, 0x27Cu, 0x401802u);
    }
    else
    {
      v11 = 0;
      v9 = v4;
      v10 = 32;
      EtwTraceKernelEvent((__int64)&v9, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
