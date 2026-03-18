/*
 * XREFs of NtUserSlicerControl @ 0x1C021DFE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MagSlicerControl @ 0x1C01BD9C0 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __m128i *a3, unsigned int a4)
{
  int v8; // r14d
  ULONG64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  NTSTATUS v13; // ebx
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // rcx
  ULONG64 v21; // rcx
  __m128i v22; // xmm1
  __m128i *v23; // rcx
  __int64 v24; // xmm0_8
  ULONG64 v25; // rcx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __m128i *v33; // rax
  __int64 v34; // r9
  __m128i *v35; // r8
  __m128i v36; // xmm1
  __int64 ThreadWin32Thread; // rax
  int v38; // eax
  unsigned int Size; // [rsp+34h] [rbp-C4h]
  __m128i *Size_4; // [rsp+38h] [rbp-C0h]
  __m128i *v41; // [rsp+50h] [rbp-A8h]
  __m128i v42[3]; // [rsp+80h] [rbp-78h] BYREF

  Size_4 = 0LL;
  Size = 0;
  memset(v42, 0, sizeof(v42));
  v41 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( !v12 || a2 >= 5 )
  {
    v13 = -1073741811;
LABEL_3:
    v8 = 0;
    v14 = 0LL;
    goto LABEL_4;
  }
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      if ( a3 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      if ( a4 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      Size_4 = 0LL;
      Size = 0;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      if ( a4 < 0x10 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      v25 = (ULONG64)a3;
      i = (ULONG64)&a3[3];
      if ( &a3[3] < a3 || i > MmUserProbeAddress )
        v25 = MmUserProbeAddress;
      v26 = *(__m128i *)(v25 + 16);
      v27 = *(__m128i *)(v25 + 32);
      v42[0] = *(__m128i *)v25;
      v42[1] = v26;
      v42[2] = v27;
      v28 = _mm_cvtsi128_si32(v42[0]);
      if ( v28 > 6 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      v29 = 32LL * v28;
      v30 = -1;
      if ( v29 > 0xFFFFFFFF )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      v31 = v29;
      v32 = v29 + 16;
      if ( v31 + 16 >= v31 )
        v30 = v31 + 16;
      if ( v32 < v31 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      v33 = (__m128i *)Win32AllocPool(v30, 1735226197LL);
      Size_4 = v33;
      if ( !v33 )
      {
        v13 = -1073741801;
        goto LABEL_65;
      }
      v41 = v33;
      *v33 = v42[0];
      for ( i = 0LL; (unsigned int)i < v33->m128i_i32[0]; i = (unsigned int)(i + 1) )
      {
        v34 = 2LL * (unsigned int)i;
        v35 = &a3[v34 + 1];
        if ( &v35[2] < v35 || (unsigned __int64)&v35[2] > MmUserProbeAddress )
          v35 = (__m128i *)MmUserProbeAddress;
        v36 = v35[1];
        v33[v34 + 1] = *v35;
        v33[v34 + 2] = v36;
      }
      Size = v30;
    }
    else if ( a2 == 3 )
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      if ( a4 < 0x18 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      v23 = a3;
      i = (ULONG64)&a3[1].m128i_u64[1];
      if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || i > MmUserProbeAddress )
        v23 = (__m128i *)MmUserProbeAddress;
      v24 = v23[1].m128i_i64[0];
      v42[0] = *v23;
      v42[1].m128i_i64[0] = v24;
      Size_4 = v42;
      Size = 24;
    }
    else
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      if ( a4 < 0x20 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      v21 = (ULONG64)a3;
      i = (ULONG64)&a3[2];
      if ( &a3[2] < a3 || i > MmUserProbeAddress )
        v21 = MmUserProbeAddress;
      v22 = *(__m128i *)(v21 + 16);
      v42[0] = *(__m128i *)v21;
      v42[1] = v22;
      Size_4 = v42;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i);
  v38 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v12, a2, Size_4, Size);
  v13 = v38;
  if ( a2 == 4 && v38 >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__m128i *)MmUserProbeAddress;
    memmove(a3, Size_4, Size);
  }
LABEL_65:
  if ( v13 < 0 )
    goto LABEL_3;
  v14 = 1LL;
LABEL_4:
  if ( !v8 )
  {
    v15 = RtlNtStatusToDosError(v13);
    UserSetLastError(v15, v16, v17, v18);
  }
  v19 = v41;
  if ( v41 )
    Win32FreePool(v41);
  UserSessionSwitchLeaveCrit(v19, i, v10, v11);
  return v14;
}
