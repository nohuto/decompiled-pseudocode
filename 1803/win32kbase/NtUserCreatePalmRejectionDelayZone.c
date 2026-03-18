/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C00B55E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z @ 0x1C012C0EC (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3)
{
  struct tagRECT *v3; // rbx
  struct tagRECT v5; // xmm6
  DelayZonePalmRejection *Instance; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF

  v3 = (struct tagRECT *)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v11, a2, a3);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct tagRECT *)MmUserProbeAddress;
  v5 = *v3;
  Instance = DelayZonePalmRejection::GetInstance();
  v8 = 0;
  if ( Instance )
  {
    v10 = v5;
    v8 = DelayZonePalmRejection::AddDelayZoneToList(Instance, a1, &v10);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
