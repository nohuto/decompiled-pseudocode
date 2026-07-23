/*
 * XREFs of PspWow64GetContextThread @ 0x1406A9558
 * Callers:
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x1408E66EC (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1408E67EC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140621E78 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140621F80 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406A97E8 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1406A98A0 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406A9FCC (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

int __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int result; // eax
  ULONG v10; // ebx
  unsigned __int64 v11; // rax
  void *v12; // rsp
  CONTEXT *v13; // r12
  __int64 v14; // rcx
  PCONTEXT_EX v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  PCONTEXT_EX v21; // r10
  CONTEXT_CHUNK XState; // rax
  LONG v23; // r8d
  int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+28h] [rbp-28h]
  _BYTE v26[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v27; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v29; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v31; // [rsp+70h] [rbp+20h] BYREF
  __int64 v32; // [rsp+78h] [rbp+28h] BYREF
  int v33; // [rsp+80h] [rbp+30h]
  _BYTE v34[720]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v29 = a1;
  if ( a3 != 716 )
    return -1073741820;
  v6 = *(_QWORD *)(a1 + 544);
  v7 = *(_QWORD *)(v6 + 1064);
  if ( !v7 || *(_WORD *)(v7 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v8 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v27 = *(_DWORD *)v8;
  }
  else
  {
    v27 = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v27, a2);
  if ( result >= 0 )
  {
    v10 = v27;
    if ( !a4 )
    {
      v13 = (CONTEXT *)v5;
      v15 = (PCONTEXT_EX)(v5 + 716);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v24, v25, 0LL, (__int64)v26);
      if ( result >= 0 )
      {
        if ( v26[0] && (v10 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v16 = ContextLength[0] + 15LL;
            if ( v16 <= ContextLength[0] )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((PCONTEXT)v26, 0x4010001Fu, &v31);
            if ( result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v33 |= 0x100040u;
                v21 = v31;
                XState = v15->XState;
                v31->XState = XState;
                v23 = XState.Offset - (_DWORD)v21 + (_DWORD)v15;
                v21->XState.Offset = v23;
                v21->All.Length = v23 + v21->XState.Length - v21->All.Offset;
              }
              result = PspGetContextThreadInternal(v29, (__int64)v26, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v26[0] )
                  result = RtlCopyContext(v13, v13->P1Home, (PCONTEXT)v34);
                else
                  result = RtlpWow64GetContextOnAmd64(v34, v26, v13);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v20, (int)v5 + 716, (unsigned int)&v32, v10, (__int64)v15);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v27, ContextLength);
    if ( result >= 0 )
    {
      v11 = ContextLength[0] + 15LL;
      if ( v11 <= ContextLength[0] )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (CONTEXT *)v26;
      memset(v26, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v26, v10, &ContextEx);
      if ( result >= 0 )
      {
        v15 = ContextEx;
        result = RtlpReadExtendedContext(v14, 0, (__int64)ContextEx, v10, v5, &v32);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
