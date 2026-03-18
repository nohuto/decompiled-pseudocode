/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0069940
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0069F14 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux @ 0x1C0001334 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002CBAC (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  GUID *v5; // rcx
  PVOID PoolWithTag; // rax
  void *v7; // rsi
  void *v8; // r14
  PVOID v9; // rax
  __int64 v10; // rcx
  char *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  unsigned __int16 *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // r13
  __int64 v19; // r12
  int v20; // edx
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // r9
  const char *v24; // r8
  char v25; // bl
  const char *v26; // rdx
  __int64 v27; // r9
  const char *v28; // rax
  const char *v29; // rcx
  __int64 v30; // [rsp+40h] [rbp-140h]
  char v31; // [rsp+100h] [rbp-80h]
  char v32; // [rsp+104h] [rbp-7Ch]
  __int16 v33; // [rsp+108h] [rbp-78h]
  int v34; // [rsp+10Ch] [rbp-74h]
  int v35; // [rsp+110h] [rbp-70h]
  int v36; // [rsp+114h] [rbp-6Ch]
  int v37; // [rsp+118h] [rbp-68h]
  int v38; // [rsp+11Ch] [rbp-64h]
  unsigned __int16 v39; // [rsp+120h] [rbp-60h]
  __int64 v40; // [rsp+128h] [rbp-58h] BYREF
  int v41; // [rsp+130h] [rbp-50h]
  __int64 v42; // [rsp+138h] [rbp-48h] BYREF
  const wchar_t *v43; // [rsp+140h] [rbp-40h]
  __int64 v44; // [rsp+148h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp-30h] BYREF
  unsigned __int16 v46; // [rsp+160h] [rbp-20h] BYREF
  void *Src; // [rsp+168h] [rbp-18h]
  __int64 v48; // [rsp+170h] [rbp-10h]
  const GUID *v49; // [rsp+178h] [rbp-8h]
  _QWORD v50[7]; // [rsp+180h] [rbp+0h] BYREF
  int v51; // [rsp+1B8h] [rbp+38h] BYREF
  char v52; // [rsp+1BCh] [rbp+3Ch] BYREF

  v49 = a1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C005F040);
  memset(v50, 0, sizeof(v50));
  LODWORD(v50[0]) = 56;
  v50[3] = 0x100000001LL;
  v50[4] = a2;
  v42 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         v50,
         &v42) < 0 )
    v43 = 0LL;
  else
    v43 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v42,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1632) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v44, 0LL, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v44,
      &DestinationString);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v7, DestinationString.Buffer, DestinationString.Length);
    }
  }
  memset(v50, 0, sizeof(v50));
  LODWORD(v50[0]) = 56;
  v50[3] = 0x100000001LL;
  v8 = 0LL;
  v50[4] = a2;
  v40 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v50,
         &v40) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v40) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v40,
      &v46);
    v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v46 + 2LL, 0x64334855u);
    v8 = v9;
    if ( v9 )
    {
      memset(v9, 0, v46 + 2LL);
      memmove(v8, Src, v46);
    }
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = &v52;
  v12 = 5LL;
  v13 = *(unsigned __int16 *)(v10 + 320);
  v14 = (unsigned __int16 *)(v10 + 322);
  v51 = v13;
  do
  {
    v15 = *v14++;
    *(_DWORD *)v11 = v15;
    v11 += 4;
    --v12;
  }
  while ( v12 );
  v16 = *(_QWORD *)(v3 + 16);
  v17 = *(_BYTE *)(v16 + 240);
  if ( v17 < 6u )
  {
    *(&v51 + v17) = *(unsigned __int16 *)(v3 + 48);
    v16 = *(_QWORD *)(v3 + 16);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v19 = *(_QWORD *)(v18 + 8);
    v20 = *(_DWORD *)(v19 + 204);
    if ( (v20 & 2) != 0 )
      v31 = *(_BYTE *)(v19 + 1341);
    else
      v31 = 0;
    v21 = *(_DWORD *)(v16 + 168);
    v41 = v21;
    if ( v21 == 1 )
    {
      v33 = *(_WORD *)(v16 + 184);
      v35 = *(_DWORD *)(v16 + 176);
      v36 = *(_DWORD *)(v16 + 196);
      v37 = *(_DWORD *)(v16 + 192);
      v38 = *(_DWORD *)(v16 + 188);
      v34 = *(_DWORD *)(v16 + 180);
    }
    else
    {
      LOBYTE(v33) = 0;
      LOBYTE(v34) = -1;
      LOBYTE(v35) = -1;
      LOBYTE(v36) = 0;
      LOBYTE(v37) = 0;
      LOBYTE(v38) = 0;
    }
    v22 = *(_QWORD *)(v18 + 2016);
    v48 = v22;
    if ( v22 )
      v39 = *(_WORD *)(v22 + 2);
    else
      v39 = 0;
    v23 = *(_QWORD *)(v3 + 16);
    v24 = 0LL;
    v32 = (v20 & 2) != 0;
    v25 = *(_BYTE *)(v23 + 240);
    v26 = 0LL;
    if ( v21 == 2 )
      v24 = (const char *)(v16 + 186);
    v27 = *(_QWORD *)(v23 + 248);
    if ( v21 == 2 )
      v26 = (const char *)(v16 + 181);
    v28 = (const char *)(v16 + 176);
    v29 = 0LL;
    if ( v21 == 2 )
      v29 = v28;
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux(
      (__int64)v29,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V1,
      v49,
      v27,
      *(_QWORD *)(v18 + 24),
      *(_WORD *)(v3 + 48),
      v43,
      (const wchar_t *)v7,
      v30,
      v18 + 1988,
      v39,
      v48,
      (const wchar_t *)v8,
      (*(_BYTE *)(v3 + 32) & 1) == 0,
      v25 + 1,
      (__int64)&v51,
      v38,
      v37,
      v36,
      v35,
      v34,
      v33,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v18 + 2224),
      v41,
      v29,
      v26,
      v24,
      v32,
      v31,
      *(_QWORD *)(v19 + 1416));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v44 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v40 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v42 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
}
