/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1406F639C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406F62C0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x140197810 (wcschr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406D4D1C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        _QWORD *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  _QWORD *v11; // r13
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // di
  wchar_t *v16; // rax
  _QWORD *v17; // r12
  int v18; // eax
  int v19; // ecx
  int RegValueMappedProperty; // ebx
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rax
  wchar_t *v26; // rax
  HANDLE v27; // rdx
  int v28; // eax
  unsigned int v29; // edx
  __int64 **i; // r8
  __int64 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 **v34; // rdi
  __int64 v35; // [rsp+20h] [rbp-30h]
  __int64 v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+44h] [rbp-Ch]
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  _QWORD *v40; // [rsp+90h] [rbp+40h]
  char v41; // [rsp+A8h] [rbp+58h]
  char v42; // [rsp+C8h] [rbp+78h]

  v40 = a1;
  Handle = 0LL;
  v11 = a1;
  v37 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v38 = 0;
  v41 = 0;
  if ( v12 != 3 )
    goto LABEL_42;
  LODWORD(a1) = 1956831636;
  v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
    v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v13 )
  {
LABEL_42:
    if ( v12 != 2 )
      goto LABEL_59;
    v25 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v25 )
    {
LABEL_59:
      v29 = 0;
      for ( i = &off_140357478; ; i += 5 )
      {
        v31 = *i;
        if ( *((_DWORD *)*i + 4) == v12 )
        {
          v32 = *v31 - *(_QWORD *)a4;
          if ( *v31 == *(_QWORD *)a4 )
            v32 = v31[1] - *(_QWORD *)(a4 + 8);
          if ( !v32 )
            break;
        }
        if ( ++v29 )
          return (unsigned int)-1073741802;
      }
      v33 = 5LL * v29;
      v34 = &(&off_140357478)[5 * v29];
      if ( v34 )
      {
        if ( !a3 )
        {
          RegValueMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
          if ( RegValueMappedProperty < 0 )
            goto LABEL_21;
          a3 = Handle;
        }
        RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v33, a3, (__int64)v34, a5, a6, a7, a8);
        goto LABEL_21;
      }
      return (unsigned int)-1073741802;
    }
  }
  else
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
    {
      v15 = 1;
      v42 = 1;
      goto LABEL_9;
    }
  }
  v15 = 0;
  v42 = 0;
LABEL_9:
  if ( *(_WORD *)a2 != 64 || (v26 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v16 = v26 + 1) == 0LL )
    v16 = (wchar_t *)a2;
  if ( v16 == (wchar_t *)a2 && !v11[5] )
  {
    v17 = (_QWORD *)v11[2];
    if ( v17 == v11 + 2 )
      goto LABEL_20;
    while ( 1 )
    {
      LOBYTE(v36) = 0;
      LODWORD(v35) = 1;
      v18 = DrvDbOpenObjectRegKey(v40, v17, 5u, a2, v35, v36, &Handle, 0LL);
      RegValueMappedProperty = v18;
      if ( v18 >= 0 )
      {
        v41 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v19,
                                   (_DWORD)Handle,
                                   v38 + (int)a6,
                                   (a7 - v38) >> 1,
                                   (__int64)&v37,
                                   v42);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_27;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
LABEL_18:
            if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
              goto LABEL_21;
            if ( v41 )
            {
              if ( *a8 )
              {
                *a5 = 8210;
                v24 = *a8 + 2;
                *a8 = v24;
                if ( a6 && v24 <= a7 )
                  a6[((unsigned __int64)v24 >> 1) - 1] = 0;
                else
                  RegValueMappedProperty = -1073741789;
              }
              else
              {
                RegValueMappedProperty = -1073741275;
              }
            }
            else
            {
LABEL_20:
              RegValueMappedProperty = -1073741772;
            }
            goto LABEL_21;
          }
LABEL_27:
          v22 = 2 * v37 - 2;
          if ( (unsigned int)(2 * v37) <= 2 )
            v22 = 2 * v37;
          if ( a6 )
          {
            v23 = v38;
            if ( v22 + v38 < a7 )
              v23 = v22 + v38;
            v38 = v23;
          }
          *a8 += v22;
          goto LABEL_17;
        }
      }
      else if ( v18 != -1073741772 )
      {
        goto LABEL_18;
      }
      RegValueMappedProperty = 0;
LABEL_17:
      v17 = (_QWORD *)*v17;
      if ( v17 == v40 + 2 )
        goto LABEL_18;
    }
  }
  v27 = 0LL;
  if ( a3 != (HANDLE)-1LL )
    v27 = a3;
  if ( !v27 )
  {
    RegValueMappedProperty = DrvDbOpenObjectRegKey(v11, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_21;
    LODWORD(v27) = (_DWORD)Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                             (_DWORD)a1,
                             (_DWORD)v27,
                             (_DWORD)a6,
                             a7 >> 1,
                             (__int64)&v37,
                             v15);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v28 = 2 * v37;
    *a5 = 8210;
    *a8 = v28;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
