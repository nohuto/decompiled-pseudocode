/*
 * XREFs of LdrLogNewDataDllLoad @ 0x180078600
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x1800783E0 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D1BD4 (LdrpLogNewDllLoadInternal.c)
 */

int __fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rbx
  struct _PEB *v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8

  v4 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v5 = 2147353476LL;
  v6 = 2147353477LL;
  if ( *(_BYTE *)v5 )
  {
    v8 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x10) != 0 )
      goto LABEL_18;
  }
  LODWORD(v7) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v7 )
  {
    v7 = NtCurrentPeb();
    v4 = (__int64)v7->SharedData + 554;
  }
  if ( *(_BYTE *)v4 )
  {
    v7 = NtCurrentPeb();
    if ( (v7->TracingFlags & 4) != 0 )
    {
      LODWORD(v7) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v7 )
      {
        v7 = NtCurrentPeb();
        v6 = (__int64)v7->SharedData + 555;
      }
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
      {
LABEL_18:
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(a2 + 2 * v9) );
        v10 = 2 * v9;
        v11 = 0xFFFFFFFFLL;
        if ( (a1 & 2) != 0 )
        {
          v11 = 5LL;
        }
        else if ( (a1 & 1) != 0 )
        {
          v11 = 6LL;
        }
        LODWORD(v7) = LdrpLogNewDllLoadInternal(a1, 0LL, v11, v10, a2);
      }
    }
  }
  return (int)v7;
}
