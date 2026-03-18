/*
 * XREFs of GreDescribePixelFormat @ 0x1C028A72C
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C027E6A0 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02768D4 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C028A648 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rsi
  ULONG v8; // ecx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v13)(_QWORD, _QWORD, _QWORD, __int64); // rax
  struct _RECTL v15; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+50h] [rbp-68h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v16, a1);
  v7 = v16[0];
  if ( !v16[0] )
  {
    v8 = 6;
LABEL_15:
    EngSetLastError(v8);
    v10 = 0;
    goto LABEL_16;
  }
  v9 = XDCOBJ::ipfdDevMax((XDCOBJ *)v16);
  v10 = v9;
  if ( !a3 )
    goto LABEL_16;
  if ( a3 < 0x28 || a2 < 1 || a2 > v9 )
  {
    v8 = 87;
    goto LABEL_15;
  }
  *(_QWORD *)&v15.left = *(_QWORD *)(v7 + 48);
  v11 = *(_QWORD *)&v15.left;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v15);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
  {
    v15 = *(struct _RECTL *)(v7 + 1440);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v7 + 48), &v15, 0LL);
    if ( DeviceHdev )
      v11 = DeviceHdev;
  }
  v13 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 3120);
  if ( !v13 || !v13(*(_QWORD *)(v11 + 1792), (unsigned int)a2, a3, a4) )
    v10 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
LABEL_16:
  if ( v7 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v10;
}
