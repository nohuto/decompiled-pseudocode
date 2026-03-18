/*
 * XREFs of UserJobCallout @ 0x1C0018720
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00189BC (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001A014 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D0C3C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C012471C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FDC0 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C013645C (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C013757C (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C0211CE8 (WPP_RECORDER_SF_Dq.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // edi
  int v3; // r14d
  struct tagPROCESSINFO *v4; // rsi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  struct tagW32JOB *i; // rbx
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(v11);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v1; i = *(struct tagW32JOB **)i )
    ;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            1,
            v5,
            13,
            13,
            (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids,
            (char)v1,
            (char)i);
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dq(v3 - 1, v5, v6, v7);
        v2 = -1073741822;
      }
      goto LABEL_10;
    }
    if ( i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqq(
          0,
          v5,
          13,
          12,
          (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids,
          (char)v1,
          (char)i,
          (char)v4);
      JobCalloutAddProcess(i, v4);
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(0, v5, 13, 11, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, (char)v1);
LABEL_27:
    v2 = -1073741823;
    goto LABEL_10;
  }
  if ( !i )
  {
    i = CreateW32Job(v1);
    if ( !i )
      goto LABEL_27;
LABEL_21:
    *((_DWORD *)i + 6) = (_DWORD)v4;
    UpdateJob(i);
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v9);
  return v2;
}
