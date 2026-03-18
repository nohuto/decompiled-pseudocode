/*
 * XREFs of UserJobCallout @ 0x1C00EF070
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00EEC10 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00EEC90 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00EEEE0 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00EEF80 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00EF30C (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C02117A8 (WPP_RECORDER_SF_Dq.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // edi
  int v3; // r14d
  struct tagPROCESSINFO *v4; // rsi
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  struct tagW32JOB *i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(v12);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v1; i = *(struct tagW32JOB **)i )
    ;
  if ( v3 )
  {
    v9 = (unsigned int)(v3 - 1);
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            (unsigned int)(v3 - 1),
            v5,
            v3 - 1 + 12,
            v3 - 1 + 12,
            (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids,
            v1,
            i);
        if ( i )
          JobCalloutTerminate(i, v5);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dq(v9, v5, v6, v7);
        v2 = -1073741822;
      }
      goto LABEL_10;
    }
    if ( i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqq(v9, v5, 0xDu, 0xCu, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, v1, i, v4);
      JobCalloutAddProcess(i, v4);
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(0, v5, 13, 11, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, v1);
LABEL_27:
    v2 = -1073741823;
    goto LABEL_10;
  }
  if ( !i )
  {
    i = CreateW32Job(v1, v5);
    if ( !i )
      goto LABEL_27;
LABEL_21:
    *((_DWORD *)i + 6) = (_DWORD)v4;
    UpdateJob(i, v5);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 != *((_DWORD *)i + 6) )
    goto LABEL_21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(0, v5, 13, 10, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids);
  }
LABEL_10:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v10);
  return v2;
}
