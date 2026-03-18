/*
 * XREFs of NtUserSlicerControl @ 0x1C0235C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MagSlicerControl @ 0x1C01D1490 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __m128i *a3, unsigned int a4)
{
  int v8; // r14d
  ULONG64 i; // rdx
  __m128i *v10; // r8
  __int64 v11; // r13
  NTSTATUS v12; // ebx
  __int64 v13; // rdi
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i *v18; // rcx
  ULONG64 v20; // rcx
  __m128i *v21; // rcx
  ULONG64 v22; // rcx
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  __m128i *v26; // rax
  __int64 v27; // r9
  __m128i v28; // xmm0
  __int64 ThreadWin32Thread; // rax
  int v30; // eax
  unsigned int Size; // [rsp+34h] [rbp-144h]
  __m128i *Size_4; // [rsp+38h] [rbp-140h]
  __m128i *v33; // [rsp+50h] [rbp-128h]
  __int64 v34; // [rsp+90h] [rbp-E8h]
  __m128i v35; // [rsp+A8h] [rbp-D0h]
  __m128i v36; // [rsp+E8h] [rbp-90h]
  __m128i v37; // [rsp+F8h] [rbp-80h]
  __m128i v38[3]; // [rsp+108h] [rbp-70h] BYREF

  Size_4 = 0LL;
  Size = 0;
  memset(v38, 0, sizeof(v38));
  v33 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( !v11 || a2 >= 5 )
  {
    v12 = -1073741811;
LABEL_3:
    v8 = 0;
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      if ( a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      Size_4 = 0LL;
      Size = 0;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x10 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v22 = (ULONG64)a3;
      if ( &a3[3] < a3 || (unsigned __int64)&a3[3] > MmUserProbeAddress )
        v22 = MmUserProbeAddress;
      v36 = *(__m128i *)(v22 + 16);
      v37 = *(__m128i *)(v22 + 32);
      v38[0] = *(__m128i *)v22;
      v38[1] = v36;
      v38[2] = v37;
      v23 = _mm_cvtsi128_si32(v38[0]);
      if ( v23 > 6 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v24 = 32LL * v23;
      if ( v24 > 0xFFFFFFFF )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      v25 = v24 + 16;
      if ( (int)v24 + 16 < (unsigned int)v24 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      v26 = (__m128i *)Win32AllocPool(v25, 1735226197LL);
      Size_4 = v26;
      if ( !v26 )
      {
        v12 = -1073741801;
        goto LABEL_62;
      }
      v33 = v26;
      *v26 = v38[0];
      for ( i = 0LL; (unsigned int)i < v26->m128i_i32[0]; i = (unsigned int)(i + 1) )
      {
        v27 = 2LL * (unsigned int)i;
        v10 = &a3[v27 + 1];
        if ( &v10[2] < v10 || (unsigned __int64)&v10[2] > MmUserProbeAddress )
          v10 = (__m128i *)MmUserProbeAddress;
        v28 = v10[1];
        v26[v27 + 1] = *v10;
        v26[v27 + 2] = v28;
      }
      Size = v25;
    }
    else if ( a2 == 3 )
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x18 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v21 = a3;
      i = (ULONG64)&a3[1].m128i_u64[1];
      if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || i > MmUserProbeAddress )
        v21 = (__m128i *)MmUserProbeAddress;
      v34 = v21[1].m128i_i64[0];
      v38[0] = *v21;
      v38[1].m128i_i64[0] = v34;
      Size_4 = v38;
      Size = 24;
    }
    else
    {
      if ( !a3 )
      {
        v12 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x20 )
      {
        v12 = -1073741306;
        goto LABEL_62;
      }
      v20 = (ULONG64)a3;
      i = (ULONG64)&a3[2];
      if ( &a3[2] < a3 || i > MmUserProbeAddress )
        v20 = MmUserProbeAddress;
      v35 = *(__m128i *)(v20 + 16);
      v38[0] = *(__m128i *)v20;
      v38[1] = v35;
      Size_4 = v38;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, (__int64)v10);
  v30 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v11, a2, Size_4, Size);
  v12 = v30;
  if ( a2 == 4 && v30 >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__m128i *)MmUserProbeAddress;
    memmove(a3, Size_4, Size);
  }
LABEL_62:
  if ( v12 < 0 )
    goto LABEL_3;
  v13 = 1LL;
LABEL_4:
  if ( !v8 )
  {
    v14 = RtlNtStatusToDosError(v12);
    UserSetLastError(v14, v15, v16, v17);
  }
  v18 = v33;
  if ( v33 )
    Win32FreePool(v33);
  UserSessionSwitchLeaveCrit(v18);
  return v13;
}
