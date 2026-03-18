/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C0231B20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01D087C (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  int v9; // r12d
  __int64 i; // rdx
  ULONG64 v11; // r8
  ULONG64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  double *v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __m128i *v22; // rdx
  unsigned __int32 v23; // r14d
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  double *v26; // rax
  __int64 j; // rcx
  __int32 v28; // eax
  ULONG64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __m128i *v32; // rax
  double *Buf1; // [rsp+48h] [rbp-230h]
  __m128i *v34; // [rsp+60h] [rbp-218h]
  double *v35; // [rsp+68h] [rbp-210h]
  __int64 v36; // [rsp+C0h] [rbp-1B8h]
  __m128i v37; // [rsp+D8h] [rbp-1A0h]
  __int32 v38; // [rsp+E8h] [rbp-190h]
  __m128i v39; // [rsp+100h] [rbp-178h]
  __int64 v40; // [rsp+110h] [rbp-168h]
  __m128i v41; // [rsp+128h] [rbp-150h]
  __m128i v42; // [rsp+138h] [rbp-140h]
  __m128i v43; // [rsp+148h] [rbp-130h]
  __m128i v44; // [rsp+158h] [rbp-120h]
  __m128i v45; // [rsp+168h] [rbp-110h]
  __int32 v46; // [rsp+178h] [rbp-100h]
  __m128i v47; // [rsp+1B0h] [rbp-C8h]
  __m128i v48[7]; // [rsp+1C0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v48, 0, 0x68uLL);
  v35 = 0LL;
  v34 = 0LL;
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
      UserSetLastError(5LL, i, v11, v12);
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
          v29 = a3;
          if ( a3 + 40 < a3 || a3 + 40 > MmUserProbeAddress )
            v29 = MmUserProbeAddress;
          v39 = *(__m128i *)(v29 + 16);
          v40 = *(_QWORD *)(v29 + 32);
          v48[0] = *(__m128i *)v29;
          v48[1] = v39;
          v48[2].m128i_i64[0] = v40;
          v30 = _mm_cvtsi128_si32(v48[0]);
          if ( v30 <= 6 )
          {
            v31 = 24 * v30;
            if ( 24 * (unsigned __int64)v30 <= 0xFFFFFFFF && v31 + 16 >= v31 )
            {
              v32 = (__m128i *)Win32AllocPool(v31 + 16, 1735226197LL);
              Buf1 = (double *)v32;
              if ( v32 )
              {
                v34 = v32;
                *v32 = v48[0];
                for ( i = 0LL; (unsigned int)i < v32->m128i_i32[0]; i = (unsigned int)(i + 1) )
                {
                  v12 = 3 * i;
                  v11 = a3 + 16 + 24 * i;
                  if ( v11 + 24 < v11 || v11 + 24 > MmUserProbeAddress )
                    v11 = MmUserProbeAddress;
                  v36 = *(_QWORD *)(v11 + 16);
                  *(__m128i *)((char *)v32 + 24 * i + 16) = *(__m128i *)v11;
                  v32[2].m128i_i64[3 * i] = v36;
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
        v28 = *(_DWORD *)a3;
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
        v28 = *(_DWORD *)a3;
      }
      v48[0].m128i_i32[0] = v28;
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
        v22 = (__m128i *)a3;
        if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
          v22 = (__m128i *)MmUserProbeAddress;
        v48[0] = *v22;
        if ( v48[0].m128i_i32[1] <= 0x19u )
        {
          if ( v48[0].m128i_i32[0] <= 0x19u )
          {
            v23 = v48[0].m128i_i32[1] + v48[0].m128i_i32[0];
            if ( (unsigned int)(v48[0].m128i_i32[1] + v48[0].m128i_i32[0]) >= v48[0].m128i_i32[0] )
            {
              if ( v23 <= 0x19 )
              {
                v24 = 8LL * v23;
                if ( v24 <= 0xFFFFFFFF )
                {
                  v25 = (unsigned int)(v24 + 8);
                  if ( (unsigned int)v25 >= (unsigned int)v24 )
                  {
                    v26 = (double *)Win32AllocPool(v25, 1735226197LL);
                    i = (__int64)v26;
                    Buf1 = v26;
                    if ( v26 )
                    {
                      v35 = v26;
                      *v26 = *(double *)v48[0].m128i_i64;
                      for ( j = 0LL; (unsigned int)j < v23; j = (unsigned int)(j + 1) )
                      {
                        v11 = a3 + 8 + 8 * j;
                        v12 = v11 + 8;
                        if ( v11 + 8 < v11 || v12 > MmUserProbeAddress )
                          v11 = MmUserProbeAddress;
                        v26[j + 1] = *(double *)v11;
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, v11, v12);
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
          v48[0] = *(__m128i *)a3;
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
          v47 = *(__m128i *)(a3 + 16);
          v48[0] = *(__m128i *)a3;
          v48[1] = v47;
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
          v37 = *(__m128i *)(a3 + 16);
          v38 = *(_DWORD *)(a3 + 32);
          v48[0] = *(__m128i *)a3;
          v48[1] = v37;
          v48[2].m128i_i32[0] = v38;
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
          v41 = *(__m128i *)(a3 + 16);
          v42 = *(__m128i *)(a3 + 32);
          v43 = *(__m128i *)(a3 + 48);
          v44 = *(__m128i *)(a3 + 64);
          v45 = *(__m128i *)(a3 + 80);
          v46 = *(_DWORD *)(a3 + 96);
          v48[0] = *(__m128i *)a3;
          v48[1] = v41;
          v48[2] = v42;
          v48[3] = v43;
          v48[4] = v44;
          v48[5] = v45;
          v48[6].m128i_i32[0] = v46;
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
  if ( v34 )
    Win32FreePool(v34);
  v19 = v35;
  if ( v35 )
    Win32FreePool(v35);
  UserSessionSwitchLeaveCrit(v19);
  return v14;
}
