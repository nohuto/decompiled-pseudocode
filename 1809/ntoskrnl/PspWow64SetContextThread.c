/*
 * XREFs of PspWow64SetContextThread @ 0x1406A9C5C
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x1408E67EC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     PsGetThreadTeb @ 0x140123BB0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140621E78 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140621F80 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406A9FCC (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x1406AA420 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1406AA4AC (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1406AA7DC (RtlGuardIsValidWow64StackPointer.c)
 */

int __fastcall PspWow64SetContextThread(PETHREAD Thread, _DWORD *a2, int a3, char a4)
{
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int result; // eax
  ULONG v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  ULONG *v16; // r15
  __int64 v17; // rcx
  ULONG_PTR v18; // rbx
  __int64 ThreadTeb; // rax
  char v20; // bl
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  bool v25; // dl
  __int64 v26; // rcx
  int v27; // ebx
  PCONTEXT_EX v28; // r8
  int v29; // ecx
  CONTEXT_CHUNK v30; // rax
  LONG v31; // edx
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+20h] [rbp-30h]
  char v34[8]; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+28h] [rbp-28h]
  char v37; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v38[11]; // [rsp+51h] [rbp+1h] BYREF
  _DWORD v39[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+18h]
  PCONTEXT_EX v41; // [rsp+70h] [rbp+20h] BYREF
  int v42; // [rsp+80h] [rbp+30h] BYREF
  __int16 v43; // [rsp+88h] [rbp+38h]

  v5 = (__int64)a2;
  v37 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)Thread->Process;
  v8 = *(_QWORD *)(BugCheckParameter1 + 1064);
  if ( !v8 || *(_WORD *)(v8 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v9 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)&v38[3] = *(_DWORD *)v9;
  }
  else
  {
    *(_DWORD *)&v38[3] = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v38[3], a2);
  if ( result >= 0 )
  {
    v11 = *(_DWORD *)&v38[3];
    if ( !a4 )
    {
      v16 = (ULONG *)v5;
      *(_QWORD *)&v39[1] = v5 + 716;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(*(ULONG *)&v38[3], (PULONG)&v38[7]);
    if ( result >= 0 )
    {
      v12 = *(unsigned int *)&v38[7] + 15LL;
      if ( v12 <= *(unsigned int *)&v38[7] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      v16 = (ULONG *)&v37;
      result = RtlInitializeExtendedContext((PCONTEXT)&v37, v11, (PCONTEXT_EX *)&v39[1]);
      if ( result >= 0 )
      {
        result = RtlpReadExtendedContext(v17, 1, *(__int64 *)&v39[1], v11, v5, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          v18 = BugCheckParameter1;
          if ( Thread != CurrentThread
            || (*(_DWORD *)(BugCheckParameter1 + 440) & 0x20) == 0
            || (*v16 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v16[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(v18, v32, v35, (__int64)v39, (__int64)v38);
            if ( result >= 0 )
            {
              v20 = v38[0];
              if ( v38[0] && (v11 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, (PULONG)&v38[7]);
                if ( result >= 0 )
                {
                  v21 = *(unsigned int *)&v38[7] + 15LL;
                  if ( v21 <= *(unsigned int *)&v38[7] )
                    v21 = 0xFFFFFFFFFFFFFF0LL;
                  v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
                  v23 = alloca(v22);
                  v24 = alloca(v22);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v37, 0x10001Fu, &v41);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v37, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v20
                             ? RtlCopyContext((PCONTEXT)&v42, *v16, (PCONTEXT)v16)
                             : RtlpWow64SetContextOnAmd64(&v42, &v37, v16, &v37);
                      if ( result >= 0 )
                      {
                        if ( v43 != 35 )
                        {
                          v25 = 0;
                          if ( (v11 & 0x10040) != 0x10040 )
                            v25 = (v11 & 0x10002) != 65538 && (v11 & 0x10020) != 65568;
                          if ( !v25 )
                            v39[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v33, v36, (__int64)v39, 0LL);
                        v27 = result;
                        if ( result >= 0 )
                        {
                          if ( v37 )
                          {
                            if ( (v11 & 0x10040) == 0x10040 )
                            {
                              v42 |= 0x100040u;
                              v28 = v41;
                              v29 = v39[1];
                              v30 = *(CONTEXT_CHUNK *)(*(_QWORD *)&v39[1] + 16LL);
                              v41->XState = v30;
                              v31 = v30.Offset - (_DWORD)v28 + v29;
                              v28->XState.Offset = v31;
                              v28->All.Length = v31 + v28->XState.Length - v28->All.Offset;
                            }
                            v27 = PspSetContextThreadInternal(Thread, (CONTEXT *)&v37, 0, 1, 1);
                          }
                          if ( v27 >= 0 )
                          {
                            if ( a4 )
                            {
                              LOBYTE(v26) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v26, Thread, v16, *(unsigned int *)&v38[3], *(_QWORD *)v34);
                            }
                          }
                          return v27;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
