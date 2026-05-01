/*
 * XREFs of ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18004D4D4
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18004CF70 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003DA00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18004DD7C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x18004DE7C (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetAppIdFromProcessId(DWORD dwProcessId, unsigned int **a2, unsigned __int16 **a3)
{
  HANDLE v4; // rax
  unsigned __int16 **v5; // r8
  int ProcessAppId; // edi
  signed int LastError; // eax
  HANDLE ProcessHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  CAutoHandle<void *>::CAutoHandle<void *>(&ProcessHandle, v4);
  if ( ProcessHandle )
    goto LABEL_2;
  LastError = GetLastError();
  ProcessAppId = LastError;
  if ( LastError > 0 )
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
  if ( ProcessAppId >= 0 )
LABEL_2:
    ProcessAppId = CallerIdentity::GetProcessAppId(ProcessHandle, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>(&ProcessHandle);
  return (unsigned int)ProcessAppId;
}
