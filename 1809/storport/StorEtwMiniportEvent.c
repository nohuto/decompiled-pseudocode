/*
 * XREFs of StorEtwMiniportEvent @ 0x1C001AA00
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C001A850 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     StorEtwMiniportGetKeyword @ 0x1C004DA24 (StorEtwMiniportGetKeyword.c)
 */

NTSTATUS __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        const struct _MCGEN_TRACE_CONTEXT **a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v15; // r15
  unsigned int v16; // ebx
  EVENT_DESCRIPTOR v17; // xmm0
  unsigned __int64 Keyword; // rax
  __int64 v20; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v21; // rcx
  __int64 v22; // rax
  unsigned int v24; // edx
  __int64 v25; // rdi
  ULONG v26; // r9d
  __int64 Unit; // rax
  int v28; // eax
  _BYTE *v29; // r8
  _BYTE *v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  _BYTE *v33; // rdx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r10d
  const struct _MCGEN_TRACE_CONTEXT **v39; // r11
  __int64 v40; // rsi
  const struct _MCGEN_TRACE_CONTEXT *v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v44; // rdx
  __int64 v45; // rax
  ULONG v46; // r9d
  __int64 *v47; // rcx
  __int64 v48; // rax
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v54; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+70h] [rbp-90h] BYREF
  GUID ActivityId; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  int *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  char *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  char *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int128 *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  _BYTE *v76; // [rsp+120h] [rbp+20h]
  int v77; // [rsp+128h] [rbp+28h]
  int v78; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v79; // [rsp+130h] [rbp+30h]
  int v80; // [rsp+138h] [rbp+38h]
  int v81; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v82; // [rsp+140h] [rbp+40h]
  int v83; // [rsp+148h] [rbp+48h]
  int v84; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  __int64 *v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  int v89; // [rsp+2E8h] [rbp+1E8h] BYREF

  v89 = a4;
  v12 = a9;
  v50 = a9;
  v53 = 0LL;
  v54 = 0LL;
  v15 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v52 = 0LL;
  v49 = 0;
  v56 = 0uLL;
  v51 = 0LL;
  if ( !a3 )
  {
    if ( a9 && StorEtwLoggingEnabled && (byte_1C00617E3 & 0x10) != 0 )
    {
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
      }
      goto LABEL_69;
    }
    if ( a2 )
    {
      if ( !StorEtwLoggingEnabled )
        return 0;
      if ( (byte_1C00617E3 & 0x10) != 0 )
      {
        v16 = a10;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniportLun8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniportLun4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportLun2;
        }
        goto LABEL_69;
      }
    }
    if ( StorEtwLoggingEnabled && (byte_1C00617E3 & 0x10) != 0 )
    {
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniport8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniport4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniport2;
      }
      goto LABEL_69;
    }
    return 0;
  }
  if ( a3 != 1 )
    return -1073741811;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    if ( a9 && (byte_1C00617E4 & 4) != 0 )
    {
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
      }
    }
    else if ( a2 )
    {
      if ( (byte_1C00617E4 & 4) == 0 )
        return 0;
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
      }
    }
    else
    {
      if ( (byte_1C00617E4 & 4) == 0 )
        return 0;
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
      }
    }
  }
  else
  {
    if ( a7 != 3 )
      return 0;
    if ( a9 && byte_1C00617E4 < 0 )
    {
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
      }
    }
    else if ( a2 )
    {
      if ( byte_1C00617E4 >= 0 )
        return 0;
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
      }
    }
    else
    {
      if ( byte_1C00617E4 >= 0 )
        return 0;
      v16 = a10;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
      }
    }
  }
