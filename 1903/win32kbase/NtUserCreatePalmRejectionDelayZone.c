/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C01169A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0036778 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01821E0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(
        void *a1,
        struct tagRECT *a2,
        void *a3,
        struct tagRECT *a4,
        int a5)
{
  struct tagRECT v9; // xmm6
  unsigned int v10; // ebx
  __int64 v11; // rdx
  DelayZonePalmRejection *Instance; // rcx
  struct tagRECT v14; // [rsp+50h] [rbp-68h]
  struct tagRECT v15; // [rsp+80h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+90h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v14 = (struct tagRECT)0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (struct tagRECT *)MmUserProbeAddress;
  v9 = *a2;
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
    v15 = v14;
    v16 = v9;
    v10 = DelayZonePalmRejection::AddDelayZoneToList(Instance, a1, &v16, a3, &v15, a5);
  }
  UserSessionSwitchLeaveCrit((__int64)Instance, v11);
  return v10;
}
