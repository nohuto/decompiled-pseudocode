/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C003A190
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C006D668 (DwmSyncGetCompositionAttribute.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  NTSTATUS CompositionAttribute; // edi
  size_t v6; // r13
  __int64 CurrentProcessWow64Process; // rax
  ULONG v8; // r8d
  __int64 v9; // r12
  void *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __m256i *v20; // rax
  int v21; // eax
  bool v22; // al
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v27; // rbx
  unsigned __int32 v28; // r12d
  __int64 v29; // rax
  __m256i *Prop; // rax
  _QWORD *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  ULONG v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  ULONG v37; // r8d
  _QWORD Src[4]; // [rsp+28h] [rbp-1E0h] BYREF
  size_t v39; // [rsp+58h] [rbp-1B0h]
  void *v40[2]; // [rsp+60h] [rbp-1A8h]
  SIZE_T v41; // [rsp+70h] [rbp-198h]
  __m256i v42; // [rsp+78h] [rbp-190h] BYREF
  __int64 v43; // [rsp+98h] [rbp-170h]
  __m256i v44; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-140h]
  __m128i v46; // [rsp+D0h] [rbp-138h]
  SIZE_T Length; // [rsp+E0h] [rbp-128h]
  __int128 v48; // [rsp+E8h] [rbp-120h]
  __int128 v49; // [rsp+F8h] [rbp-110h]
  __int64 v50; // [rsp+110h] [rbp-F8h]
  int v51[10]; // [rsp+128h] [rbp-E0h] BYREF
  int v52[10]; // [rsp+150h] [rbp-B8h] BYREF
  int v53[10]; // [rsp+178h] [rbp-90h] BYREF
  int v54[26]; // [rsp+1A0h] [rbp-68h] BYREF

  CompositionAttribute = -1073741811;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v41 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  memset(Src, 0, 24);
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || (unsigned __int64)&a2[1].m128i_u64[1] > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v46 = *a2;
  Length = a2[1].m128i_u64[0];
  *(__m128i *)v40 = v46;
  v41 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, a2, a3, a4);
  v8 = 4;
  v9 = 1LL;
  if ( CurrentProcessWow64Process )
    v8 = 1;
  ProbeForWrite((volatile void *)_mm_srli_si128(v46, 8).m128i_i64[0], (unsigned int)Length, v8);
  if ( (unsigned int)(v46.m128i_i32[0] - 1) <= 0x18 )
  {
    v6 = qword_1C02DCE78[2 * v46.m128i_i32[0]];
    v39 = v6;
    if ( (unsigned int)Length < v6 )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_71;
  v10 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v16 = (_QWORD *)v11;
  if ( !v11 )
    goto LABEL_70;
  if ( LODWORD(v40[0]) == 18 )
  {
    v12 = 0LL;
    v27 = (_QWORD *)v11;
    v28 = v44.m256i_i32[0];
    while ( 1 )
    {
      v29 = v27[10];
      if ( v29 )
      {
        v14 = 0LL;
        v13 = v27[3];
        if ( v13 )
        {
          v13 = *(_QWORD *)(v13 + 8);
          if ( v13 )
            v14 = *(_QWORD *)(v13 + 24);
        }
        if ( v29 == v14 )
          goto LABEL_56;
      }
      if ( (*(_BYTE *)(v27[5] + 26LL) & 8) != 0 )
      {
        v31 = v27;
        do
        {
          v13 = v31[10];
          if ( v13 )
          {
            v32 = 0LL;
            v14 = v31[3];
            if ( v14 )
            {
              v33 = *(_QWORD *)(v14 + 8);
              if ( v33 )
                v32 = *(_QWORD *)(v33 + 24);
            }
            if ( v13 == v32 )
              break;
          }
          v31 = (_QWORD *)v31[10];
        }
        while ( v13 );
        if ( v31 )
        {
LABEL_56:
          Prop = (__m256i *)RealGetProp(v27[15], (unsigned __int16)atomDWMProp, 1LL);
          if ( Prop )
          {
            v44 = *Prop;
            v45 = Prop[1].m256i_i64[0];
            v28 = v44.m256i_i32[0];
          }
          else
          {
            v28 &= 0xFFFF0000;
            v44.m256i_i64[0] = v28;
            v48 = 0uLL;
            memset(&v44.m256i_u64[1], 0, 24);
            v45 = 0LL;
          }
          v13 = 0LL;
          if ( (v28 & 0x400) != 0 || (v28 & 0x2000) != 0 )
            v13 = 1LL;
          v12 = (unsigned int)v13 | 2;
          if ( (v28 & 0x800) == 0 )
            v12 = (unsigned int)v13;
          if ( (_DWORD)v12 )
            break;
        }
      }
      v27 = (_QWORD *)v27[10];
      if ( !v27 )
        goto LABEL_49;
    }
    if ( v27 != v16 )
      v12 = (unsigned int)v12 | 4;
LABEL_49:
    LODWORD(Src[0]) = v12;
    v9 = 1LL;
    goto LABEL_34;
  }
  if ( LODWORD(v40[0]) == 21 )
  {
    v35 = *(_QWORD *)(v11 + 40);
    v13 = *(_BYTE *)(v35 + 234) & 0x10;
    LODWORD(Src[0]) = *(_BYTE *)(v35 + 234) & 0x10;
    goto LABEL_34;
  }
  v17 = *(_QWORD *)(v11 + 80);
  if ( !v17 )
    goto LABEL_108;
  v18 = 0LL;
  v13 = v16[3];
  if ( v13 )
  {
    v12 = *(_QWORD *)(v13 + 8);
    if ( v12 )
      v18 = *(_QWORD *)(v12 + 24);
  }
  if ( v17 != v18 )
  {
LABEL_108:
    if ( LODWORD(v40[0]) != 20 || !IsTopLevelOrLayeredChildWindow((__int64)v16) )
      goto LABEL_70;
  }
  switch ( LODWORD(v40[0]) )
  {
    case 1:
      if ( v17 )
      {
        v19 = 0LL;
        v13 = v16[3];
        if ( v13 )
        {
          v13 = *(_QWORD *)(v13 + 8);
          if ( v13 )
            v19 = *(_QWORD *)(v13 + 24);
        }
        if ( v17 == v19 )
          goto LABEL_25;
      }
      if ( (*(_BYTE *)(v16[5] + 26LL) & 8) != 0 && GetTopLevelWindow((__int64)v16) )
      {
LABEL_25:
        v20 = (__m256i *)RealGetProp(v16[15], (unsigned __int16)atomDWMProp, 1LL);
        if ( v20 )
        {
          v42 = *v20;
          v43 = v20[1].m256i_i64[0];
          v14 = v42.m256i_u32[1];
          v12 = v42.m256i_u32[0];
        }
        else
        {
          v12 = v42.m256i_i32[0] & 0xFFFF0000;
          v42.m256i_i64[0] = v12;
          v14 = 0LL;
          v49 = 0uLL;
          memset(&v42.m256i_u64[1], 0, 24);
          v50 = 0LL;
          v43 = 0LL;
        }
        v13 = v16[5];
        v21 = *(_DWORD *)(v13 + 24);
        if ( ((v21 & 0x80000) == 0 || (v21 & 0x20000000) != 0) && (v12 & 1) == 0 )
        {
          if ( (_DWORD)v14 )
          {
            if ( (_DWORD)v14 == 2 )
              LODWORD(v10) = 1;
          }
          else
          {
            v13 = *(unsigned __int8 *)(v13 + 30);
            v22 = (v13 & 0xC0) != 0xC0;
            LOBYTE(v13) = ~((unsigned __int8)v13 >> 2);
            if ( ((unsigned __int8)v13 & v22 & 1) == 0 )
              LODWORD(v10) = 1;
          }
        }
      }
LABEL_33:
      LODWORD(Src[0]) = (_DWORD)v10;
      goto LABEL_34;
    case 0x14:
      if ( (unsigned int)GetWindowCompositionInfo((__int64)v16, (__int64)v51) && (v51[0] & 0x1000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    case 0x17:
      if ( (unsigned int)GetWindowCompositionInfo((__int64)v16, (__int64)v52) && (v52[0] & 0x2000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    case 0x18:
      if ( (unsigned int)GetWindowCompositionInfo((__int64)v16, (__int64)v53) && (v53[0] & 0x4000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    case 0x19:
      if ( (unsigned int)GetWindowCompositionInfo((__int64)v16, (__int64)v54) && (v54[0] & 0x8000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(v16) )
  {
LABEL_70:
    CompositionAttribute = -1073741816;
    goto LABEL_35;
  }
LABEL_34:
  v10 = (void *)ReferenceDwmApiPort(v13, v12, v14);
LABEL_35:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  if ( CompositionAttribute >= 0 && LODWORD(v40[0]) != 18 && LODWORD(v40[0]) != 1 )
  {
    switch ( LODWORD(v40[0]) )
    {
      case 5:
      case 8:
        goto LABEL_79;
      case 0xC:
        v36 = PsGetCurrentProcessWow64Process(v23, 0x1C0000000uLL, v24, v25);
        v37 = 4;
        if ( v36 )
          v37 = 1;
        ProbeForRead(v40[1], 4uLL, v37);
        LODWORD(Src[0]) = *(_DWORD *)v40[1];
LABEL_79:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v10);
        v10 = 0LL;
        break;
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v10);
  if ( CompositionAttribute < 0 )
  {
LABEL_71:
    v34 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v34);
    return 0LL;
  }
  memmove(v40[1], Src, v6);
  return v9;
}
