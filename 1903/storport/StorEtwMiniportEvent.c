/*
 * XREFs of StorEtwMiniportEvent @ 0x1C001DDA0
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C001DBF0 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0017EAC (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     StorEtwMiniportGetKeyword @ 0x1C004B44C (StorEtwMiniportGetKeyword.c)
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
        unsigned __int64 **a11,
        __int64 a12)
{
  unsigned int v15; // edi
  EVENT_DESCRIPTOR v16; // xmm0
  unsigned __int64 Keyword; // rax
  __int64 v18; // rcx
  unsigned __int64 *p_Logger; // rcx
  __int64 v20; // rax
  unsigned int v22; // edx
  ULONG v23; // r9d
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned __int64 **v27; // r11
  __int64 v28; // rbx
  unsigned __int64 *v29; // rcx
  unsigned int v30; // r8d
  unsigned __int64 *v31; // rdx
  __int64 v32; // rax
  ULONG v33; // r9d
  __int64 *v34; // rcx
  __int64 v35; // rax
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+31h] [rbp-CFh] BYREF
  char v38; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v43; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  __int64 v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  char *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  char *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int64 *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+268h] [rbp+168h] BYREF

  v64 = a4;
  v40 = a9;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a9 && (byte_1C0061744 & 4) != 0 )
        {
          v15 = a10;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
          }
          goto LABEL_100;
        }
        if ( a2 )
        {
          if ( (byte_1C0061744 & 4) != 0 )
          {
            v15 = a10;
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
            }
            goto LABEL_100;
          }
        }
        else if ( (byte_1C0061744 & 4) != 0 )
        {
          v15 = a10;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
          }
          goto LABEL_100;
        }
        return 0;
      }
      if ( a7 == 3 )
      {
        if ( a9 && byte_1C0061744 < 0 )
        {
          v15 = a10;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
          }
          goto LABEL_100;
        }
        if ( a2 )
        {
          if ( byte_1C0061744 < 0 )
          {
            v15 = a10;
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
            }
            goto LABEL_100;
          }
        }
        else if ( byte_1C0061744 < 0 )
        {
          v15 = a10;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
          }
          goto LABEL_100;
        }
        return 0;
      }
LABEL_85:
      v15 = a10;
      goto LABEL_101;
    }
    if ( a3 != 2 )
      return -1073741811;
    if ( (unsigned int)(a7 - 1) > 1 )
    {
      if ( a7 == 3 )
      {
        if ( a2 )
        {
          if ( (byte_1C0061745 & 4) != 0 )
          {
            v15 = a10;
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
            }
            goto LABEL_100;
          }
        }
        else if ( (byte_1C0061745 & 4) != 0 )
        {
          v15 = a10;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
          }
          goto LABEL_100;
        }
        return 0;
      }
      goto LABEL_85;
    }
    if ( a2 )
    {
      if ( (byte_1C0061745 & 2) != 0 )
      {
        v15 = a10;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
        }
        goto LABEL_100;
      }
    }
    else if ( (byte_1C0061745 & 2) != 0 )
    {
      goto LABEL_95;
    }
    if ( (byte_1C0061744 & 4) == 0 )
      return 0;
LABEL_95:
    v15 = a10;
    if ( a10 > 2 )
    {
      if ( a10 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
    }
    goto LABEL_100;
  }
  if ( a9 && StorEtwLoggingEnabled && (byte_1C0061743 & 0x10) != 0 )
  {
    v15 = a10;
    if ( a10 > 2 )
    {
      if ( a10 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
    goto LABEL_100;
  }
  if ( !a2 )
    goto LABEL_8;
  if ( !StorEtwLoggingEnabled )
    return 0;
  if ( (byte_1C0061743 & 0x10) == 0 )
  {
LABEL_8:
    if ( !StorEtwLoggingEnabled || (byte_1C0061743 & 0x10) == 0 )
      return 0;
    v15 = a10;
    if ( a10 > 2 )
    {
      if ( a10 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniport8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniport4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniport2;
    }
    goto LABEL_100;
  }
  v15 = a10;
  if ( a10 > 2 )
  {
    if ( a10 > 4 )
      v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
    else
      v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
  }
  else
  {
    v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
  }
LABEL_100:
  EventDescriptor = v16;
LABEL_101:
  EventDescriptor.Level = a7;
  EventDescriptor.Opcode = a8;
  Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword);
  v18 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v18, (__int64)&v42);
  p_Logger = v43;
  if ( v43 )
  {
    v20 = -1LL;
    while ( *((_WORD *)v43 + ++v20) != 0 )
      ;
    v22 = 2 * v20 + 2;
  }
  else
  {
    v22 = 10;
    p_Logger = &Context.Logger;
  }
  UserData.Ptr = (unsigned __int64)p_Logger;
  v23 = 4;
  UserData.Size = v22;
  UserData.Reserved = 0;
  v47 = &v64;
  v48 = 4LL;
  if ( !a5 )
    return -1073741811;
  v24 = -1LL;
  do
    ++v24;
  while ( *(_WORD *)(a5 + 2 * v24) );
  if ( (unsigned int)(v24 - 1) > 0x1F )
    return -1073741811;
  v49 = a5;
  v50 = 2 * v24 + 2;
  v52 = a1 + 56;
  v51 = 0;
  v53 = 4LL;
  if ( v40 )
  {
    if ( !a2 )
    {
LABEL_116:
      v55 = 1LL;
      v54 = &v36;
      v56 = &v37;
      v58 = &v38;
      v23 = 7;
      v57 = 1LL;
      v59 = 1LL;
      if ( v40 )
      {
        if ( *(_BYTE *)(v40 + 2) == 40 )
          v25 = *(_QWORD *)(v40 + 80);
        else
          v25 = *(_QWORD *)(v40 + 48);
        v39 = v25;
        if ( v25 )
          IoGetActivityIdIrp(v25, &ActivityId);
        v61 = 8LL;
        v60 = &v39;
        v23 = 9;
        v63 = 8LL;
        v62 = &v40;
      }
      goto LABEL_123;
    }
LABEL_114:
    if ( *(_WORD *)a2 == 1 )
    {
      v36 = *(_BYTE *)(a2 + 8);
      v37 = *(_BYTE *)(a2 + 9);
      v38 = *(_BYTE *)(a2 + 10);
    }
    goto LABEL_116;
  }
  if ( a2 )
    goto LABEL_114;
LABEL_123:
  v26 = 0;
  if ( v15 )
  {
    v27 = a11;
    v28 = a12;
    do
    {
      v29 = *v27;
      if ( !*v27 )
        goto LABEL_130;
      v24 = -1LL;
      do
        ++v24;
      while ( *((_WORD *)v29 + v24) );
      if ( (unsigned int)v24 > 0x20 )
        return -1073741811;
      v30 = 2 * v24 + 2;
      if ( !(_DWORD)v24 )
LABEL_130:
        v30 = 10;
      if ( !v29 || (v31 = *v27, !(_DWORD)v24) )
        v31 = &Context.Logger;
      v32 = v23;
      v33 = v23 + 1;
      v32 *= 2LL;
      *(&UserData.Ptr + v32) = (unsigned __int64)v31;
      *(&UserData.Size + 2 * v32) = v30;
      *(&UserData.Reserved + 2 * v32) = 0;
      if ( v29 && (_DWORD)v24 )
        v34 = (__int64 *)(v28 + 8LL * v26);
      else
        v34 = &v41;
      ++v26;
      v35 = 2LL * v33;
      v23 = v33 + 1;
      ++v27;
      *(&UserData.Ptr + v35) = (unsigned __int64)v34;
      *((_QWORD *)&UserData.Size + v35) = 8LL;
    }
    while ( v26 < v15 );
  }
  return EtwWrite(StorPortEventProvider_Context, &EventDescriptor, &ActivityId, v23, &UserData);
}
