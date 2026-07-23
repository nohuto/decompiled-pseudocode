/*
 * XREFs of PfSnBeginAppLaunch @ 0x140667DB4
 * Callers:
 *     PfProcessCreateNotification @ 0x140667D1C (PfProcessCreateNotification.c)
 *     PfSnAppLaunchScenarioControl @ 0x14086694C (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfSnCheckScenario @ 0x140667FB0 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x14066874C (PfSnLogScenarioDecision.c)
 *     PfSnCheckModernApp @ 0x1406688C0 (PfSnCheckModernApp.c)
 *     PfSnScanCommandLine @ 0x140668BB4 (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x140668EAC (PfSnIsHostingApplication.c)
 *     PfSnFindImageFileName @ 0x140668FB0 (PfSnFindImageFileName.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(__int64 a1, __int128 *a2, int a3)
{
  void *v6; // rdi
  int v7; // r14d
  int v8; // ebx
  const void *ImageFileName; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int8 IsHostingApplication; // al
  int v14; // ecx
  int v16; // eax
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  void *v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t SubStr[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[256]; // [rsp+B0h] [rbp-50h] BYREF

  v18 = 0LL;
  v17 = 0;
  v6 = 0LL;
  memset(SubStr, 0, sizeof(SubStr));
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, &v19);
  if ( v8 < 0 )
    goto LABEL_17;
  if ( !a2 )
  {
    v16 = PfCalculateProcessHash(a1, &v18);
    v6 = v18;
    v8 = v16;
    if ( v16 < 0 )
    {
LABEL_17:
      PfSnLogScenarioDecision((unsigned int)SubStr, 0, 0, 15, 15, v8, -1LL);
      goto LABEL_14;
    }
    a2 = (__int128 *)v18;
  }
  v21 = *a2;
  ImageFileName = (const void *)PfSnFindImageFileName(a2, &v18);
  if ( !ImageFileName )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  v10 = (unsigned int)v18;
  if ( (unsigned int)v18 >= 0x1D )
    v10 = 29LL;
  v11 = v10;
  memmove(SubStr, ImageFileName, 2 * v10);
  v12 = *(_DWORD *)(a1 + 1180);
  SubStr[v11] = 0;
  *(_DWORD *)&SubStr[30] = v12;
  IsHostingApplication = PfSnIsHostingApplication(SubStr);
  v8 = PfSnScanCommandLine(&v17, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_17;
  *(_DWORD *)&SubStr[30] += v17;
  v20 = 256LL;
  v8 = PfSnCheckModernApp(&v18, &v17, v23, &v20);
  if ( v8 < 0 )
    goto LABEL_17;
  v14 = *(_DWORD *)&SubStr[30];
  if ( (_DWORD)v18 )
  {
    v14 = v17 + *(_DWORD *)&SubStr[30];
    *((_QWORD *)&v21 + 1) = v23;
    v7 = 8;
    LOWORD(v21) = v20;
    WORD1(v21) = v20;
  }
  *(_DWORD *)&SubStr[30] = a3 + v14;
  if ( (dword_14043D3D0 & 0x20) != 0 || v19 == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(a1, (unsigned int)SubStr, 0, v7, (__int64)&v21);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_14:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
