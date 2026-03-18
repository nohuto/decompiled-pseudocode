/*
 * XREFs of WinSqmAddToStream @ 0x1C0120B20
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0061FB4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C006200C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00A4150 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _GUID *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r11d
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  ULONGLONG v17; // rdx
  int v18; // ebx
  void *v19; // r10
  const wchar_t *v20; // r9
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  int *v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  void *v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  unsigned int *v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _BYTE v31[432]; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v33; // [rsp+260h] [rbp+160h] BYREF

  v33 = a3;
  v32 = a2;
  result = (unsigned int)memset(v31, 0, sizeof(v31));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v10 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v10 = (struct _GUID *)&unk_1C01D98B0;
      if ( a1 )
        v10 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v10);
    if ( result )
    {
      v13 = v33;
      UserData.Ptr = (ULONGLONG)v10;
      *(_QWORD *)&UserData.Size = 16LL;
      v14 = 0LL;
      if ( v33 > 9 )
        v13 = 9;
      v26 = 4LL;
      v33 = v13;
      v25 = &v32;
      v27 = &unk_1C0218554;
      v29 = &v33;
      v28 = 4LL;
      v30 = 4LL;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = 3 * v14;
          if ( (unsigned int)(3 * v14 + 6) >= 0x1F )
            break;
          v16 = 2LL * (unsigned int)(v15 + 4);
          v17 = a4 + 16LL * (unsigned int)v14;
          *(&UserData.Ptr + v16) = v17;
          v18 = *(_DWORD *)v17;
          v19 = (void *)(v17 + 8);
          *((_QWORD *)&UserData.Size + v16) = 4LL;
          if ( v18 != 1 )
            v19 = &unk_1C01EC2DC;
          v12 = 2LL * (unsigned int)(v15 + 5);
          *(&UserData.Ptr + v12) = (ULONGLONG)v19;
          *((_QWORD *)&UserData.Size + v12) = 4LL;
          if ( v18 == 2 )
            v20 = *(const wchar_t **)(v17 + 8);
          else
            v20 = L"0";
          v21 = -1LL;
          do
            ++v21;
          while ( v20[v21] );
          v11 = (unsigned int)(2 * v21 + 2);
          v22 = v14 + 2;
          v14 = (unsigned int)(v14 + 1);
          v23 = 2LL * (unsigned int)(3 * v22);
          *(&UserData.Ptr + v23) = (ULONGLONG)v20;
          *(&UserData.Size + 2 * v23) = v11;
          *(&UserData.Reserved + 2 * v23) = 0;
          if ( (unsigned int)v14 >= v13 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
        }
        return MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
      }
    }
  }
  return result;
}
