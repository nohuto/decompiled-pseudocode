/*
 * XREFs of UserFindBaseWindowHandleLocked @ 0x1C011DA80
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C011D014 (LookForMatchingBaseWindowPHE.c)
 *     WPP_RECORDER_SF_qD @ 0x1C011DBA4 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall UserFindBaseWindowHandleLocked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  char *v8; // rbx
  __int64 v9; // r8
  int v10; // r9d
  int v12; // eax
  int v13; // [rsp+20h] [rbp-48h]
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      15,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
  }
  v8 = LookForMatchingBaseWindowPHE(a1, v4, a3);
  if ( v8 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v14,
      v6,
      v9);
    return **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v8 - (char *)qword_1C0210758) >> 5));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        if ( v4 )
          v12 = *(_DWORD *)(v4 + 56);
        else
          LOBYTE(v12) = 0;
        WPP_RECORDER_SF_qD(v7, v6, v9, v10, v13, a1, v12);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v6) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            11,
            17,
            (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
        }
      }
    }
    return 0LL;
  }
}
