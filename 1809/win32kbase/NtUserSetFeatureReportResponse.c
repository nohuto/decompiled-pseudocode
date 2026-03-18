/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00F17E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C011D4E0 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C011F8B8 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // r15
  int v12; // eax
  PVOID v13; // r13
  char *v14; // rsi
  _DWORD *v15; // rsi
  _DWORD *v16; // r14
  unsigned __int16 v17; // cx
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
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( (unsigned int)(v3 - 1) > 6 || (v6 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v9 = 87LL;
    goto LABEL_64;
  }
  v7 = 1;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v9 = 5LL;
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
  v12 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v13 = Object;
  if ( Object )
    v14 = (char *)Object + 88;
  else
    v14 = 0LL;
  if ( v12 >= 0
    && -__CFSHR__(*((_DWORD *)v14 + 50), 8) == 1
    && (v15 = (_DWORD *)*((_QWORD *)v14 + 60), !*(_DWORD *)(*((_QWORD *)Object + 59) + 16LL))
    && (v15[77] & 0x8000) != 0 )
  {
    v25 = 0;
    if ( v24 )
    {
      v16 = (_DWORD *)(v11 + 4);
      while ( 1 )
      {
        v17 = *((_WORD *)v16 - 2);
        if ( v17 != 13 )
          goto LABEL_40;
        if ( *((_WORD *)v16 - 1) != 85 )
          break;
        v18 = (unsigned int)*v16;
        if ( (int)v18 > 256 || (v19 = (unsigned int)v15[6], (unsigned int)(v19 - 1) > 3) )
        {
          if ( v15[6] != 7 )
            goto LABEL_58;
          v19 = 7LL;
          if ( (int)v18 > 5 )
            goto LABEL_58;
        }
        v20 = v15[178] - 1;
        if ( (_DWORD)v19 != 7 )
          v20 = v15[178];
        if ( (_DWORD)v18 != v20 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v15, v18, v19, 7LL) )
          goto LABEL_58;
LABEL_34:
        ++v25;
        v16 += 3;
        if ( v25 >= v24 )
          goto LABEL_59;
      }
      if ( *((_WORD *)v16 - 1) == 89 && v15[6] == 7 && *v16 <= 1u )
      {
        v15[224] = *v16;
        goto LABEL_34;
      }
LABEL_40:
      if ( v17 < 0xFF00u )
        goto LABEL_58;
      if ( *((_WORD *)v16 - 1) == 226 && v15[6] == 7 )
      {
        v15[74] = 1;
        v15[70] = *v16;
      }
      else if ( *((_WORD *)v16 - 1) == 227 && v15[6] == 7 )
      {
        v15[74] = 1;
        v15[71] = *v16;
      }
      else if ( *((_WORD *)v16 - 1) == 225 && v15[6] == 7 )
      {
        v15[76] = *v16 != 0;
      }
      else if ( *((_WORD *)v16 - 1) == 228 && v15[6] == 7 && (unsigned int)(*v16 - 1) <= 0x63 )
      {
        v15[75] = 1;
        v15[72] = *v16;
      }
      else
      {
        if ( *((_WORD *)v16 - 1) != 229 || v15[6] != 7 || (unsigned int)(*v16 - 1) > 0x63 )
          goto LABEL_58;
        v15[75] = 1;
        v15[73] = *v16;
      }
      goto LABEL_34;
    }
  }
  else
  {
LABEL_58:
    v7 = 0;
    UserSetLastError(87LL);
  }
LABEL_59:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( v11 )
    Win32FreePool(v11);
LABEL_65:
  UserSessionSwitchLeaveCrit();
  return v7;
}
