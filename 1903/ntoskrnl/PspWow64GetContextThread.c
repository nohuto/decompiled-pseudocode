/*
 * XREFs of PspWow64GetContextThread @ 0x1406C9B9C
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x1409213EC (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1409214EC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1406C9E54 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1406C9F0C (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406CA2C8 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406CA310 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // r8d
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  void *v16; // rsp
  int *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  void *v23; // rsp
  _DWORD *v24; // r10
  int v25; // ecx
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+28h] [rbp-28h]
  _BYTE v28[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v30; // [rsp+58h] [rbp+8h]
  int v31; // [rsp+5Ch] [rbp+Ch]
  __int64 v32; // [rsp+60h] [rbp+10h]
  __int64 v33; // [rsp+68h] [rbp+18h]
  __int64 v34; // [rsp+70h] [rbp+20h]
  __int64 v35; // [rsp+78h] [rbp+28h] BYREF
  __int64 v36; // [rsp+80h] [rbp+30h]
  __int64 v37; // [rsp+88h] [rbp+38h]
  _BYTE v38[720]; // [rsp+90h] [rbp+40h] BYREF

  v32 = a1;
  memset(v38, 0, 0x2CCuLL);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( a3 != 716 )
    return 3221225476LL;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(v9 + 1064);
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v29 = *(_DWORD *)v11;
  }
  else
  {
    v29 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v29, v8);
  if ( (int)result >= 0 )
  {
    v14 = v29;
    if ( !a4 )
    {
      v17 = a2;
      v19 = (__int64)(a2 + 179);
LABEL_15:
      LOBYTE(v13) = 1;
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v32, v13, (unsigned int)v38, v26, v27, 0LL, (__int64)v28);
      if ( (int)result >= 0 )
      {
        if ( v28[0] && (v14 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v20 = v30 + 15LL;
            if ( v20 <= v30 )
              v20 = 0xFFFFFFFFFFFFFF0LL;
            v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
            v22 = alloca(v21);
            v23 = alloca(v21);
            result = RtlInitializeExtendedContext((__int64)v28, 0x4010001Fu);
            if ( (int)result >= 0 )
            {
              if ( (v14 & 0x10040) == 0x10040 )
              {
                LODWORD(v36) = v36 | 0x100040;
                v24 = (_DWORD *)v34;
                *(_QWORD *)(v34 + 16) = *(_QWORD *)(v19 + 16);
                v24[4] += v19 - (_DWORD)v24;
                v24[1] = v24[4] + v24[5] - *v24;
              }
              result = PspGetContextThreadInternal(v32, (__int64)v28, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v28[0] )
                  result = RtlCopyContext((__int64)v17, *v17, (__int64)v38);
                else
                  result = RtlpWow64GetContextOnAmd64(v38, v28, v17);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v25, (int)a2 + 716, (unsigned int)&v35, v14, v19);
                    v31 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v29);
    if ( (int)result >= 0 )
    {
      v15 = v30 + 15LL;
      if ( v15 <= v30 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v17 = (int *)v28;
      memset(v28, 0, v30);
      result = RtlInitializeExtendedContext((__int64)v28, v14);
      if ( (int)result >= 0 )
      {
        v19 = v33;
        result = RtlpReadExtendedContext(v18, 0, v33, v14, (__int64)a2, (int *)&v35);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
