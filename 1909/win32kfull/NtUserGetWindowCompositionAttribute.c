/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C0027E10
 * Callers:
 *     <none>
 * Callees:
 *     DwmSyncGetCompositionAttribute @ 0x1C001736C (DwmSyncGetCompositionAttribute.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00689E4 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C0259354 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS CompositionAttribute; // r15d
  __int64 v4; // r14
  ULONG64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v7; // r8d
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r13
  int v14; // r10d
  _QWORD *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int128 *Prop; // rax
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  __int128 *v28; // rax
  char v29; // al
  bool v30; // al
  bool v31; // zf
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // rax
  ULONG v35; // r8d
  _DWORD *v36; // rbx
  bool v37; // sf
  ULONG v38; // eax
  __int128 v40; // [rsp+20h] [rbp-A8h] BYREF
  SIZE_T Length; // [rsp+30h] [rbp-98h]
  __int64 v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h]
  _QWORD Src[3]; // [rsp+48h] [rbp-80h] BYREF
  NTSTATUS v45; // [rsp+60h] [rbp-68h]
  size_t Size; // [rsp+68h] [rbp-60h]
  volatile void *Address[2]; // [rsp+70h] [rbp-58h]
  SIZE_T v48; // [rsp+80h] [rbp-48h]
  __m128i v49; // [rsp+88h] [rbp-40h]

  CompositionAttribute = -1073741811;
  Address[0] = 0LL;
  Address[1] = 0LL;
  v4 = 0LL;
  Size = 0LL;
  memset(Src, 0, sizeof(Src));
  v5 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v5 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v49 = *a2;
  Length = a2[1].m128i_u64[0];
  *(__m128i *)Address = v49;
  v48 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  v7 = 4;
  if ( CurrentProcessWow64Process )
    v7 = 1;
  ProbeForWrite((volatile void *)_mm_srli_si128(v49, 8).m128i_i64[0], (unsigned int)Length, v7);
  if ( (unsigned int)(v49.m128i_i32[0] - 1) <= 0x19 )
  {
    Size = qword_1C02DF5F8[2 * v49.m128i_i32[0]];
    CompositionAttribute = (unsigned int)Length < Size ? 0xC0000023 : 0;
    v45 = CompositionAttribute;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_100;
  v8 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v13 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( LODWORD(Address[0]) == 18 )
    {
      v14 = 0;
      *(_QWORD *)&v40 = 0LL;
      v15 = (_QWORD *)v9;
      v16 = 0;
      while ( 1 )
      {
        v10 = v15[13];
        if ( v10 )
        {
          v11 = 0LL;
          v17 = v15[3];
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( v18 )
              v11 = *(_QWORD *)(v18 + 24);
          }
          if ( v10 == v11 )
            goto LABEL_34;
        }
        if ( (*(_BYTE *)(v15[5] + 26LL) & 8) != 0 )
        {
          v19 = v15;
          do
          {
            v11 = v19[13];
            if ( v11 )
            {
              v20 = 0LL;
              v10 = v19[3];
              if ( v10 )
              {
                v12 = *(_QWORD *)(v10 + 8);
                if ( v12 )
                  v20 = *(_QWORD *)(v12 + 24);
              }
              if ( v11 == v20 )
                break;
            }
            v19 = (_QWORD *)v19[13];
          }
          while ( v11 );
          if ( v19 )
          {
LABEL_34:
            Prop = (__int128 *)GetProp(v15, (unsigned __int16)atomDWMProp, 1LL);
            if ( Prop )
            {
              v40 = *Prop;
              v22 = v40;
            }
            else
            {
              v22 = v16 & 0x10000;
            }
            v16 = v22 & 0x1FFFF;
            v11 = 0LL;
            if ( (v16 & 0x400) != 0 || (v16 & 0x2000) != 0 )
              v11 = 1LL;
            v14 = v11 | 2;
            if ( (v16 & 0x800) == 0 )
              v14 = v11;
            if ( v14 )
              break;
          }
        }
        v15 = (_QWORD *)v15[13];
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
      v23 = *(_QWORD *)(v9 + 40);
      v11 = *(_BYTE *)(v23 + 234) & 0x10;
      LODWORD(Src[0]) = *(_BYTE *)(v23 + 234) & 0x10;
LABEL_74:
      v8 = (void *)ReferenceDwmApiPort(v11, v10, v12);
      goto LABEL_89;
    }
    v24 = *(_QWORD *)(v9 + 104);
    if ( v24 )
    {
      v25 = 0LL;
      v11 = v13[3];
      if ( v11 )
      {
        v10 = *(_QWORD *)(v11 + 8);
        if ( v10 )
          v25 = *(_QWORD *)(v10 + 24);
      }
      if ( v24 == v25 )
        goto LABEL_49;
    }
    if ( LODWORD(Address[0]) == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v13) )
    {
LABEL_49:
      switch ( LODWORD(Address[0]) )
      {
        case 1:
          v26 = 0;
          *(_QWORD *)&v40 = 0LL;
          if ( v24 )
          {
            v27 = 0LL;
            v11 = v13[3];
            if ( v11 )
            {
              v11 = *(_QWORD *)(v11 + 8);
              if ( v11 )
                v27 = *(_QWORD *)(v11 + 24);
            }
            if ( v24 == v27 )
              goto LABEL_62;
          }
          if ( (*(_BYTE *)(v13[5] + 26LL) & 8) != 0 && GetTopLevelWindow(v13) )
          {
LABEL_62:
            v28 = (__int128 *)GetProp(v13, (unsigned __int16)atomDWMProp, 1LL);
            if ( v28 )
            {
              v40 = *v28;
              v11 = DWORD1(v40);
              v29 = v40;
            }
            else
            {
              v29 = 0;
              v11 = 0LL;
            }
            v12 = v13[5];
            v10 = *(unsigned int *)(v12 + 24);
            if ( ((v10 & 0x80000) == 0 || (v10 & 0x20000000) != 0) && (v29 & 1) == 0 )
            {
              if ( (_DWORD)v11 )
              {
                if ( (_DWORD)v11 == 2 )
                {
                  LODWORD(Src[0]) = 1;
                  goto LABEL_74;
                }
              }
              else
              {
                v11 = *(unsigned __int8 *)(v12 + 30);
                v30 = (v11 & 0xC0) != 0xC0;
                LOBYTE(v11) = ~((unsigned __int8)v11 >> 2);
                if ( ((unsigned __int8)v11 & v30 & 1) == 0 )
                  v26 = 1;
              }
            }
          }
          LODWORD(Src[0]) = v26;
          goto LABEL_74;
        case 0x14:
          v40 = 0uLL;
          Length = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( !(unsigned int)GetWindowCompositionInfo(v13, &v40) )
            goto LABEL_74;
          v31 = (v40 & 0x1000) == 0;
LABEL_72:
          if ( !v31 )
            LODWORD(Src[0]) = 1;
          goto LABEL_74;
        case 0x17:
          v40 = 0uLL;
          Length = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( !(unsigned int)GetWindowCompositionInfo(v13, &v40) )
            goto LABEL_74;
          v31 = (v40 & 0x2000) == 0;
          goto LABEL_72;
        case 0x18:
          v40 = 0uLL;
          Length = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( !(unsigned int)GetWindowCompositionInfo(v13, &v40) )
            goto LABEL_74;
          v31 = (v40 & 0x4000) == 0;
          goto LABEL_72;
        case 0x19:
          v40 = 0uLL;
          Length = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( !(unsigned int)GetWindowCompositionInfo(v13, &v40) )
            goto LABEL_74;
          v31 = (v40 & 0x8000) == 0;
          goto LABEL_72;
        case 0x1A:
          v40 = 0uLL;
          Length = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( !(unsigned int)GetWindowCompositionInfo(v13, &v40) )
            goto LABEL_74;
          v31 = (v40 & 0x10000) == 0;
          goto LABEL_72;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v13) )
        goto LABEL_74;
    }
  }
  CompositionAttribute = -1073741816;
LABEL_89:
  UserSessionSwitchLeaveCrit(v11);
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
        v33 = 5;
        goto LABEL_92;
      case 8:
        v33 = 8;
        goto LABEL_92;
      case 0xC:
        v34 = PsGetCurrentProcessWow64Process(v32);
        v35 = 4;
        if ( v34 )
          v35 = 1;
        v36 = Address[1];
        ProbeForRead(Address[1], 4uLL, v35);
        LODWORD(Src[0]) = *v36;
        v33 = 12;
LABEL_92:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v8, a1, v33, Src);
        v8 = 0LL;
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v8);
  if ( CompositionAttribute < 0 )
  {
LABEL_100:
    v38 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v38);
    v37 = CompositionAttribute < 0;
    goto LABEL_101;
  }
  memmove((void *)Address[1], Src, Size);
  v37 = CompositionAttribute < 0;
LABEL_101:
  LOBYTE(v4) = !v37;
  return v4;
}
