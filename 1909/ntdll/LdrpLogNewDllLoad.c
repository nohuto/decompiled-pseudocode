/*
 * XREFs of LdrpLogNewDllLoad @ 0x18002A2F4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D03A4 (LdrpLogNewDllLoadInternal.c)
 */

int __fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdi
  struct _PEB *v8; // rax
  char *v9; // rcx

  v4 = 0LL;
  v5 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476LL;
  v7 = 2147353477LL;
  if ( *(_BYTE *)v6 )
  {
    v9 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v9 & 0x10) != 0 )
      goto LABEL_18;
  }
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v5 = (__int64)v8->SharedData + 554;
  }
  if ( *(_BYTE *)v5 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v7 = (__int64)v8->SharedData + 555;
      }
      if ( (*(_BYTE *)v7 & 0x20) != 0 )
      {
LABEL_18:
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        LODWORD(v8) = LdrpLogNewDllLoadInternal(
                        *(_QWORD *)(a2 + 48),
                        v4,
                        *(unsigned int *)(a2 + 268),
                        *(unsigned __int16 *)(a2 + 72),
                        *(_QWORD *)(a2 + 80));
      }
    }
  }
  return (int)v8;
}
