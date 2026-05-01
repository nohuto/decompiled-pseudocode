/*
 * XREFs of ?HampSystemSlsWritePhaseBlockerEvent@@YAXPEA_KEPEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@PEBU_GUID@@2_K@Z @ 0x180066168
 * Callers:
 *     ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E6B0 (-HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampSystemSlsWritePhaseBlockerEvent(
        unsigned __int64 *a1,
        char a2,
        struct _HAM_SLEEP_STUDY_BLOCKER_NAME *a3,
        const struct _GUID *a4,
        const struct _GUID *a5,
        char a6)
{
  REGHANDLE v6; // rcx
  int v7; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-29h] BYREF
  const struct _GUID *v9; // [rsp+30h] [rbp-19h]
  __int64 v10; // [rsp+38h] [rbp-11h]
  char *v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h]
  struct _HAM_SLEEP_STUDY_BLOCKER_NAME *v13; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+5Ch] [rbp+13h]
  const struct _GUID *v16; // [rsp+60h] [rbp+17h]
  __int64 v17; // [rsp+68h] [rbp+1Fh]
  char *v18; // [rsp+70h] [rbp+27h]
  __int64 v19; // [rsp+78h] [rbp+2Fh]
  char v20; // [rsp+A8h] [rbp+5Fh] BYREF

  v20 = a2;
  v6 = *a1;
  UserData.Ptr = (ULONGLONG)&v20;
  v9 = a5;
  v11 = (char *)a3 + 512;
  v7 = *((_DWORD *)a3 + 128);
  v13 = a3;
  v14 = 2 * v7;
  v16 = a4;
  v18 = &a6;
  *(_QWORD *)&UserData.Size = 1LL;
  v10 = 16LL;
  v12 = 4LL;
  v15 = 0;
  v17 = 16LL;
  v19 = 8LL;
  EventWrite(v6, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 6u, &UserData);
}
