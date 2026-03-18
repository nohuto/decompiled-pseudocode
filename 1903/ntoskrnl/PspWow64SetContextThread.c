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

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  bool v14; // zf
  unsigned int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  char *v20; // r15
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
  _DWORD *v32; // r8
  int v33; // ecx
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+20h] [rbp-30h]
  char v36[8]; // [rsp+20h] [rbp-30h]
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+28h] [rbp-28h]
  char v39; // [rsp+50h] [rbp+0h] BYREF
  char v40; // [rsp+51h] [rbp+1h] BYREF
  char v41; // [rsp+52h] [rbp+2h]
  unsigned int v42; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v43; // [rsp+58h] [rbp+8h]
  int v44; // [rsp+5Ch] [rbp+Ch] BYREF
  _DWORD *v45; // [rsp+60h] [rbp+10h]
  _KPROCESS *v46; // [rsp+68h] [rbp+18h]
  __int64 v47; // [rsp+70h] [rbp+20h]
  _DWORD v48[180]; // [rsp+80h] [rbp+30h] BYREF

  v41 = a4;
  memset(v48, 0, 0x2CCuLL);
  v39 = 0;
  if ( a3 != 716 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  v46 = Process;
  v11 = Process[1].ActiveProcessors.Bitmap[6];
  if ( !v11 || *(_WORD *)(v11 + 8) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v12 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    v42 = *(_DWORD *)v12;
  }
  else
  {
    v42 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v42, v8);
  if ( (int)result >= 0 )
  {
    v14 = a4 == 0;
    v15 = v42;
    if ( v14 )
    {
      v20 = (char *)a2;
      v22 = (_DWORD)a2 + 716;
      v45 = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v42);
    if ( (int)result >= 0 )
    {
      v16 = v43 + 15LL;
      if ( v16 <= v43 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = &v39;
      result = RtlInitializeExtendedContext((__int64)&v39, v15);
      if ( (int)result >= 0 )
      {
        result = RtlpReadExtendedContext(v21, 1, (__int64)v45, v15, (__int64)a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*(_DWORD *)v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(*((unsigned int *)v20 + 49), ThreadTeb)) )
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
            if ( (int)result >= 0 )
            {
              v24 = v40;
              if ( v40 && (v15 & 0x10040) == 0x10040 )
              {
                return 3221225659LL;
              }
              else
              {
                result = RtlGetExtendedContextLength(1048607LL);
                if ( (int)result >= 0 )
                {
                  v25 = v43 + 15LL;
                  if ( v25 <= v43 )
                    v25 = 0xFFFFFFFFFFFFFF0LL;
                  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
                  v27 = alloca(v26);
                  v28 = alloca(v26);
                  result = RtlInitializeExtendedContext((__int64)&v39, 0x10001Fu);
                  if ( (int)result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v39, 0, 1, 1);
                    if ( (int)result >= 0 )
                    {
                      result = v24
                             ? RtlCopyContext((__int64)v48, *(_DWORD *)v20, (__int64)v20)
                             : RtlpWow64SetContextOnAmd64(v48, &v39, v20, &v39);
                      if ( (int)result >= 0 )
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
                        if ( (int)result >= 0 )
                        {
                          if ( v39 )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v48[0] |= 0x100040u;
                              v32 = (_DWORD *)v47;
                              v33 = (int)v45;
                              *(_QWORD *)(v47 + 16) = *((_QWORD *)v45 + 2);
                              v32[4] += v33 - (_DWORD)v32;
                              v32[1] = v32[4] + v32[5] - *v32;
                            }
                            v31 = PspSetContextThreadInternal(Thread, (__int64)&v39, 0, 1, 1);
                          }
                          if ( v31 >= 0 )
                          {
                            if ( v41 )
                            {
                              LOBYTE(v30) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v30, Thread, v20, v42, *(_QWORD *)v36);
                            }
                          }
                          return (unsigned int)v31;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return 3221225485LL;
        }
      }
    }
  }
  return result;
}
