/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C00734E0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C007239C (IsTopLevelOrLayeredChildWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C00BA530 (DwmSyncGetCompositionAttribute.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C0240D78 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS CompositionAttribute; // r15d
  __int64 v3; // rsi
  ULONG64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v6; // r8d
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r13
  int v14; // r10d
  _QWORD *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  __int128 *Prop; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  bool v31; // al
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG v35; // r8d
  _DWORD *v36; // rbx
  bool v37; // sf
  ULONG v38; // eax
  _QWORD Src[3]; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-98h] BYREF
  SIZE_T Length; // [rsp+50h] [rbp-88h]
  NTSTATUS v44; // [rsp+68h] [rbp-70h]
  __m128i v45; // [rsp+70h] [rbp-68h]
  __int64 v46; // [rsp+80h] [rbp-58h]
  size_t Size; // [rsp+88h] [rbp-50h]
  volatile void *Address[2]; // [rsp+90h] [rbp-48h]
  SIZE_T v49; // [rsp+A0h] [rbp-38h]

  v46 = a1;
  CompositionAttribute = -1073741811;
  Address[0] = 0LL;
  Address[1] = 0LL;
  v3 = 0LL;
  Size = 0LL;
  memset(Src, 0, sizeof(Src));
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v45 = *a2;
  Length = a2[1].m128i_u64[0];
  *(__m128i *)Address = v45;
  v49 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = 4;
  if ( CurrentProcessWow64Process )
    v6 = 1;
  ProbeForWrite((volatile void *)_mm_srli_si128(v45, 8).m128i_i64[0], (unsigned int)Length, v6);
  if ( (unsigned int)(v45.m128i_i32[0] - 1) <= 0x19 )
  {
    Size = qword_1C02CDEF8[2 * v45.m128i_i32[0]];
    CompositionAttribute = (unsigned int)Length < Size ? 0xC0000023 : 0;
    v44 = CompositionAttribute;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_99;
  v7 = 0LL;
  v45.m128i_i64[0] = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = (_QWORD *)v8;
  if ( v8 )
  {
    if ( LODWORD(Address[0]) == 18 )
    {
      v14 = 0;
      v15 = (_QWORD *)v8;
      v16 = v42;
      while ( 1 )
      {
        v9 = v15[10];
        if ( v9 )
        {
          v10 = 0LL;
          v17 = v15[3];
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( v18 )
              v10 = *(_QWORD *)(v18 + 24);
          }
          if ( v9 == v10 )
            goto LABEL_34;
        }
        if ( (*(_BYTE *)(v15[5] + 26LL) & 8) != 0 )
        {
          v19 = v15;
          do
          {
            v10 = v19[10];
            if ( v10 )
            {
              v20 = 0LL;
              v9 = v19[3];
              if ( v9 )
              {
                v21 = *(_QWORD *)(v9 + 8);
                if ( v21 )
                  v20 = *(_QWORD *)(v21 + 24);
              }
              if ( v10 == v20 )
                break;
            }
            v19 = (_QWORD *)v19[10];
          }
          while ( v10 );
          if ( v19 )
          {
LABEL_34:
            Prop = (__int128 *)RealGetProp(v15[15], (unsigned __int16)atomDWMProp, 1LL);
            if ( Prop )
            {
              v42 = *Prop;
              v23 = v42;
            }
            else
            {
              v23 = v16 & 0xFFFF0000;
            }
            v16 = v23 & 0x1FFFF;
            v10 = 0LL;
            if ( (v16 & 0x400) != 0 || (v16 & 0x2000) != 0 )
              v10 = 1LL;
            v14 = v10 | 2;
            if ( (v16 & 0x800) == 0 )
              v14 = v10;
            if ( v14 )
              break;
          }
        }
        v15 = (_QWORD *)v15[10];
        if ( !v15 )
          goto LABEL_39;
      }
      if ( v15 != v13 )
        v14 |= 4u;
LABEL_39:
      LODWORD(Src[0]) = v14;
      goto LABEL_74;
    }
    if ( LODWORD(Address[0]) == 21 )
    {
      v24 = *(_QWORD *)(v8 + 40);
      v10 = *(_BYTE *)(v24 + 234) & 0x10;
      LODWORD(Src[0]) = *(_BYTE *)(v24 + 234) & 0x10;
LABEL_74:
      v7 = (void *)ReferenceDwmApiPort(v10, v9);
      v45.m128i_i64[0] = (__int64)v7;
      goto LABEL_90;
    }
    v25 = *(_QWORD *)(v8 + 80);
    if ( v25 )
    {
      v26 = 0LL;
      v10 = v13[3];
      if ( v10 )
      {
        v9 = *(_QWORD *)(v10 + 8);
        if ( v9 )
          v26 = *(_QWORD *)(v9 + 24);
      }
      if ( v25 == v26 )
        goto LABEL_49;
    }
    if ( LODWORD(Address[0]) == 20 && IsTopLevelOrLayeredChildWindow((__int64)v13) )
    {
LABEL_49:
      switch ( LODWORD(Address[0]) )
      {
        case 1:
          v27 = 0;
          if ( v25 )
          {
            v28 = 0LL;
            v10 = v13[3];
            if ( v10 )
            {
              v10 = *(_QWORD *)(v10 + 8);
              if ( v10 )
                v28 = *(_QWORD *)(v10 + 24);
            }
            if ( v25 == v28 )
              goto LABEL_62;
          }
          if ( (*(_BYTE *)(v13[5] + 26LL) & 8) != 0 && GetTopLevelWindow((__int64)v13) )
          {
LABEL_62:
            v29 = RealGetProp(v13[15], (unsigned __int16)atomDWMProp, 1LL);
            if ( v29 )
            {
              v42 = *(_OWORD *)v29;
              v10 = DWORD1(v42);
              LOBYTE(v29) = v42;
            }
            else
            {
              v29 = 0LL;
              v10 = 0LL;
            }
            v30 = v13[5];
            v9 = *(unsigned int *)(v30 + 24);
            if ( ((v9 & 0x80000) == 0 || (v9 & 0x20000000) != 0) && (v29 & 1) == 0 )
            {
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 2 )
                {
                  LODWORD(Src[0]) = 1;
                  goto LABEL_74;
                }
              }
              else
              {
                v10 = *(unsigned __int8 *)(v30 + 30);
                v31 = (v10 & 0xC0) != 0xC0;
                LOBYTE(v10) = ~((unsigned __int8)v10 >> 2);
                if ( ((unsigned __int8)v10 & v31 & 1) == 0 )
                  v27 = 1;
              }
            }
          }
          LODWORD(Src[0]) = v27;
          goto LABEL_74;
        case 0x14:
          if ( !(unsigned int)GetWindowCompositionInfo((__int64)v13, (__int64)&v42) )
            goto LABEL_87;
          v32 = (v42 & 0x1000) == 0;
LABEL_72:
          if ( !v32 )
          {
            LODWORD(Src[0]) = 1;
            goto LABEL_74;
          }
LABEL_87:
          LODWORD(Src[0]) = 0;
          goto LABEL_74;
        case 0x17:
          if ( !(unsigned int)GetWindowCompositionInfo((__int64)v13, (__int64)&v42) )
            goto LABEL_87;
          v32 = (v42 & 0x2000) == 0;
          goto LABEL_72;
        case 0x18:
          if ( !(unsigned int)GetWindowCompositionInfo((__int64)v13, (__int64)&v42) )
            goto LABEL_87;
          v32 = (v42 & 0x4000) == 0;
          goto LABEL_72;
        case 0x19:
          if ( !(unsigned int)GetWindowCompositionInfo((__int64)v13, (__int64)&v42) )
            goto LABEL_87;
          v32 = (v42 & 0x8000) == 0;
          goto LABEL_72;
        case 0x1A:
          if ( !(unsigned int)GetWindowCompositionInfo((__int64)v13, (__int64)&v42) )
            goto LABEL_87;
          v32 = (v42 & 0x10000) == 0;
          goto LABEL_72;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v13) )
        goto LABEL_74;
    }
  }
  CompositionAttribute = -1073741816;
LABEL_90:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  if ( CompositionAttribute >= 0 )
  {
    switch ( LODWORD(Address[0]) )
    {
      case 1:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
        break;
      case 5:
      case 8:
        goto LABEL_92;
      case 0xC:
        v34 = PsGetCurrentProcessWow64Process(v33);
        v35 = 4;
        if ( v34 )
          v35 = 1;
        v36 = Address[1];
        ProbeForRead(Address[1], 4uLL, v35);
        LODWORD(Src[0]) = *v36;
LABEL_92:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7);
        v7 = 0LL;
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v7);
  if ( CompositionAttribute < 0 )
  {
LABEL_99:
    v38 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v38);
    v37 = CompositionAttribute < 0;
    goto LABEL_100;
  }
  memmove((void *)Address[1], Src, Size);
  v37 = CompositionAttribute < 0;
LABEL_100:
  LOBYTE(v3) = !v37;
  return v3;
}
