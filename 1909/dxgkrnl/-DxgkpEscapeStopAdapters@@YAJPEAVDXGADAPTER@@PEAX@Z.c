/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0240660
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006854 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     DxgkInvalidateDeviceState @ 0x1C004B848 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *a1, _BYTE *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  PVOID v10; // rsi
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[64]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v14[72]; // [rsp+68h] [rbp-70h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v12, 0xFFFFFFFFLL, v4);
  v8 = 0;
  if ( v5 >= 0 )
  {
    v10 = a1[24];
    if ( !v10 )
    {
      v8 = -1073741823;
      goto LABEL_13;
    }
    ObfReferenceObject(a1[24]);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v12);
    if ( *a2 )
    {
      if ( DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1) )
        goto LABEL_11;
    }
    else if ( (*((_DWORD *)a1 + 77) & 0x10) != 0 )
    {
LABEL_11:
      ObfDereferenceObject(v10);
      goto LABEL_13;
    }
    a2[1] = 1;
    DxgkInvalidateDeviceState((__int64)a1[24]);
    goto LABEL_11;
  }
  if ( v5 == -1073741130 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *((int *)a1 + 70);
    v9[5] = *((unsigned int *)a1 + 69);
  }
  else
  {
    v8 = v5;
  }
LABEL_13:
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return v8;
}
