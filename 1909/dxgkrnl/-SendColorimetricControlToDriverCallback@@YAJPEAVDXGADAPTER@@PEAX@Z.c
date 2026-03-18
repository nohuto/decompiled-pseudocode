/*
 * XREFs of ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02703F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C0181DA8 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _DXGKARG_CONTROLMODEBEHAVIOR v14; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v16[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v17[72]; // [rsp+78h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v15, 0xFFFFFFFFLL, v4);
  v9 = 0;
  if ( v5 >= 0 )
  {
    if ( *((int *)this + 613) >= 2400 )
    {
      *(_QWORD *)&v14.Request.0 = 0LL;
      v14.NotSatisfied.Value = 0;
      v14.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v14, v8) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = this;
    }
  }
  else if ( v5 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v10[3] = this;
    v10[4] = *((int *)this + 70);
    v10[5] = *((unsigned int *)this + 69);
  }
  else
  {
    v9 = v5;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  return v9;
}
