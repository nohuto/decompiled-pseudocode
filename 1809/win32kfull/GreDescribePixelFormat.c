/*
 * XREFs of GreDescribePixelFormat @ 0x1C029E480
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C0291950 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C029E390 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  int v7; // edi
  ULONG v8; // ecx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v14)(_QWORD, _QWORD, _QWORD, __int64); // rax
  struct _RECTL v16; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-59h] BYREF
  char v18[32]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp-29h] BYREF
  char v20[80]; // [rsp+98h] [rbp-9h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v7 = 0;
  if ( !v17[0] )
  {
    v8 = 6;
LABEL_16:
    EngSetLastError(v8);
    goto LABEL_17;
  }
  v9 = XDCOBJ::ipfdDevMax((XDCOBJ *)v17);
  v10 = v9;
  if ( !a3 )
  {
    v7 = v9;
LABEL_17:
    v10 = v7;
    goto LABEL_18;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v9 )
  {
    v8 = 87;
    goto LABEL_16;
  }
  *(_QWORD *)&v16.left = *(_QWORD *)(v17[0] + 48LL);
  v11 = *(_QWORD *)&v16.left;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v16);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
  {
    v16 = *(struct _RECTL *)(v17[0] + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v17[0] + 48LL), &v16, 0LL, v12);
    if ( DeviceHdev )
      v11 = DeviceHdev;
  }
  v14 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 3128);
  if ( !v14 || !v14(*(_QWORD *)(v11 + 1800), (unsigned int)a2, a3, a4) )
    v10 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v18);
  return v10;
}