LABEL_69:
  EventDescriptor = v17;
  EventDescriptor.Level = a7;
  EventDescriptor.Opcode = a8;
  Keyword = StorEtwMiniportGetKeyword(a6, v17.Keyword);
  v20 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v20, (__int64)&v53);
  v21 = v54;
  if ( v54 )
  {
    v22 = -1LL;
    while ( *((_WORD *)&v54->RegistrationHandle + ++v22) != 0 )
      ;
    v24 = 2 * v22 + 2;
  }
  else
  {
    v24 = 10;
    v21 = &Context;
  }
  UserData.Ptr = (unsigned __int64)v21;
  UserData.Size = v24;
  UserData.Reserved = 0;
  v59 = &v89;
  v60 = 4LL;
  if ( !a5 )
    return -1073741811;
  v25 = -1LL;
  do
    ++v25;
  while ( *(_WORD *)(a5 + 2 * v25) );
  if ( (unsigned int)(v25 - 1) > 0x1F )
    return -1073741811;
  v61 = a5;
  v62 = 2 * v25 + 2;
  v64 = a1 + 56;
  v66 = a1 + 5256;
  v26 = 5;
  v63 = 0;
  v65 = 4LL;
  v67 = 16LL;
  if ( v12 || a2 )
  {
    LOWORD(v49) = -1;
    BYTE2(v49) = -1;
    if ( a2 )
    {
      if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
      {
        LOWORD(v49) = *(_WORD *)(a2 + 8);
        BYTE2(v49) = *(_BYTE *)(a2 + 10);
        Unit = RaidAdapterFindUnit(a1, v49);
        v12 = v50;
        v15 = Unit;
        if ( Unit )
          v56 = *(_OWORD *)(Unit + 1976);
      }
    }
    v75 = 16LL;
    v70 = (char *)&v49 + 1;
    v72 = (char *)&v49 + 2;
    v68 = &v49;
    v28 = 1;
    v69 = 1LL;
    v74 = &v56;
    v29 = &unk_1C0054E5C;
    v71 = 1LL;
    v73 = 1LL;
    if ( v15 )
    {
      v30 = (_BYTE *)(v15 + 160);
      v31 = -1LL;
      do
        ++v31;
      while ( v30[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 1;
      v30 = &unk_1C0054E5C;
    }
    v76 = v30;
    v77 = v32;
    v78 = 0;
    if ( v15 )
    {
      v33 = (_BYTE *)(v15 + 169);
      v34 = -1LL;
      do
        ++v34;
      while ( v33[v34] );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 1;
      v33 = &unk_1C0054E5C;
    }
    v79 = v33;
    v80 = v35;
    v81 = 0;
    if ( v15 )
    {
      v29 = (_BYTE *)(v15 + 186);
      v36 = -1LL;
      do
        ++v36;
      while ( v29[v36] );
      v28 = v36 + 1;
    }
    v82 = v29;
    v26 = 12;
    v83 = v28;
    v84 = 0;
    if ( v12 )
    {
      if ( *(_BYTE *)(v12 + 2) == 40 )
        v37 = *(_QWORD *)(v12 + 80);
      else
        v37 = *(_QWORD *)(v12 + 48);
      v51 = v37;
      if ( v37 )
        IoGetActivityIdIrp(v37, &ActivityId);
      v86 = 8LL;
      v85 = &v51;
      v26 = 14;
      v88 = 8LL;
      v87 = &v50;
    }
  }
  if ( 2 * v16 > 31 - (unsigned __int64)v26 )
    return -1073741811;
  v38 = 0;
  if ( v16 )
  {
    v39 = a11;
    v40 = a12;
    do
    {
      v41 = *v39;
      if ( !*v39 )
        goto LABEL_114;
      v42 = -1LL;
      do
        ++v42;
      while ( *((_WORD *)&v41->RegistrationHandle + v42) );
      LODWORD(v25) = v42;
      if ( (unsigned int)v42 > 0x10 )
        return -1073741811;
      v43 = 2 * v42 + 2;
      if ( !(_DWORD)v42 )
LABEL_114:
        v43 = 10;
      if ( !v41 || (v44 = *v39, !(_DWORD)v25) )
        v44 = &Context;
      v45 = v26;
      v46 = v26 + 1;
      v45 *= 2LL;
      *(&UserData.Ptr + v45) = (unsigned __int64)v44;
      *(&UserData.Size + 2 * v45) = v43;
      *(&UserData.Reserved + 2 * v45) = 0;
      if ( v41 && (_DWORD)v25 )
        v47 = (__int64 *)(v40 + 8LL * v38);
      else
        v47 = &v52;
      ++v38;
      v48 = 2LL * v46;
      v26 = v46 + 1;
      ++v39;
      *(&UserData.Ptr + v48) = (unsigned __int64)v47;
      *((_QWORD *)&UserData.Size + v48) = 8LL;
    }
    while ( v38 < v16 );
  }
  return EtwWrite(StorPortEventProvider_Context, &EventDescriptor, &ActivityId, v26, &UserData);
}
