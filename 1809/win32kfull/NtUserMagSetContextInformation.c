/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C0219CA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  double *v19; // rcx
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __int32 v26; // eax
  __m128i v27; // xmm1
  __int32 v28; // eax
  __m128i v29; // xmm1
  __int64 ThreadWin32Thread; // rax
  __m128i v31; // xmm0
  unsigned int v32; // r14d
  unsigned __int64 v33; // rax
  double *v34; // rax
  __int64 j; // rcx
  double *v36; // r8
  ULONG64 v37; // rcx
  __m128i v38; // xmm2
  __int64 v39; // xmm0_8
  __int64 v40; // rax
  unsigned int v41; // eax
  __m128i *v42; // rax
  ULONG64 v43; // r8
  __int64 v44; // xmm0_8
  double *Buf1; // [rsp+48h] [rbp-120h]
  __m128i *v46; // [rsp+68h] [rbp-100h]
  double *v47; // [rsp+70h] [rbp-F8h]
  __m128i v48[7]; // [rsp+B0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v48, 0, 0x68uLL);
  v47 = 0LL;
  v46 = 0LL;
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
    if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
    {
      UserSetLastError(5LL, i, v11, v12);
      goto LABEL_121;
    }
    if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, i, v11, v12);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 7LL);
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
          v37 = a3;
          i = a3 + 40;
          if ( a3 + 40 < a3 || i > MmUserProbeAddress )
            v37 = MmUserProbeAddress;
          v38 = *(__m128i *)(v37 + 16);
          v39 = *(_QWORD *)(v37 + 32);
          v48[0] = *(__m128i *)v37;
          v48[1] = v38;
          v48[2].m128i_i64[0] = v39;
          v40 = (unsigned int)_mm_cvtsi128_si32(v48[0]);
          if ( (unsigned int)v40 <= 6 )
          {
            i = 0xFFFFFFFFLL;
            v11 = 0xFFFFFFFFLL;
            if ( 24 * (unsigned __int64)(unsigned int)v40 <= 0xFFFFFFFF )
              v11 = (unsigned int)(24 * v40);
            if ( (unsigned __int64)(24 * v40) <= 0xFFFFFFFF )
            {
              v41 = v11 + 16;
              if ( (int)v11 + 16 >= (unsigned int)v11 )
                i = v41;
              if ( v41 >= (unsigned int)v11 )
              {
                v42 = (__m128i *)Win32AllocPool((unsigned int)i, 1735226197LL);
                Buf1 = (double *)v42;
                if ( v42 )
                {
                  v46 = v42;
                  *v42 = v48[0];
                  for ( i = 0LL; (unsigned int)i < v42->m128i_i32[0]; i = (unsigned int)(i + 1) )
                  {
                    v43 = a3 + 16 + 24 * i;
                    if ( v43 + 24 < v43 || v43 + 24 > MmUserProbeAddress )
                      v43 = MmUserProbeAddress;
                    v44 = *(_QWORD *)(v43 + 16);
                    *(__m128i *)((char *)v42 + 24 * i + 16) = *(__m128i *)v43;
                    v42[2].m128i_i64[3 * i] = v44;
                  }
                  goto LABEL_58;
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
          goto LABEL_121;
        if ( a4 < 4 )
        {
          v8 = -1073741306;
          goto LABEL_121;
        }
      }
      else
      {
        if ( !a3 )
          goto LABEL_121;
        if ( a4 < 4 )
        {
          v8 = -1073741306;
          goto LABEL_121;
        }
      }
      if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v48[0].m128i_i32[0] = *(_DWORD *)a3;
LABEL_57:
      Buf1 = (double *)v48;
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
        v31 = *(__m128i *)i;
        v48[0] = v31;
        if ( v31.m128i_i32[1] <= 0x19u )
        {
          if ( v31.m128i_i32[0] <= 0x19u )
          {
            v32 = v31.m128i_i32[1] + v31.m128i_i32[0];
            if ( (unsigned int)(v31.m128i_i32[1] + v31.m128i_i32[0]) >= v31.m128i_i32[0] )
            {
              if ( v32 <= 0x19 )
              {
                v33 = 8LL * v32;
                i = 0xFFFFFFFFLL;
                if ( v33 <= 0xFFFFFFFF && (int)v33 + 8 >= (unsigned int)v33 )
                {
                  v34 = (double *)Win32AllocPool((unsigned int)(v33 + 8), 1735226197LL);
                  i = (ULONG64)v34;
                  Buf1 = v34;
                  if ( v34 )
                  {
                    v47 = v34;
                    *v34 = *(double *)v48[0].m128i_i64;
                    for ( j = 0LL; (unsigned int)j < v32; j = (unsigned int)(j + 1) )
                    {
                      v36 = (double *)(a3 + 8 + 8 * j);
                      if ( v36 + 1 < v36 || (unsigned __int64)(v36 + 1) > MmUserProbeAddress )
                        v36 = (double *)MmUserProbeAddress;
                      v34[j + 1] = *v36;
                    }
                    goto LABEL_58;
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
LABEL_58:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i);
      v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v13, 0, a2, Buf1);
      goto LABEL_121;
    }
    if ( a2 > 1 )
    {
      switch ( a2 )
      {
        case 2:
          if ( !a3 )
            goto LABEL_121;
          if ( a4 < 0x10 )
          {
            v8 = -1073741306;
            goto LABEL_121;
          }
          if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v48[0] = *(__m128i *)a3;
          break;
        case 3:
          if ( !a3 )
            goto LABEL_121;
          if ( a4 < 0x20 )
          {
            v8 = -1073741306;
            goto LABEL_121;
          }
          if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v29 = *(__m128i *)(a3 + 16);
          v48[0] = *(__m128i *)a3;
          v48[1] = v29;
          break;
        case 4:
          if ( !a3 )
            goto LABEL_121;
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            goto LABEL_121;
          }
          if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v27 = *(__m128i *)(a3 + 16);
          v28 = *(_DWORD *)(a3 + 32);
          v48[0] = *(__m128i *)a3;
          v48[1] = v27;
          v48[2].m128i_i32[0] = v28;
          break;
        default:
          if ( !a3 )
            goto LABEL_121;
          if ( a4 < 0x64 )
          {
            v8 = -1073741306;
            goto LABEL_121;
          }
          if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v21 = *(__m128i *)(a3 + 16);
          v22 = *(__m128i *)(a3 + 32);
          v23 = *(__m128i *)(a3 + 48);
          v24 = *(__m128i *)(a3 + 64);
          v25 = *(__m128i *)(a3 + 80);
          v26 = *(_DWORD *)(a3 + 96);
          v48[0] = *(__m128i *)a3;
          v48[1] = v21;
          v48[2] = v22;
          v48[3] = v23;
          v48[4] = v24;
          v48[5] = v25;
          v48[6].m128i_i32[0] = v26;
          break;
      }
      goto LABEL_57;
    }
    if ( !a3 )
    {
      Buf1 = 0LL;
      goto LABEL_58;
    }
  }
LABEL_121:
  if ( v8 < 0 )
    goto LABEL_5;
  v14 = 1LL;
LABEL_6:
  if ( !v9 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15, v16, v17, v18);
  }
  if ( v46 )
    Win32FreePool(v46);
  v19 = v47;
  if ( v47 )
    Win32FreePool(v47);
  UserSessionSwitchLeaveCrit(v19, i, v11, v12);
  return v14;
}
