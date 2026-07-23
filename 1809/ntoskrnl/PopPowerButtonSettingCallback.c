/*
 * XREFs of PopPowerButtonSettingCallback @ 0x1407483B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 */

__int64 __fastcall PopPowerButtonSettingCallback(__int64 *a1, unsigned int *a2, int a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  char *v24; // rax
  int v25; // edx
  unsigned int v26; // ebx
  __int128 v28; // [rsp+20h] [rbp-108h] BYREF
  __int128 v29; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-E8h]
  __int128 v31; // [rsp+50h] [rbp-D8h]
  __int128 v32; // [rsp+60h] [rbp-C8h]
  __int128 v33; // [rsp+70h] [rbp-B8h]
  __int128 v34; // [rsp+80h] [rbp-A8h]
  __int128 v35; // [rsp+90h] [rbp-98h]
  __int128 v36; // [rsp+A0h] [rbp-88h]
  __int128 v37; // [rsp+B0h] [rbp-78h]
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+D0h] [rbp-58h]
  __int128 v40; // [rsp+E0h] [rbp-48h]
  __int128 v41; // [rsp+F0h] [rbp-38h]
  __int64 v42; // [rsp+100h] [rbp-28h]

  PopAcquirePolicyLock();
  v6 = *((_OWORD *)PopPolicy + 1);
  v28 = *(_OWORD *)PopPolicy;
  v7 = *((_OWORD *)PopPolicy + 2);
  v29 = v6;
  v8 = *((_OWORD *)PopPolicy + 3);
  v30 = v7;
  v9 = *((_OWORD *)PopPolicy + 4);
  v31 = v8;
  v10 = *((_OWORD *)PopPolicy + 5);
  v32 = v9;
  v11 = *((_OWORD *)PopPolicy + 6);
  v33 = v10;
  v34 = v11;
  v35 = *((_OWORD *)PopPolicy + 7);
  v12 = *((_OWORD *)PopPolicy + 9);
  v36 = *((_OWORD *)PopPolicy + 8);
  v13 = *((_OWORD *)PopPolicy + 10);
  v37 = v12;
  v14 = *((_OWORD *)PopPolicy + 11);
  v38 = v13;
  v15 = *((_OWORD *)PopPolicy + 12);
  v39 = v14;
  v16 = *((_OWORD *)PopPolicy + 13);
  v17 = *((_QWORD *)PopPolicy + 28);
  v40 = v15;
  v41 = v16;
  v42 = v17;
  v18 = *a1;
  v19 = *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_POWERBUTTON_ACTION.Data1 == *a1 )
    v19 = *(_QWORD *)GUID_POWERBUTTON_ACTION.Data4 - a1[1];
  if ( v19 )
  {
    v20 = *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 - v18;
    if ( *(_QWORD *)&GUID_SLEEPBUTTON_ACTION.Data1 == v18 )
      v20 = *(_QWORD *)GUID_SLEEPBUTTON_ACTION.Data4 - a1[1];
    if ( v20 )
    {
      v21 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - v18;
      if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == v18 )
        v21 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - a1[1];
      if ( v21 )
      {
        v22 = *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 - v18;
        if ( *(_QWORD *)&GUID_LIDOPEN_POWERSTATE.Data1 == v18 )
          v22 = *(_QWORD *)GUID_LIDOPEN_POWERSTATE.Data4 - a1[1];
        if ( !v22 && a3 == 4 && a2 )
        {
          v22 = *a2;
          v23 = DWORD2(v30);
          if ( (unsigned int)v22 <= 7 )
            v23 = *a2;
          DWORD2(v30) = v23;
        }
        goto LABEL_24;
      }
      v24 = (char *)&v29 + 12;
    }
    else
    {
      v24 = (char *)&v29;
    }
  }
  else
  {
    v24 = (char *)&v28 + 4;
  }
  if ( a3 != 4 || !a2 || (v22 = *a2, (unsigned int)v22 > 8) || (v25 = 333, !_bittest(&v25, v22)) )
  {
    v26 = -1073741811;
    goto LABEL_25;
  }
  *(_QWORD *)v24 = 0LL;
  *((_DWORD *)v24 + 2) = 0;
  *(_DWORD *)v24 = v22;
LABEL_24:
  LOBYTE(v22) = 1;
  v26 = PopApplyPolicy(v22, 0LL, &v28, 232LL);
LABEL_25:
  PopReleasePolicyLock();
  return v26;
}
