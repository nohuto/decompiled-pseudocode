/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C0231500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01D06EC (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  int v9; // r12d
  __int64 i; // rdx
  ULONG64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  double *v19; // rcx
  __int64 v21; // r9
  __int64 ThreadWin32Thread; // rax
  __m128i *v23; // rdx
  unsigned __int32 v24; // r14d
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  double *v27; // rax
  __int64 j; // rcx
  __int32 v29; // eax
  ULONG64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __m128i *v33; // rax
  double *Buf1; // [rsp+48h] [rbp-230h]
  __m128i *v35; // [rsp+60h] [rbp-218h]
  double *v36; // [rsp+68h] [rbp-210h]
  __int64 v37; // [rsp+C0h] [rbp-1B8h]
  __m128i v38; // [rsp+D8h] [rbp-1A0h]
  __int32 v39; // [rsp+E8h] [rbp-190h]
  __m128i v40; // [rsp+100h] [rbp-178h]
  __int64 v41; // [rsp+110h] [rbp-168h]
  __m128i v42; // [rsp+128h] [rbp-150h]
  __m128i v43; // [rsp+138h] [rbp-140h]
  __m128i v44; // [rsp+148h] [rbp-130h]
  __m128i v45; // [rsp+158h] [rbp-120h]
  __m128i v46; // [rsp+168h] [rbp-110h]
  __int32 v47; // [rsp+178h] [rbp-100h]
  __m128i v48; // [rsp+1B0h] [rbp-C8h]
  __m128i v49[7]; // [rsp+1C0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v49, 0, 0x68uLL);
  v36 = 0LL;
  v35 = 0LL;
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
      UserSetLastError(5LL, i, v11, v12);
      goto LABEL_122;
    }
    if ( (unsigned __int8)Enforced(grpdeskRitInput) && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, i, v11, v21);
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
          v30 = a3;
          if ( a3 + 40 < a3 || a3 + 40 > MmUserProbeAddress )
            v30 = MmUserProbeAddress;
          v40 = *(__m128i *)(v30 + 16);
          v41 = *(_QWORD *)(v30 + 32);
          v49[0] = *(__m128i *)v30;
          v49[1] = v40;
          v49[2].m128i_i64[0] = v41;
          v31 = _mm_cvtsi128_si32(v49[0]);
          if ( v31 <= 6 )
          {
            v32 = 24 * v31;
            if ( 24 * (unsigned __int64)v31 <= 0xFFFFFFFF && v32 + 16 >= v32 )
            {
              v33 = (__m128i *)Win32AllocPool(v32 + 16, 1735226197LL);
              Buf1 = (double *)v33;
              if ( v33 )
              {
                v35 = v33;
                *v33 = v49[0];
                for ( i = 0LL; (unsigned int)i < v33->m128i_i32[0]; i = (unsigned int)(i + 1) )
                {
                  v11 = a3 + 16 + 24 * i;
                  if ( v11 + 24 < v11 || v11 + 24 > MmUserProbeAddress )
                    v11 = MmUserProbeAddress;
                  v37 = *(_QWORD *)(v11 + 16);
                  *(__m128i *)((char *)v33 + 24 * i + 16) = *(__m128i *)v11;
                  v33[2].m128i_i64[3 * i] = v37;
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
        if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v29 = *(_DWORD *)a3;
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
        if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v29 = *(_DWORD *)a3;
      }
      v49[0].m128i_i32[0] = v29;
LABEL_57:
      Buf1 = (double *)v49;
      goto LABEL_58;
    }
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x10 )
      {
        v23 = (__m128i *)a3;
        if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
          v23 = (__m128i *)MmUserProbeAddress;
        v49[0] = *v23;
        if ( v49[0].m128i_i32[1] <= 0x19u )
        {
          if ( v49[0].m128i_i32[0] <= 0x19u )
          {
            v24 = v49[0].m128i_i32[1] + v49[0].m128i_i32[0];
            if ( (unsigned int)(v49[0].m128i_i32[1] + v49[0].m128i_i32[0]) >= v49[0].m128i_i32[0] )
            {
              if ( v24 <= 0x19 )
              {
                v25 = 8LL * v24;
                if ( v25 <= 0xFFFFFFFF )
                {
                  v26 = (unsigned int)(v25 + 8);
                  if ( (unsigned int)v26 >= (unsigned int)v25 )
                  {
                    v27 = (double *)Win32AllocPool(v26, 1735226197LL);
                    i = (__int64)v27;
                    Buf1 = v27;
                    if ( v27 )
                    {
                      v36 = v27;
                      *v27 = *(double *)v49[0].m128i_i64;
                      for ( j = 0LL; (unsigned int)j < v24; j = (unsigned int)(j + 1) )
                      {
                        v11 = a3 + 8 + 8 * j;
                        if ( v11 + 8 < v11 || v11 + 8 > MmUserProbeAddress )
                          v11 = MmUserProbeAddress;
                        v27[j + 1] = *(double *)v11;
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, v11);
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
          v49[0] = *(__m128i *)a3;
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
          v48 = *(__m128i *)(a3 + 16);
          v49[0] = *(__m128i *)a3;
          v49[1] = v48;
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
          v38 = *(__m128i *)(a3 + 16);
          v39 = *(_DWORD *)(a3 + 32);
          v49[0] = *(__m128i *)a3;
          v49[1] = v38;
          v49[2].m128i_i32[0] = v39;
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
          v42 = *(__m128i *)(a3 + 16);
          v43 = *(__m128i *)(a3 + 32);
          v44 = *(__m128i *)(a3 + 48);
          v45 = *(__m128i *)(a3 + 64);
          v46 = *(__m128i *)(a3 + 80);
          v47 = *(_DWORD *)(a3 + 96);
          v49[0] = *(__m128i *)a3;
          v49[1] = v42;
          v49[2] = v43;
          v49[3] = v44;
          v49[4] = v45;
          v49[5] = v46;
          v49[6].m128i_i32[0] = v47;
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
LABEL_122:
  if ( v8 < 0 )
    goto LABEL_5;
  v14 = 1LL;
LABEL_6:
  if ( !v9 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15, v16, v17, v18);
  }
  if ( v35 )
    Win32FreePool(v35);
  v19 = v36;
  if ( v36 )
    Win32FreePool(v36);
  UserSessionSwitchLeaveCrit(v19);
  return v14;
}
