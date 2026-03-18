/*
 * XREFs of PspWow64GetContextThread @ 0x1406A82D8
 * Callers:
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x1408E544C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1408E554C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140620E78 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140620F80 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406A8568 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1406A8620 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406A8D4C (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406A8D94 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  void *v12; // rsp
  int *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  _DWORD *v21; // r10
  __int64 v22; // rax
  int v23; // r8d
  int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+28h] [rbp-28h]
  _BYTE v26[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v28; // [rsp+58h] [rbp+8h]
  int v29; // [rsp+5Ch] [rbp+Ch]
  __int64 v30; // [rsp+60h] [rbp+10h]
  __int64 v31; // [rsp+68h] [rbp+18h]
  __int64 v32; // [rsp+70h] [rbp+20h]
  __int64 v33; // [rsp+78h] [rbp+28h] BYREF
  int v34; // [rsp+80h] [rbp+30h]
  _BYTE v35[720]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v30 = a1;
  if ( a3 != 716 )
    return 3221225476LL;
  v6 = *(_QWORD *)(a1 + 544);
  v7 = *(_QWORD *)(v6 + 1064);
  if ( !v7 || *(_WORD *)(v7 + 8) != 332 )
    return 3221225485LL;
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
  if ( (int)result >= 0 )
  {
    v10 = v27;
    if ( !a4 )
    {
      v13 = (int *)v5;
      v15 = v5 + 716;
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v24, v25, 0LL, (__int64)v26);
      if ( (int)result >= 0 )
      {
        if ( v26[0] && (v10 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v16 = v28 + 15LL;
            if ( v16 <= v28 )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((__int64)v26, 0x4010001Fu);
            if ( (int)result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v34 |= 0x100040u;
                v21 = (_DWORD *)v32;
                v22 = *(_QWORD *)(v15 + 16);
                *(_QWORD *)(v32 + 16) = v22;
                v23 = v22 - (_DWORD)v21 + v15;
                v21[4] = v23;
                v21[1] = v23 + v21[5] - *v21;
              }
              result = PspGetContextThreadInternal(v30, (__int64)v26, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v26[0] )
                  result = RtlCopyContext((__int64)v13, *v13, (__int64)v35);
                else
                  result = RtlpWow64GetContextOnAmd64(v35, v26, v13);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v20, (int)v5 + 716, (unsigned int)&v33, v10, v15);
                    v29 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v27);
    if ( (int)result >= 0 )
    {
      v11 = v28 + 15LL;
      if ( v11 <= v28 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (int *)v26;
      memset(v26, 0, v28);
      result = RtlInitializeExtendedContext((__int64)v26, v10);
      if ( (int)result >= 0 )
      {
        v15 = v31;
        result = RtlpReadExtendedContext(v14, 0, v31, v10, v5, &v33);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
