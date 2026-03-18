/*
 * XREFs of IovCompleteRequest @ 0x140963134
 * Callers:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopPerfCompleteRequest @ 0x14029A608 (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x140963B18 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x14096DD74 (IovpCompleteRequest1.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall IovCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rax
  bool v7; // sf
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int128 v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-41h]
  void *v13; // [rsp+50h] [rbp-39h]
  _BYTE v14[104]; // [rsp+58h] [rbp-31h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  memset(v14, 0, sizeof(v14));
  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
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
  v13 = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, &v10);
  if ( (!IovpDisabledWithoutReboot || v10) && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
  {
    v7 = *(int *)(BugCheckParameter1 + 48) < 0;
    v8 = *(_QWORD *)(BugCheckParameter1 + 184);
    *(_QWORD *)&v14[16] = &v10;
    *(_QWORD *)&v14[8] = *(_QWORD *)(v8 + 64);
    *(_QWORD *)v14 = v8;
    *(_OWORD *)&v14[32] = *(_OWORD *)v8;
    *(_OWORD *)&v14[48] = *(_OWORD *)(v8 + 16);
    *(_OWORD *)&v14[64] = *(_OWORD *)(v8 + 32);
    *(_OWORD *)&v14[80] = *(_OWORD *)(v8 + 48);
    *(_QWORD *)&v14[96] = *(_QWORD *)(v8 + 64);
    v9 = *(_BYTE *)(v8 + 3);
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
      *(_QWORD *)&v14[24] = 0LL;
      *(_BYTE *)(v8 + 3) |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    *(_QWORD *)&v14[24] = *(_QWORD *)(v8 + 56);
LABEL_19:
    *(_QWORD *)(v8 + 56) = IovpLocalCompletionRoutine;
    *(_QWORD *)(v8 + 64) = v14;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
