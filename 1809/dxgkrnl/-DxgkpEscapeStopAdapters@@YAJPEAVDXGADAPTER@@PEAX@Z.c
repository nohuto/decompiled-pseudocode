/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C0045148 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *a1, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  PVOID v11; // rsi
  _BYTE v13[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( v4 >= 0 )
  {
    v11 = a1[24];
    if ( !v11 )
    {
      v9 = -1073741823;
      goto LABEL_13;
    }
    ObfReferenceObject(a1[24]);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v13);
    if ( *a2 )
    {
      if ( DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1) )
        goto LABEL_11;
    }
    else if ( (*((_DWORD *)a1 + 77) & 0x10) != 0 )
    {
LABEL_11:
      ObfDereferenceObject(v11);
      goto LABEL_13;
    }
    a2[1] = 1;
    DxgkInvalidateDeviceState((__int64)a1[24]);
    goto LABEL_11;
  }
  if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 70);
    v10[5] = *((unsigned int *)a1 + 69);
  }
  else
  {
    v9 = v4;
  }
LABEL_13:
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  return v9;
}
