/*
 * XREFs of NtUserSlicerControl @ 0x1C02362A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MagSlicerControl @ 0x1C01D1620 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __m128i *a3, unsigned int a4)
{
  int v8; // r14d
  ULONG64 i; // rdx
  __m128i *v10; // r8
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
  __m128i *v22; // rcx
  ULONG64 v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  __m128i *v27; // rax
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
        goto LABEL_62;
      }
      if ( a4 )
      {
        v13 = -1073741306;
        goto LABEL_62;
      }
      Size_4 = 0LL;
      Size = 0;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x10 )
      {
        v13 = -1073741306;
        goto LABEL_62;
      }
      v23 = (ULONG64)a3;
      if ( &a3[3] < a3 || (unsigned __int64)&a3[3] > MmUserProbeAddress )
        v23 = MmUserProbeAddress;
      v36 = *(__m128i *)(v23 + 16);
      v37 = *(__m128i *)(v23 + 32);
      v38[0] = *(__m128i *)v23;
      v38[1] = v36;
      v38[2] = v37;
      v24 = _mm_cvtsi128_si32(v38[0]);
      if ( v24 > 6 )
      {
        v13 = -1073741306;
        goto LABEL_62;
      }
      v25 = 32LL * v24;
      if ( v25 > 0xFFFFFFFF )
      {
        v13 = -1073741811;
        goto LABEL_62;
      }
      v26 = v25 + 16;
      if ( (int)v25 + 16 < (unsigned int)v25 )
      {
        v13 = -1073741811;
        goto LABEL_62;
      }
      v27 = (__m128i *)Win32AllocPool(v26, 1735226197LL);
      Size_4 = v27;
      if ( !v27 )
      {
        v13 = -1073741801;
        goto LABEL_62;
      }
      v33 = v27;
      *v27 = v38[0];
      for ( i = 0LL; (unsigned int)i < v27->m128i_i32[0]; i = (unsigned int)(i + 1) )
      {
        v11 = 2LL * (unsigned int)i;
        v10 = &a3[v11 + 1];
        if ( &v10[2] < v10 || (unsigned __int64)&v10[2] > MmUserProbeAddress )
          v10 = (__m128i *)MmUserProbeAddress;
        v28 = v10[1];
        v27[v11 + 1] = *v10;
        v27[v11 + 2] = v28;
      }
      Size = v26;
    }
    else if ( a2 == 3 )
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x18 )
      {
        v13 = -1073741306;
        goto LABEL_62;
      }
      v22 = a3;
      i = (ULONG64)&a3[1].m128i_u64[1];
      if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || i > MmUserProbeAddress )
        v22 = (__m128i *)MmUserProbeAddress;
      v34 = v22[1].m128i_i64[0];
      v38[0] = *v22;
      v38[1].m128i_i64[0] = v34;
      Size_4 = v38;
      Size = 24;
    }
    else
    {
      if ( !a3 )
      {
        v13 = -1073741811;
        goto LABEL_62;
      }
      if ( a4 < 0x20 )
      {
        v13 = -1073741306;
        goto LABEL_62;
      }
      v21 = (ULONG64)a3;
      i = (ULONG64)&a3[2];
      if ( &a3[2] < a3 || i > MmUserProbeAddress )
        v21 = MmUserProbeAddress;
      v35 = *(__m128i *)(v21 + 16);
      v38[0] = *(__m128i *)v21;
      v38[1] = v35;
      Size_4 = v38;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, (__int64)v10, v11 * 16);
  v30 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v12, a2, Size_4, Size);
  v13 = v30;
  if ( a2 == 4 && v30 >= 0 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__m128i *)MmUserProbeAddress;
    memmove(a3, Size_4, Size);
  }
LABEL_62:
  if ( v13 < 0 )
    goto LABEL_3;
  v14 = 1LL;
LABEL_4:
  if ( !v8 )
  {
    v15 = RtlNtStatusToDosError(v13);
    UserSetLastError(v15, v16, v17, v18);
  }
  v19 = v33;
  if ( v33 )
    Win32FreePool(v33);
  UserSessionSwitchLeaveCrit(v19);
  return v14;
}
