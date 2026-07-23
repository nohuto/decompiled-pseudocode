/*
 * XREFs of ExpSetSoftRebootFlags @ 0x140319788
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(int a1)
{
  unsigned int v2; // esi
  int v4; // edx
  signed __int32 *i; // r8
  signed __int32 v6; // ett
  __int32 v7; // r14d
  int v8; // ebx
  __int64 (__fastcall *v9)(_QWORD, _QWORD); // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v13[13]; // [rsp+30h] [rbp-D8h]
  int v14; // [rsp+98h] [rbp-70h]
  int v15; // [rsp+9Ch] [rbp-6Ch]
  __int64 (__fastcall *v16)(int, int); // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A8h] [rbp-60h]
  int v18; // [rsp+ACh] [rbp-5Ch]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  int v20; // [rsp+B8h] [rbp-50h]
  int v21; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v22)(int, int); // [rsp+C0h] [rbp-48h]
  int v23; // [rsp+C8h] [rbp-40h]
  int v24; // [rsp+CCh] [rbp-3Ch]
  __int64 (__fastcall *v25)(int, int); // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+DCh] [rbp-2Ch]
  __int64 (__fastcall *v28)(unsigned int, int); // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+ECh] [rbp-1Ch]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+FCh] [rbp-Ch]
  __int64 (__fastcall *v34)(int, int); // [rsp+100h] [rbp-8h]
  int v35; // [rsp+108h] [rbp+0h]
  int v36; // [rsp+10Ch] [rbp+4h]
  __int64 (__fastcall *v37)(int, int); // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]

  v12 = 0LL;
  v13[0] = 0LL;
  v13[4] = BapdpKsrCompleteScenarioPhase0;
  v13[1] = 0x800000000LL;
  v13[2] = BapdpKsrInitiateScenarioPhase0;
  v13[3] = 0x1000000008LL;
  v13[6] = BapdpKsrCancelScenario;
  v13[12] = BapdpKsrCancelScenario;
  v16 = BapdpKsrCompleteScenario;
  v28 = BapdpKsrComplete;
  v13[5] = 8LL;
  v13[7] = 0x1000000000LL;
  v13[8] = BapdpKsrpInitiateScenario;
  v13[9] = 0x1000000010LL;
  v13[10] = 0LL;
  v13[11] = 16LL;
  v14 = 16;
  v15 = 2;
  v17 = 0;
  v18 = 1;
  v19 = 0LL;
  v20 = 2;
  v21 = 8;
  v22 = BapdpKsrInitiateScenarioPhase0;
  v23 = 2;
  v24 = 16;
  v25 = BapdpKsrpInitiateScenario;
  v26 = 2;
  v27 = 1;
  v29 = 1;
  v30 = 1;
  v31 = 0LL;
  v32 = 1;
  v33 = 8;
  v34 = BapdpKsrInitiateScenarioPhase0;
  v35 = 1;
  v36 = 16;
  v37 = BapdpKsrpInitiateScenario;
  v38 = 1LL;
  v39 = 0LL;
  v2 = a1 & 0x8000001B;
  if ( a1 < 0 )
    return 3221225485LL;
  v4 = 0;
  for ( i = (signed __int32 *)&v12; ; i += 4 )
  {
    if ( v2 == i[1] )
    {
      v6 = *i;
      v7 = _InterlockedCompareExchange(&ExSoftRebootState, a1 & 0x1B | 0x80000000, *i);
      if ( v6 == v7 )
        break;
    }
    if ( (unsigned int)++v4 >= 0x10 )
      return 3221266435LL;
  }
  _m_prefetchw(&ExSoftRebootFlags);
  v8 = ExSoftRebootFlags;
  v9 = (__int64 (__fastcall *)(_QWORD, _QWORD))v13[2 * v4];
  if ( v9 )
    v10 = v9((unsigned int)ExSoftRebootFlags, (unsigned int)a1);
  else
    v10 = 0;
  v11 = ExSoftRebootFlags & 0x7CFFFFE4;
  if ( v10 < 0 )
  {
    ExSoftRebootFlags = v11 | v8 & 0x8300001B;
    _InterlockedExchange(&ExSoftRebootState, v7);
  }
  else
  {
    ExSoftRebootFlags = v11 | a1 & 0x8300001B;
    _InterlockedExchange(&ExSoftRebootState, v2);
  }
  return (unsigned int)v10;
}
