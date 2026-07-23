/*
 * XREFs of SetAssertBufferPtrinPeb @ 0x1800DF148
 * Callers:
 *     GetShipAssertBuffer @ 0x1800DF044 (GetShipAssertBuffer.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 */

__int64 __fastcall SetAssertBufferPtrinPeb(void *a1)
{
  unsigned int v2; // ebx
  struct _PEB *v3; // rax
  struct _PEB *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = -1073741823;
  NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessWow64Information, &v5, 8u, 0LL);
  v3 = NtCurrentPeb();
  if ( v3 && (v5 == v3 || !v5) )
  {
    v3->WerShipAssertPtr = a1;
    return 0;
  }
  return v2;
}
