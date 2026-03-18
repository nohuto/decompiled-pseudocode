/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01F26A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  int v9; // r12d
  ULONG64 i; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  double *v17; // rcx
  __m128i v19; // xmm0
  __int64 ThreadWin32Thread; // rax
  unsigned __int32 v21; // r14d
  unsigned __int64 v22; // rax
  double *v23; // rax
  __int64 j; // rcx
  double *v25; // r8
  ULONG64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __m128i *v29; // rax
  ULONG64 v30; // r8
  double *Buf1; // [rsp+48h] [rbp-240h]
  __m128i *v32; // [rsp+68h] [rbp-220h]
  double *v33; // [rsp+70h] [rbp-218h]
  __int64 v34; // [rsp+C0h] [rbp-1C8h]
  __int32 v35; // [rsp+E8h] [rbp-1A0h]
  __m128i v36; // [rsp+100h] [rbp-188h]
  __int64 v37; // [rsp+110h] [rbp-178h]
  __m128i v38; // [rsp+128h] [rbp-160h]
  __m128i v39; // [rsp+138h] [rbp-150h]
  __m128i v40; // [rsp+148h] [rbp-140h]
  __m128i v41; // [rsp+158h] [rbp-130h]
  __m128i v42; // [rsp+168h] [rbp-120h]
  __int32 v43; // [rsp+178h] [rbp-110h]
  __m128i v44[7]; // [rsp+1C0h] [rbp-C8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v44, 0, 0x68uLL);
  v33 = 0LL;
  v32 = 0LL;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v13 = -1LL;
  }
  else if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_5:
      v9 = 0;
      v14 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( a2 >= 11 )
  {
    v8 = -1073741821;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
    if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
    {
      UserSetLastError(5LL, i);
      goto LABEL_122;
    }
    if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, i);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 7LL);
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v26 = a3;
          i = a3 + 40;
          if ( a3 + 40 < a3 || i > MmUserProbeAddress )
            v26 = MmUserProbeAddress;
          v36 = *(__m128i *)(v26 + 16);
          v37 = *(_QWORD *)(v26 + 32);
          v44[0] = *(__m128i *)v26;
          v44[1] = v36;
          v44[2].m128i_i64[0] = v37;
          v27 = (unsigned int)_mm_cvtsi128_si32(v44[0]);
          if ( (unsigned int)v27 <= 6 )
          {
            i = 0xFFFFFFFFLL;
            v11 = 0xFFFFFFFFLL;
            if ( 24 * (unsigned __int64)(unsigned int)v27 <= 0xFFFFFFFF )
              v11 = (unsigned int)(24 * v27);
            if ( (unsigned __int64)(24 * v27) <= 0xFFFFFFFF )
            {
              v28 = v11 + 16;
              if ( (int)v11 + 16 >= (unsigned int)v11 )
                i = v28;
              if ( v28 >= (unsigned int)v11 )
              {
                v29 = (__m128i *)Win32AllocPool((unsigned int)i, 1735226197LL);
                Buf1 = (double *)v29;
                if ( v29 )
                {
                  v32 = v29;
                  *v29 = v44[0];
                  for ( i = 0LL; (unsigned int)i < v29->m128i_i32[0]; i = (unsigned int)(i + 1) )
                  {
                    v30 = a3 + 16 + 24 * i;
                    if ( v30 + 24 < v30 || v30 + 24 > MmUserProbeAddress )
                      v30 = MmUserProbeAddress;
                    v34 = *(_QWORD *)(v30 + 16);
                    *(__m128i *)((char *)v29 + 24 * i + 16) = *(__m128i *)v30;
                    v29[2].m128i_i64[3 * i] = v34;
                  }
                  goto LABEL_59;
                }
                v8 = -1073741801;
              }
            }
          }
          else
          {
            v8 = -1073741306;
          }
        }
        else
        {
          v8 = -1073741306;
        }
      }
    }
    else if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        if ( !a3 )
          goto LABEL_122;
        if ( a4 < 4 )
        {
          v8 = -1073741306;
          goto LABEL_122;
        }
      }
      else
      {
        if ( !a3 )
          goto LABEL_122;
        if ( a4 < 4 )
        {
          v8 = -1073741306;
          goto LABEL_122;
        }
      }
      if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v44[0].m128i_i32[0] = *(_DWORD *)a3;
      goto LABEL_58;
    }
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x10 )
      {
        i = a3;
        if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
          i = MmUserProbeAddress;
        v44[0] = *(__m128i *)i;
        if ( v44[0].m128i_i32[1] <= 0x19u )
        {
          if ( v44[0].m128i_i32[0] <= 0x19u )
          {
            v21 = v44[0].m128i_i32[1] + v44[0].m128i_i32[0];
            if ( (unsigned int)(v44[0].m128i_i32[1] + v44[0].m128i_i32[0]) >= v44[0].m128i_i32[0] )
            {
              if ( v21 <= 0x19 )
              {
                v22 = 8LL * v21;
                i = 0xFFFFFFFFLL;
                if ( v22 <= 0xFFFFFFFF && (int)v22 + 8 >= (unsigned int)v22 )
                {
                  v23 = (double *)Win32AllocPool((unsigned int)(v22 + 8), 1735226197LL);
                  i = (ULONG64)v23;
                  Buf1 = v23;
                  if ( v23 )
                  {
                    v33 = v23;
                    *v23 = *(double *)v44[0].m128i_i64;
                    for ( j = 0LL; (unsigned int)j < v21; j = (unsigned int)(j + 1) )
                    {
                      v25 = (double *)(a3 + 8 + 8 * j);
                      if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
                        v25 = (double *)MmUserProbeAddress;
                      v23[j + 1] = *v25;
                    }
                    goto LABEL_59;
                  }
                  v8 = -1073741801;
                }
              }
              else
              {
                v8 = -1073741306;
              }
            }
          }
          else
          {
            v8 = -1073741306;
          }
        }
        else
        {
          v8 = -1073741306;
        }
      }
      else
      {
        v8 = -1073741306;
      }
    }
  }
  else
  {
    if ( a2 < 0 )
    {
LABEL_59:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i);
      v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v13, 0, a2, Buf1);
      goto LABEL_122;
    }
    if ( a2 > 1 )
    {
      switch ( a2 )
      {
        case 2:
          if ( !a3 )
            goto LABEL_122;
          if ( a4 < 0x10 )
          {
            v8 = -1073741306;
            goto LABEL_122;
          }
          if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v19 = *(__m128i *)a3;
          break;
        case 3:
          if ( !a3 )
            goto LABEL_122;
          if ( a4 < 0x20 )
          {
            v8 = -1073741306;
            goto LABEL_122;
          }
          if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v19 = *(__m128i *)a3;
          v44[1] = *(__m128i *)(a3 + 16);
          break;
        case 4:
          if ( !a3 )
            goto LABEL_122;
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            goto LABEL_122;
          }
          if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v19 = *(__m128i *)a3;
          v35 = *(_DWORD *)(a3 + 32);
          v44[1] = *(__m128i *)(a3 + 16);
          v44[2].m128i_i32[0] = v35;
          break;
        default:
          if ( !a3 )
            goto LABEL_122;
          if ( a4 < 0x64 )
          {
            v8 = -1073741306;
            goto LABEL_122;
          }
          if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v38 = *(__m128i *)(a3 + 16);
          v39 = *(__m128i *)(a3 + 32);
          v40 = *(__m128i *)(a3 + 48);
          v41 = *(__m128i *)(a3 + 64);
          v42 = *(__m128i *)(a3 + 80);
          v43 = *(_DWORD *)(a3 + 96);
          v44[0] = *(__m128i *)a3;
          v44[1] = v38;
          v44[2] = v39;
          v44[3] = v40;
          v44[4] = v41;
          v44[5] = v42;
          v44[6].m128i_i32[0] = v43;
          goto LABEL_58;
      }
      v44[0] = v19;
LABEL_58:
      Buf1 = (double *)v44;
      goto LABEL_59;
    }
    if ( !a3 )
    {
      Buf1 = 0LL;
      goto LABEL_59;
    }
  }
LABEL_122:
  if ( v8 < 0 )
    goto LABEL_5;
  v14 = 1LL;
LABEL_6:
  if ( !v9 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15, v16);
  }
  if ( v32 )
    Win32FreePool(v32);
  v17 = v33;
  if ( v33 )
    Win32FreePool(v33);
  UserSessionSwitchLeaveCrit(v17, i, v11, v12);
  return v14;
}
