/*
 * XREFs of PspWow64GetContextThread @ 0x1406C85B4
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x140920E4C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x140920F4C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E7EB4 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1405E8408 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1406C886C (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1406C8924 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406C8CE0 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

int __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int result; // eax
  int v13; // r8d
  ULONG v14; // ebx
  unsigned __int64 v15; // rax
  void *v16; // rsp
  CONTEXT *v17; // r15
  __int64 v18; // rcx
  PCONTEXT_EX v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  void *v23; // rsp
  PCONTEXT_EX v24; // r10
  int v25; // ecx
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+28h] [rbp-28h]
  _BYTE v28[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG ContextFlags; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v31; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v33; // [rsp+70h] [rbp+20h] BYREF
  __int64 v34; // [rsp+78h] [rbp+28h] BYREF
  __int64 v35; // [rsp+80h] [rbp+30h]
  __int64 v36; // [rsp+88h] [rbp+38h]
  _BYTE v37[720]; // [rsp+90h] [rbp+40h] BYREF

  v31 = a1;
  memset(v37, 0, 0x2CCuLL);
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( a3 != 716 )
    return -1073741820;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(v9 + 1064);
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v11;
  }
  else
  {
    ContextFlags = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&ContextFlags, v8);
  if ( result >= 0 )
  {
    v14 = ContextFlags;
    if ( !a4 )
    {
      v17 = (CONTEXT *)a2;
      v19 = (PCONTEXT_EX)(a2 + 179);
LABEL_15:
      LOBYTE(v13) = 1;
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v31, v13, (unsigned int)v37, v26, v27, 0LL, (__int64)v28);
      if ( result >= 0 )
      {
        if ( v28[0] && (v14 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v20 = ContextLength[0] + 15LL;
            if ( v20 <= ContextLength[0] )
              v20 = 0xFFFFFFFFFFFFFF0LL;
            v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
            v22 = alloca(v21);
            v23 = alloca(v21);
            result = RtlInitializeExtendedContext((PCONTEXT)v28, 0x4010001Fu, &v33);
            if ( result >= 0 )
            {
              if ( (v14 & 0x10040) == 0x10040 )
              {
                LODWORD(v35) = v35 | 0x100040;
                v24 = v33;
                v33->XState = v19->XState;
                v24->XState.Offset += (_DWORD)v19 - (_DWORD)v24;
                v24->All.Length = v24->XState.Offset + v24->XState.Length - v24->All.Offset;
              }
              result = PspGetContextThreadInternal(v31, (__int64)v28, 0, 1, 1);
              if ( result >= 0 )
              {
                if ( v28[0] )
                  result = RtlCopyContext(v17, v17->P1Home, (PCONTEXT)v37);
                else
                  result = RtlpWow64GetContextOnAmd64(v37, v28, v17);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v25, (int)a2 + 716, (unsigned int)&v34, v14, (__int64)v19);
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
    result = RtlGetExtendedContextLength(ContextFlags, ContextLength);
    if ( result >= 0 )
    {
      v15 = ContextLength[0] + 15LL;
      if ( v15 <= ContextLength[0] )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v17 = (CONTEXT *)v28;
      memset(v28, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v28, v14, &ContextEx);
      if ( result >= 0 )
      {
        v19 = ContextEx;
        result = RtlpReadExtendedContext(v18, 0, (__int64)ContextEx, v14, (__int64)a2, (int *)&v34);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
