/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C00EE510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C014F360 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, void *a3, struct tagRECT *a4, int a5)
{
  struct tagRECT *v7; // rbx
  struct tagRECT v9; // xmm6
  unsigned int v10; // ebx
  DelayZonePalmRejection *Instance; // rcx
  _BYTE v13[32]; // [rsp+30h] [rbp-88h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-68h]
  struct tagRECT v15; // [rsp+60h] [rbp-58h]
  struct tagRECT v16; // [rsp+80h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+90h] [rbp-28h] BYREF

  v7 = (struct tagRECT *)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v13, a2, (__int64)a3);
  v15 = (struct tagRECT)0LL;
  v14 = (struct tagRECT)0LL;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (struct tagRECT *)MmUserProbeAddress;
  v9 = *v7;
  v15 = *v7;
  v10 = 0;
  if ( a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v14 = *a4;
  }
  Instance = DelayZonePalmRejection::GetInstance();
  if ( Instance )
  {
    v16 = v14;
    v17 = v9;
    v10 = DelayZonePalmRejection::AddDelayZoneToList(Instance, a1, &v17, a3, &v16, a5);
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
