/*
 * XREFs of PspWow64SetContextThread @ 0x1406C980C
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x1409214EC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     PsGetThreadTeb @ 0x140120C20 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406CA2C8 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406CA310 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x1406CA754 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1406CA7E0 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1406CAB10 (RtlGuardIsValidWow64StackPointer.c)
 */

int __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned __int64 a2, int a3, char a4)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  int result; // eax
  bool v14; // zf
  ULONG v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG *v20; // r15
  __int64 v21; // rcx
  int v22; // r8d
  __int64 ThreadTeb; // rax
  char v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  void *v28; // rsp
  bool v29; // dl
  __int64 v30; // rcx
  int v31; // ebx
  PCONTEXT_EX v32; // r8
  int v33; // ecx
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+20h] [rbp-30h]
  char v36[8]; // [rsp+20h] [rbp-30h]
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+28h] [rbp-28h]
  char v39; // [rsp+50h] [rbp+0h] BYREF
  char v40; // [rsp+51h] [rbp+1h] BYREF
  char v41; // [rsp+52h] [rbp+2h]
  ULONG ContextFlags; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  int v44; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  _KPROCESS *v46; // [rsp+68h] [rbp+18h]
  PCONTEXT_EX v47; // [rsp+70h] [rbp+20h] BYREF
  _DWORD v48[180]; // [rsp+80h] [rbp+30h] BYREF

  v41 = a4;
  memset(v48, 0, 0x2CCuLL);
  v39 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  v46 = Process;
  v11 = Process[1].ActiveProcessors.Bitmap[6];
  if ( !v11 || *(_WORD *)(v11 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v12 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v12;
  }
  else
  {
    ContextFlags = *(_DWORD *)a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&ContextFlags, v8);
  if ( result >= 0 )
  {
    v14 = a4 == 0;
    v15 = ContextFlags;
    if ( v14 )
    {
      v20 = (ULONG *)a2;
      v22 = a2 + 716;
      ContextEx = (PCONTEXT_EX)(a2 + 716);
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = (ULONG *)&v39;
      result = RtlInitializeExtendedContext((PCONTEXT)&v39, v15, &ContextEx);
      if ( result >= 0 )
      {
        result = RtlpReadExtendedContext(v21, 1, (__int64)ContextEx, v15, a2, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v20[49], ThreadTeb)) )
          {
            LOBYTE(v22) = 1;
            result = PspWow64ReadOrWriteThreadCpuArea(
                       (_DWORD)Process,
                       (_DWORD)Thread,
                       v22,
                       (unsigned int)v48,
                       v34,
                       v37,
                       (__int64)&v44,
                       (__int64)&v40);
            if ( result >= 0 )
            {
              v24 = v40;
              if ( v40 && (v15 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v25 = ContextLength + 15LL;
                  if ( v25 <= ContextLength )
                    v25 = 0xFFFFFFFFFFFFFF0LL;
                  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
                  v27 = alloca(v26);
                  v28 = alloca(v26);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v39, 0x10001Fu, &v47);
                  if ( result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v39, 0, 1, 1);
                    if ( result >= 0 )
                    {
                      result = v24
                             ? RtlCopyContext((PCONTEXT)v48, *v20, (PCONTEXT)v20)
                             : RtlpWow64SetContextOnAmd64(v48, &v39, v20, &v39);
                      if ( result >= 0 )
                      {
                        if ( LOWORD(v48[2]) != 35 )
                        {
                          v29 = 0;
                          if ( (v15 & 0x10040) != 0x10040 )
                            v29 = (v15 & 0x10002) != 65538 && (v15 & 0x10020) != 65568;
                          if ( !v29 )
                            v44 |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(
                                   (_DWORD)v46,
                                   (_DWORD)Thread,
                                   0,
                                   (unsigned int)v48,
                                   v35,
                                   v38,
                                   (__int64)&v44,
                                   0LL);
                        v31 = result;
                        if ( result >= 0 )
                        {
                          if ( v39 )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v48[0] |= 0x100040u;
                              v32 = v47;
                              v33 = (int)ContextEx;
                              v47->XState = ContextEx->XState;
                              v32->XState.Offset += v33 - (_DWORD)v32;
                              v32->All.Length = v32->XState.Offset + v32->XState.Length - v32->All.Offset;
                            }
                            v31 = PspSetContextThreadInternal(Thread, (__int64)&v39, 0, 1, 1);
                          }
                          if ( v31 >= 0 )
                          {
                            if ( v41 )
                            {
                              LOBYTE(v30) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v30, Thread, v20, ContextFlags, *(_QWORD *)v36);
                            }
                          }
                          return v31;
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
