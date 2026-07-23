/*
 * XREFs of IovCompleteRequest @ 0x140924FD4
 * Callers:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopPerfCompleteRequest @ 0x14028563C (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x140925998 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x1409304F4 (IovpCompleteRequest1.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall IovCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rax
  bool v7; // sf
  __int128 *v8; // rcx
  char v9; // al
  _QWORD v10[5]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v12; // [rsp+70h] [rbp-19h]
  __int128 v13; // [rsp+78h] [rbp-11h]
  __int128 v14; // [rsp+88h] [rbp-1h]
  __int128 v15; // [rsp+98h] [rbp+Fh]
  __int128 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 v17; // [rsp+B8h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+5Fh]

  IovpLogStackTrace(BugCheckParameter1);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1)
      || *(_WORD *)BugCheckParameter1 != 6 )
    {
      VerifierBugCheckIfAppropriate(0x44u, BugCheckParameter1, 0x486uLL, 0LL, 0LL);
    }
    v5 = *(_QWORD *)(BugCheckParameter1 + 104);
    if ( v5 )
      VerifierBugCheckIfAppropriate(0xC9u, 7uLL, v5, BugCheckParameter1, 0LL);
    v6 = *(int *)(BugCheckParameter1 + 48);
    if ( (_DWORD)v6 == 259 || (_DWORD)v6 == -1 )
      VerifierBugCheckIfAppropriate(0xC9u, 6uLL, v6, BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      VerifierBugCheckIfAppropriate(0xC9u, 0xEuLL, KeGetCurrentIrql(), BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v10[4] = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, v10);
  if ( (!IovpDisabledWithoutReboot || v10[0])
    && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
  {
    v7 = *(int *)(BugCheckParameter1 + 48) < 0;
    v8 = *(__int128 **)(BugCheckParameter1 + 184);
    v11[2] = v10;
    v11[1] = *((_QWORD *)v8 + 8);
    v11[0] = v8;
    v13 = *v8;
    v14 = v8[1];
    v15 = v8[2];
    v16 = v8[3];
    v17 = *((_QWORD *)v8 + 8);
    v9 = *((_BYTE *)v8 + 3);
    if ( v7 )
    {
      if ( v9 < 0 )
        goto LABEL_18;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v9 & 0x20) == 0 )
    {
      v12 = 0LL;
      *((_BYTE *)v8 + 3) |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    v12 = *((_QWORD *)v8 + 7);
LABEL_19:
    *((_QWORD *)v8 + 7) = IovpLocalCompletionRoutine;
    *((_QWORD *)v8 + 8) = v11;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
