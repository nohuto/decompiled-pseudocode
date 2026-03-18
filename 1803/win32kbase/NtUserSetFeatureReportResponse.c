/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00B9430
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00F4D80 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ecx
  void *v10; // rax
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  PVOID v14; // r13
  char *v15; // rsi
  _DWORD *v16; // rsi
  _DWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  void *v23; // [rsp+38h] [rbp-40h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h] BYREF

  v24 = a3;
  v3 = (unsigned int)a3;
  Object = 0LL;
  v23 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v25, (__int64)a2, a3);
  if ( gpInputExtensibilityCallout )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(gpInputExtensibilityCallout);
  if ( (unsigned int)(v3 - 1) > 6 || (v6 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v9 = 87;
    goto LABEL_64;
  }
  v7 = 1;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v9 = 5;
LABEL_64:
    v7 = 0;
    UserSetLastError(v9);
    goto LABEL_65;
  }
  if ( v6 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v10 = (void *)Win32AllocPoolWithQuota((unsigned int)v6, 0x74697355u);
  v11 = (__int64)v10;
  v23 = v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, a2, (unsigned int)v6);
  v12 = RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, &Object);
  v14 = Object;
  if ( Object )
    v15 = (char *)Object + 80;
  else
    v15 = 0LL;
  if ( v12 >= 0
    && -__CFSHR__(*((_DWORD *)v15 + 50), 8) == 1
    && (v16 = (_DWORD *)*((_QWORD *)v15 + 60), !*(_DWORD *)(*((_QWORD *)Object + 58) + 16LL))
    && (v16[69] & 0x8000) != 0 )
  {
    v25 = 0;
    if ( v24 )
    {
      v17 = (_DWORD *)(v11 + 4);
      while ( 1 )
      {
        v13 = *((unsigned __int16 *)v17 - 2);
        if ( (_WORD)v13 != 13 )
          goto LABEL_40;
        if ( *((_WORD *)v17 - 1) != 85 )
          break;
        v18 = (unsigned int)*v17;
        if ( (int)v18 > 256 || (v19 = (unsigned int)v16[6], (unsigned int)(v19 - 1) > 3) )
        {
          if ( v16[6] != 7 )
            goto LABEL_58;
          v19 = 7LL;
          if ( (int)v18 > 5 )
            goto LABEL_58;
        }
        v13 = (unsigned int)v16[170];
        v20 = v13 - 1;
        if ( (_DWORD)v19 != 7 )
          v20 = v16[170];
        if ( (_DWORD)v18 != v20 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v16, v18, v19, 7LL) )
          goto LABEL_58;
LABEL_34:
        ++v25;
        v17 += 3;
        if ( v25 >= v24 )
          goto LABEL_59;
      }
      if ( *((_WORD *)v17 - 1) == 89 && v16[6] == 7 && *v17 <= 1u )
      {
        v16[216] = *v17;
        goto LABEL_34;
      }
LABEL_40:
      if ( (unsigned __int16)v13 < 0xFF00u )
        goto LABEL_58;
      if ( *((_WORD *)v17 - 1) == 226 && v16[6] == 7 )
      {
        v16[66] = 1;
        v16[62] = *v17;
      }
      else if ( *((_WORD *)v17 - 1) == 227 && v16[6] == 7 )
      {
        v16[66] = 1;
        v16[63] = *v17;
      }
      else if ( *((_WORD *)v17 - 1) == 225 && v16[6] == 7 )
      {
        v16[68] = *v17 != 0;
      }
      else if ( *((_WORD *)v17 - 1) == 228 && v16[6] == 7 && (unsigned int)(*v17 - 1) <= 0x63 )
      {
        v16[67] = 1;
        v16[64] = *v17;
      }
      else
      {
        if ( *((_WORD *)v17 - 1) != 229 || v16[6] != 7 || (unsigned int)(*v17 - 1) > 0x63 )
          goto LABEL_58;
        v16[67] = 1;
        v16[65] = *v17;
      }
      goto LABEL_34;
    }
  }
  else
  {
LABEL_58:
    v7 = 0;
    UserSetLastError(87);
  }
LABEL_59:
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v11 )
    Win32FreePool(v11);
LABEL_65:
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}
