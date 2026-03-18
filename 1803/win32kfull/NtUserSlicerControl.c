/*
 * XREFs of NtUserSlicerControl @ 0x1C01F6510
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     MagSlicerControl @ 0x1C019C834 (MagSlicerControl.c)
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
  __m128i *v17; // rcx
  ULONG64 v19; // rcx
  __m128i *v20; // rcx
  ULONG64 v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __m128i *v27; // rax
  __int64 v28; // r9
  __m128i *v29; // r8
  __m128i v30; // xmm1
  __int64 ThreadWin32Thread; // rax
  int v32; // eax
  unsigned int Size; // [rsp+34h] [rbp-144h]
  __m128i *Size_4; // [rsp+38h] [rbp-140h]
  __m128i *v35; // [rsp+50h] [rbp-128h]
  __int64 v36; // [rsp+90h] [rbp-E8h]
  __m128i v37; // [rsp+A8h] [rbp-D0h]
  __m128i v38; // [rsp+E8h] [rbp-90h]
  __m128i v39; // [rsp+F8h] [rbp-80h]
  __m128i v40[3]; // [rsp+108h] [rbp-70h] BYREF

  Size_4 = 0LL;
  Size = 0;
  memset(v40, 0, sizeof(v40));
  v35 = 0LL;
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
      v21 = (ULONG64)a3;
      i = (ULONG64)&a3[3];
      if ( &a3[3] < a3 || i > MmUserProbeAddress )
        v21 = MmUserProbeAddress;
      v38 = *(__m128i *)(v21 + 16);
      v39 = *(__m128i *)(v21 + 32);
      v40[0] = *(__m128i *)v21;
      v40[1] = v38;
      v40[2] = v39;
      v22 = _mm_cvtsi128_si32(v40[0]);
      if ( v22 > 6 )
      {
        v13 = -1073741306;
        goto LABEL_65;
      }
      v23 = 32LL * v22;
      v24 = -1;
      if ( v23 > 0xFFFFFFFF )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      v25 = v23;
      v26 = v23 + 16;
      if ( v25 + 16 >= v25 )
        v24 = v25 + 16;
      if ( v26 < v25 )
      {
        v13 = -1073741811;
        goto LABEL_65;
      }
      v27 = (__m128i *)Win32AllocPool(v24, 1735226197LL);
      Size_4 = v27;
      if ( !v27 )
      {
        v13 = -1073741801;
        goto LABEL_65;
      }
      v35 = v27;
      *v27 = v40[0];
      for ( i = 0LL; (unsigned int)i < v27->m128i_i32[0]; i = (unsigned int)(i + 1) )
      {
        v28 = 2LL * (unsigned int)i;
        v29 = &a3[v28 + 1];
        if ( &v29[2] < v29 || (unsigned __int64)&v29[2] > MmUserProbeAddress )
          v29 = (__m128i *)MmUserProbeAddress;
        v30 = v29[1];
        v27[v28 + 1] = *v29;
        v27[v28 + 2] = v30;
      }
      Size = v24;
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
      v20 = a3;
      i = (ULONG64)&a3[1].m128i_u64[1];
      if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || i > MmUserProbeAddress )
        v20 = (__m128i *)MmUserProbeAddress;
      v36 = v20[1].m128i_i64[0];
      v40[0] = *v20;
      v40[1].m128i_i64[0] = v36;
      Size_4 = v40;
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
      v19 = (ULONG64)a3;
      i = (ULONG64)&a3[2];
      if ( &a3[2] < a3 || i > MmUserProbeAddress )
        v19 = MmUserProbeAddress;
      v37 = *(__m128i *)(v19 + 16);
      v40[0] = *(__m128i *)v19;
      v40[1] = v37;
      Size_4 = v40;
      Size = 32;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i);
  v32 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v12, a2, Size_4, Size);
  v13 = v32;
  if ( a2 == 4 && v32 >= 0 )
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
    UserSetLastError(v15, v16);
  }
  v17 = v35;
  if ( v35 )
    Win32FreePool(v35);
  UserSessionSwitchLeaveCrit(v17, i, v10, v11);
  return v14;
}
