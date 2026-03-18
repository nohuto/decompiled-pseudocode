/*
 * XREFs of NtMITInjectLegacyISMTouchFrame @ 0x1C00B44D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     InjectLegacyISMTouch @ 0x1C0132140 (InjectLegacyISMTouch.c)
 */

__int64 __fastcall NtMITInjectLegacyISMTouchFrame(_OWORD *a1, __int64 a2, __int64 a3)
{
  CInputThread *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // edi
  _OWORD *v7; // rsi
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  _BYTE v14[24]; // [rsp+38h] [rbp-400h] BYREF
  _BYTE v15[992]; // [rsp+50h] [rbp-3E8h] BYREF
  __int64 v16; // [rsp+448h] [rbp+10h] BYREF
  _OWORD *v17; // [rsp+450h] [rbp+18h]

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v16, a2, a3);
  if ( CInputThread::IsInputThread(v4) )
  {
    v7 = Win32AllocPoolWithQuotaZInit(0x3D8uLL, 0x7A747355u);
    v17 = v7;
    if ( v7 )
    {
      if ( (_OWORD *)((char *)a1 + 984) < a1 || (unsigned __int64)a1 + 984 > MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      v8 = v15;
      v9 = 7LL;
      v10 = 7LL;
      do
      {
        *v8 = *a1;
        v8[1] = a1[1];
        v8[2] = a1[2];
        v8[3] = a1[3];
        v8[4] = a1[4];
        v8[5] = a1[5];
        v8[6] = a1[6];
        v8 += 8;
        *(v8 - 1) = a1[7];
        a1 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *a1;
      v8[1] = a1[1];
      v8[2] = a1[2];
      v8[3] = a1[3];
      v8[4] = a1[4];
      *((_QWORD *)v8 + 10) = *((_QWORD *)a1 + 10);
      v11 = v7;
      v12 = v15;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        *(v11 - 1) = v12[7];
        v12 += 8;
        --v9;
      }
      while ( v9 );
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      *((_QWORD *)v11 + 10) = *((_QWORD *)v12 + 10);
      PushW32ThreadLock(v7, v14, Win32FreePool);
      v6 = InjectLegacyISMTouch(v7);
      PopW32ThreadLock(v14);
      Win32FreePool((__int64)v7);
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = 5;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
