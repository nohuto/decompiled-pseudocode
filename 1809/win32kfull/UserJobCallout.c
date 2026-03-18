/*
 * XREFs of UserJobCallout @ 0x1C00B1A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C011C358 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0128218 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C012C000 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C012CA80 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  struct _EJOB *v1; // rbp
  unsigned int v2; // ebx
  int v3; // edi
  struct tagPROCESSINFO *v4; // rsi
  struct tagW32JOB *i; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(struct _EJOB **)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(struct tagPROCESSINFO **)(a1 + 16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v1; i = *(struct tagW32JOB **)i )
    ;
  if ( !v3 )
  {
    if ( i )
    {
      if ( (_DWORD)v4 == *((_DWORD *)i + 6) )
        goto LABEL_8;
    }
    else
    {
      i = CreateW32Job(v1);
      if ( !i )
      {
LABEL_18:
        v2 = -1073741823;
        goto LABEL_8;
      }
    }
    *((_DWORD *)i + 6) = (_DWORD)v4;
    UpdateJob(i);
    goto LABEL_8;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    if ( i )
    {
      JobCalloutAddProcess(i, v4);
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  if ( v6 == 1 )
  {
    if ( i )
      JobCalloutTerminate(i);
  }
  else
  {
    v2 = -1073741822;
  }
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
