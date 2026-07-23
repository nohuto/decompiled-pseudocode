/*
 * XREFs of PopLogNotifyDevice @ 0x1402DE85C
 * Callers:
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopLogNotifyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  _QWORD v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+40h] [rbp-C0h]
  char v10; // [rsp+41h] [rbp-BFh]
  char v11; // [rsp+42h] [rbp-BEh]
  int v12; // [rsp+44h] [rbp-BCh]
  int v13; // [rsp+48h] [rbp-B8h]
  wchar_t pszDest[112]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v15; // [rsp+130h] [rbp+30h] BYREF
  int v16; // [rsp+138h] [rbp+38h]
  int v17; // [rsp+13Ch] [rbp+3Ch]

  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v3 = *(_QWORD *)(a3 + 184);
    v4 = *(_QWORD *)(a1 + 8);
    v8[0] = a3;
    v8[1] = *(_QWORD *)(v4 + 24);
    v10 = *(_BYTE *)(v3 - 72);
    v11 = *(_BYTE *)(v3 - 71);
    v12 = *(_DWORD *)(v3 - 56);
    v13 = *(_DWORD *)(v3 - 48);
    if ( a2 )
    {
      v5 = *(_QWORD *)(a2 + 72);
      v9 = *(_BYTE *)(a2 + 56);
      if ( v5 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)(v5 + 2 * v6) );
        v7 = v6;
        if ( (unsigned int)v6 > 0x6C )
          v7 = 108;
        RtlStringCchCopyW(pszDest, 0x6DuLL, (NTSTRSAFE_PCWSTR)(v5 + 2LL * (unsigned int)(v6 - v7)));
        goto LABEL_11;
      }
    }
    else
    {
      v9 = 0;
    }
    pszDest[0] = 0;
    v7 = 0;
LABEL_11:
    v17 = 0;
    v15 = v8;
    v16 = 2 * v7 + 40;
    EtwTraceKernelEvent((__int64)&v15, 1u, 0x80008000, 0x1226u, 0x401802u);
  }
}
