/*
 * XREFs of GreDescribePixelFormat @ 0x1C02B4BA8
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02A7040 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029F970 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02B4A50 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  ULONG v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  struct _RECTL v13; // xmm0
  _QWORD *v14; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v16)(_QWORD, _QWORD, _QWORD, __int64); // rax
  _QWORD v18[2]; // [rsp+38h] [rbp-29h] BYREF
  struct _RECTL v19; // [rsp+48h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+70h] [rbp+Fh]
  __int64 v23; // [rsp+78h] [rbp+17h] BYREF
  int v24; // [rsp+80h] [rbp+1Fh]
  int v25; // [rsp+84h] [rbp+23h]
  __int16 v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+90h] [rbp+2Fh]
  __int64 v28; // [rsp+98h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] )
  {
    v7 = 6;
LABEL_18:
    EngSetLastError(v7);
    v9 = 0;
    goto LABEL_19;
  }
  v8 = XDCOBJ::ipfdDevMax((XDCOBJ *)v18);
  v9 = v8;
  if ( !a3 )
    goto LABEL_19;
  if ( a3 < 0x28 || a2 < 1 || a2 > v8 )
  {
    v7 = 87;
    goto LABEL_18;
  }
  v10 = v18[0];
  v11 = *(_QWORD *)(v18[0] + 48LL);
  v24 = 0;
  v25 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v26 = 256;
  v20 = 0LL;
  v22 = 1;
  v12 = *(_DWORD *)(v11 + 40);
  if ( (v12 & 1) != 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(v11 + 48);
    v21 = v11;
    GreAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
    v12 = *(_DWORD *)(v11 + 40);
    v10 = v18[0];
  }
  if ( (v12 & 0x20000) != 0 )
  {
    v13 = *(struct _RECTL *)(v10 + 1032);
    v14 = *(_QWORD **)(v10 + 48);
    v19 = v13;
    DeviceHdev = hdevFindDeviceHdev(v14, &v19, 0LL);
    if ( DeviceHdev )
      v11 = DeviceHdev;
  }
  v16 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 3128);
  if ( !v16 || !v16(*(_QWORD *)(v11 + 1800), (unsigned int)a2, a3, a4) )
    v9 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
  if ( v23 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
LABEL_19:
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v9;
}
