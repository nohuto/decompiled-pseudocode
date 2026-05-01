/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D81C
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F950 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003D600 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x1800426D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800438DE (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        char *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v10; // ebx
  NTSTATUS InformationProcess; // eax
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  _BYTE ProcessInformation[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPCVOID lpBaseAddress; // [rsp+38h] [rbp-C8h]
  _BYTE Buffer[32]; // [rsp+60h] [rbp-A0h] BYREF
  LPCVOID v19; // [rsp+80h] [rbp-80h]
  _BYTE v20[36]; // [rsp+3B8h] [rbp+2B8h] BYREF
  int v21; // [rsp+3DCh] [rbp+2DCh]
  _BYTE v22[32]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v23[1024]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v24; // [rsp+800h] [rbp+700h]
  __int64 v25; // [rsp+808h] [rbp+708h]
  char v26; // [rsp+810h] [rbp+710h]
  int v27; // [rsp+811h] [rbp+711h]
  __int16 v28; // [rsp+815h] [rbp+715h]
  char v29; // [rsp+817h] [rbp+717h]
  __int64 v30; // [rsp+818h] [rbp+718h]
  __int64 v31; // [rsp+820h] [rbp+720h]
  _BYTE v32[56]; // [rsp+830h] [rbp+730h] BYREF
  unsigned __int16 v33; // [rsp+868h] [rbp+768h]
  LPCVOID v34; // [rsp+870h] [rbp+770h]

  memset_0(Buffer, 0, 0x354uLL);
  memset_0(v20, 0, sizeof(v20));
  v21 = 0;
  memset_0(v22, 0, sizeof(v22));
  memset_0(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0LL;
  v31 = 0LL;
  memset_0(v32, 0, 0x440uLL);
  memset_0(ProcessInformation, 0, 0x30uLL);
  if ( !a3 || !a4 )
    return 2147500035LL;
  *(_WORD *)a3 = 0;
  v7 = OpenProcess(0x1010u, 0, dwProcessId);
  if ( v7 )
    goto LABEL_9;
  LastError = GetLastError();
  if ( LastError == 5 )
    return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  if ( v10 >= 0 )
  {
LABEL_9:
    InformationProcess = NtQueryInformationProcess(v7, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    v10 = 0;
    if ( InformationProcess < 0 )
      v10 = InformationProcess | 0x10000000;
    if ( v10 >= 0 )
    {
      if ( ReadProcessMemory(v7, lpBaseAddress, Buffer, 0x7C8uLL, 0LL) )
      {
        v10 = 0;
      }
      else
      {
        v12 = GetLastError();
        v10 = (unsigned __int16)v12 | 0x80070000;
        if ( v12 <= 0 )
          v10 = v12;
      }
      if ( v10 >= 0 )
      {
        if ( ReadProcessMemory(v7, v19, v32, 0x440uLL, 0LL) )
        {
          v10 = 0;
        }
        else
        {
          v13 = GetLastError();
          v10 = (unsigned __int16)v13 | 0x80070000;
          if ( v13 <= 0 )
            v10 = v13;
        }
        if ( v10 >= 0 && v34 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v33 < v14 )
          {
            if ( ReadProcessMemory(v7, v34, a3, v14, 0LL) )
            {
              v10 = 0;
            }
            else
            {
              v15 = GetLastError();
              v10 = (unsigned __int16)v15 | 0x80070000;
              if ( v15 <= 0 )
                v10 = v15;
            }
          }
          else
          {
            v10 = -2147024774;
          }
          *(_DWORD *)a4 = (v33 >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v10;
}
